


var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');





var height = canvas.height;
var wide = canvas.width;




var gameTick = 0;
var gameOverResult = 0;
var gameScore = 0;

// Define image variables

var pepeStandingRight = new Image(64,96);
var pepeMovingRight = new Image(64,96);
var pepeMovedRight = new Image(64,96);
var pepeStandingLeft = new Image(64,96);
var pepeMovingLeft = new Image(64,96);
var pepeMovedLeft = new Image(64,96);
var pepeMovingForward = new Image(64,96);
var pepeStandingForward = new Image(64,96);
var pepeMovedForward = new Image(64,96);
var pepeMovingBack = new Image(64,96);
var pepeStandingBack = new Image(64, 96);
var pepeMovedBack = new Image(64,96);
pepeStandingRight.src = 'picss/dof/peper01.png';
pepeMovingRight.src = 'picss/dof/peper02.png';
pepeMovedRight.src = 'picss/dof/peper03.png';
pepeStandingLeft.src = 'picss/dof/pepel01.png';
pepeMovingLeft.src = 'picss/dof/pepel02.png';
pepeMovedLeft.src = 'picss/dof/pepel03.png';
pepeMovingForward.src = 'picss/dof/pepef02.png'; 
pepeStandingForward.src = 'picss/dof/pepef01.png';
pepeMovedForward.src = 'picss/dof/pepef03.png';
pepeMovingBack.src = 'picss/dof/pepeb02.png';
pepeStandingBack.src = 'picss/dof/pepeb01.png';
pepeMovedBack.src = 'picss/dof/pepeb03.png';





var bgtile = new Image(64,48);
bgtile.src = 'picss/dof/bgtile.png';

var border = new Image(25,25);
border.src = 'picss/dof/border.png';

var badBall = new Image(64,64);
badBall.src = 'picss/dof/badball.png';

var blue = new Image(25,26);
blue.src = 'picss/dof/4chan.png';

// Define Entity Classes


var player = {
	x: (350),
	y: (480-96 - 25), 
	width: 64,
	height: 96,
	motion: 0,
	dir: 'r',
	mframe: 0,
}

allBalls = [];
var numBalls = 0;
allBlue = [];
var numBlue = 0;

function badBalls(x, y, width, height, motionx, motiony, fx, src) {
	this.x = x;
	this.y = y;
	this.width = 64;
	this.height = 64;
	this.dirx = motionx;
	this.diry = motiony;
	this.fx = fx;
	this.src = src
	/*
	allBalls[numBalls] = this;
	numBalls += 1;
	*/
}

function spawnBall() {
	newBall = allBalls[numBalls-1];
	nx = newBall.x + 5 + newBall.width;
	ny = newBall.y +5 + newBall.height;
	nw = 64;
	nh = 64;
	nmx = newBall.dirx * -1;
	nmy = newBall.diry * -1;
	nfx = 'gg';
	nsrc = badBall;
	/*if (nx >= (wide - nw - 25) ) {
		nx = (wide - nw - 25);
		nmx = 1;
	}else if (ny >= (height - nh - 25) ) {
		ny = (height - nh - 25);
	}*/

	newBall = new badBalls(nx, ny, nw, nh, nmx, nmy, nfx, nsrc);
	allBalls[numBalls] = newBall;
	numBalls += 1;
}

function spawnBlue() {
	newBlue = allBalls[numBalls-1];
	nx = Math.floor((Math.random() * (canvas.width-64)) + 64);
	ny = Math.floor((Math.random() * (canvas.height-240)) + 64);
	nw = 25;
	nh = 25;
	nmx = 0;
	nmy = 0;
	nfx = 'b';
	nsrc = blue;
	newBlue = new badBalls(ny,ny,nw,nh,nmx,nmy,nfx, nsrc);
	allBalls[numBalls] = newBlue;
	numBalls += 1;
}


// Keyboard Input

var WDown = 0;
var ADown = 0;
var DDown = 0;
var SDown = 0;


document.addEventListener('keydown', function (e) {
	if (e.keyCode == 87) {
		WDown = 1;
	}else if (e.keyCode == 65) {
		ADown = 1;
	}
	else if (e.keyCode == 68) {
		DDown = 1;
	}
	else if (e.keyCode == 83) {
		SDown = 1;
	}

});

document.addEventListener('keyup', function (e) {
	if (e.keyCode == 87) {
		WDown = 0;
		player.motion -= 5;
	}
	else if (e.keyCode == 83) {
		SDown = 0;
		player.motion -= 5;
	}
	else if (e.keyCode == 65) {
		ADown = 0;
		player.motion -= 5;
	}
	else if (e.keyCode == 68) {
		DDown = 0;
		player.motion -= 5;
	}

});

function moveEnt(ent, dirx, diry) {
	if (diry == 1 && ent.y >= 25) {
		ent.y -= 5;
	} 
	if (dirx == 1 && ent.x >= 25) {
		ent.x -= 5;
	}
	if (dirx == -1 && ent.x <= (wide - ent.width - 25) ){
		ent.x += 5;
	}
	if (diry == -1 && ent.y <= (height - ent.height - 25) ) {
		ent.y += 5;
	}
	if (ent.x <= 25) {
		ent.x += 5;
		ent.dirx *= -1;
	}
	if (ent.x >= (wide - ent.width - 25) ) {
		ent.x -= 5;
		ent.dirx *= -1;
	}
	if (ent.y <= 25) {
		ent.y += 5;
		ent.diry *= -1;
	}
	if (ent.y >= (height - ent.height - 25) ) {
		ent.y -= 5;
		ent.diry *= -1;
	}


}

function drawEntities() {
	//badBalls
	for (i=1; i<=numBalls; i++) {
		tBall = allBalls[i-1];
		tBallx = tBall.dirx;
		tBally = tBall.diry;
		moveEnt(tBall, tBallx, tBally);
		for (j=0; j<numBalls; j++) {
			if (j != (i-1) ) {
			jBall = allBalls[j]
				if ( (tBall.x >= jBall.x && tBall.x <= (jBall.x + jBall.width) ) && (tBall.y >= (jBall.y - tBall.height) && (tBall.y <= (jBall.y + jBall.height) ) )) {
					tBall.dirx *= -1;
					jBall.dirx *= -1;
					if ( (jBall.y - tBall.y) > 48 || ( (tBall.y - jBall.y) > 48) ){
						tBall.diry *= -1;
						jBall.diry *= -1;
						if (jBall.y > tBall.y) {
							jBall.y += 5;
							tBall.y -=5;
						} else {
							tBall.y += 5;
							jBall.y -=5;
						}
					}

				}
			}
		}
		bsrc = tBall.src;
		tBx = tBall.x;
		tBy = tBall.y;
		ctx.drawImage(bsrc, tBx, tBy);
	}
	//blue
	

}

function movePlayer(dir) {

	if (dir == 1 && player.y >= 25) {
		player.y -= 10;
		player.motion = 10;
	} 
	else if (dir == 2 && player.x >= 25) {
		player.x -= 10;
		player.motion = 10;
	}
	else if (dir == 3 && player.x <= (wide - player.width -25) ){
		player.x += 10;
		player.motion = 10;
	}
	else if (dir == 4 && player.y <= (height - player.height - 25) ) {
		player.y += 10;
		player.motion = 10;
	}
}

function resetBalls() {
	gameTick = 0;
	allBalls = [];
	numBalls = 0;
	allBlue = [];
	numBlue = 0;
}


function playerCollision(fx) {
	if (fx == 'gg') {
		alert("GAME OVER");
		gameOverResult = 1;
	} else if (fx == 'b') {
		resetBalls();
	}
}

function checkPlayerCollision() {
	hitboxBodx = player.x + 11;
	hitboxBody = player.y + 2;
	hitboxBodw = 40;
	hitboxBodh = 65;
	if (player.dir == 'r') {
		hitboxFx = player.x + 13;
		hitboxFy = player.y + 67;
		hitboxFw = 51;
		hitboxFh = 29;
	} else if (player.dir == 'l') {
		hitboxFx = player.x;
		hitboxFy = player.y + 67;
		hitboxFw = 51;
		hitboxFh = 29;
	}
	else {
		hitboxFx = player.x;
		hitboxFy = player.y + 67;
		hitboxFw = 64;
		hitboxFh = 29;
	}
	for (i=0; i<numBalls; i++) {
		tBall = allBalls[i];
		tHitboxx = tBall.x;
		tHitboxy = tBall.y;
		tHitboxw = tBall.width;
		tHitboxh = tBall.height;
		collisionType = tBall.fx; 
		//Check body hitbox
		if ( (tHitboxx >= (hitboxBodx -  tHitboxw) && (tHitboxx <= (hitboxBodx + tHitboxw) ) ) && (tHitboxy >= (hitboxBody - tHitboxh) && (tHitboxy <= (hitboxBody + hitboxBodh) )) ) {
			playerCollision(collisionType);
		} else if ( (tHitboxx >= (hitboxFx - tHitboxw) && (tHitboxx <= (hitboxFx + hitboxFw) ) ) && (tHitboxy >= (hitboxFy -  tHitboxh) && (tHitboxy <= (hitboxFy + hitboxFh) )) ) {
			playerCollision(collisionType);
		}
	}
}

function drawPlayer(){
	if (WDown == 1) {
		movePlayer(1);
		player.motion = 10;
		player.dir = 'b';
	}
	if (ADown == 1) {
		movePlayer(2);	
		player.motion = 10;
		player.dir = 'l';
	}
	if (DDown == 1) {
		movePlayer(3);
		player.motion = 10;
		player.dir = 'r';
	}
	if (SDown == 1) {
		movePlayer(4);
		player.motion = 10;
		player.dir = 'f';
	}
	checkPlayerCollision();
	if (gameOverResult == 1) {
		alert("COLLISION PEPE");
	}
	if (player.motion >= 0) {
		if (player.mframe >= 4) {
			player.mframe = 0;
		}
		player.mframe += 1;

		if (player.mframe == 1) {
			if (player.dir == 'r') {
				pimg = pepeStandingRight;
			} else if (player.dir == 'l') {
				pimg = pepeStandingLeft;
			} else if (player.dir == 'f') {
				pimg = pepeStandingForward;
			} else if (player.dir == 'b') {
				pimg = pepeStandingBack;
			} else {
				alert('player.dir BAD VALUE');
			}
		} else if (player.mframe == 2 || player.mframe == 4) {

			if (player.dir == 'r') {
				pimg = pepeMovingRight;
			} else if (player.dir == 'l') {
				pimg = pepeMovingLeft;
			} else if (player.dir == 'f') {
				if (player.mframe == 2) {
					pimg = pepeMovingForward;
				} else {
					pimg = pepeMovedForward;
				}
			} else if (player.dir == 'b') {
				if (player.mframe == 2) {
					pimg = pepeMovingBack;
				} else {
					pimg = pepeMovedBack;
				}

			} else {
				alert('player.dir BAD VALUE');
			}
			player.motion -= 5;
		}	else {	
			if (player.dir == 'r') {
				pimg = pepeMovedRight;
			} else if (player.dir == 'l') {
				pimg = pepeMovedLeft;
			} else if (player.dir == 'f') {
				pimg = pepeStandingForward;
			} else if (player.dir == 'b') {
				pimg = pepeStandingBack;
			} else {
				alert('player.dir BAD VALUE');
			}

		}
	} else {
		if (player.dir == 'r') {
			pimg = pepeStandingRight;
		} else if (player.dir == 'l') {
			pimg = pepeStandingLeft;
		} else if (player.dir == 'f') {
			pimg = pepeStandingForward;
		} else if (player.dir == 'b') {
			pimg = pepeStandingBack;
		} else {
			alert('player.dir BAD VALUE');
		}
	}
	ctx.drawImage(pimg, player.x, player.y);
}

function drawBackground() {
	bgimg = bgtile;
	for (i=0; i<=10; i++) {
		thisX = (i * 64);
		for (j=0; j<=480; j++) {
			if (j % 48 == 0 || j == 0) {
				thisY = j;
				ctx.drawImage(bgimg, thisX, thisY);
			}
		}
	}


	/* SOLID COLOR METHOD
	ctx.beginPath();
	ctx.rect(0,0,wide,height);
	ctx.fillStyle = '#f8f8f2';
	ctx.fill();
--	__BORDERS__ --
*/

	bdimg = border;
	cx = 0;
	cy = 0;
	for (i=0; i<wide; i++) {
		if (i % 25 == 0) {
			cx = i;
			ctx.drawImage(border, cx, cy);
		}
	}
	for (i=0; i<wide; i++) {
		if (i % 25 == 0) {
			cx = i;
			cy = height-25;
			ctx.drawImage(border, cx, cy);
		}
	}
	for (i=0; i<height; i++) {
		if (i % 25 == 0) {
			cx = 0;
			cy = i;
			ctx.drawImage(border, cx, cy);
		}
	}
	for (i=0; i<wide; i++) {
		if (i % 25 == 0) {
			cx = wide-25;
			cy = i;
			ctx.drawImage(border, cx, cy);
		}
	}
}

function testBlue() {
	result = Math.floor((Math.random() * 100) + 1);
	if (result > 50) {
		spawnBlue();
	}
}

function drawGame() {
	if (gameScore >= 123456) {
		alert("GAME OVER!");
	}
	if (gameTick == 0) {
		var ball = new badBalls(300, 30, 64, 64, 1, 1, 'gg', badBall);
		allBalls[numBalls] = ball;
		numBalls += 1;
	}
	gameTick += 1;
	if (gameTick % 210 == 0) {
		spawnBall();
	}	
	if (gameTick % 42 == 0) {
		testBlue();
	}
		
	drawBackground();
	drawPlayer();
	drawEntities();
	gameScore += 1;
	document.getElementById('score').innerHTML = gameScore;
	document.getElementById('dist').innerHTML = numBlue;
}

alert('Use WASD to Move!');
setInterval(drawGame, 42);



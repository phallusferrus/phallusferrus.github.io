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
var pepeStandingLeft = new Image(64,96);
var pepeMovingLeft = new Image(64,96);
var pepeMovingForward = new Image(64,96);
var pepeStandingForward = new Image(64,96);
var pepeMovingBack = new Image(64,96);
var pepeStandingBack = new Image(64, 96);
pepeStandingRight.src = 'picss/dof/pepesr.jpg';
pepeMovingRight.src = 'picss/dof/pepemr.jpg';
pepeStandingLeft.src = 'picss/dof/pepesl.jpg';
pepeMovingLeft.src = 'picss/dof/pepeml.jpg';
pepeMovingForward.src = 'picss/dof/pepemf.jpg'; 
pepeStandingForward.src = 'picss/dof/pepesf.jpg';
pepeMovingBack.src = 'picss/dof/pepemb.jpg';
pepeStandingBack.src = 'picss/dof/pepesb.jpg';

var badBall = new Image(64,64);
badBall.src = 'picss/dof/badball.jpg';

// Define Entity Classes


var player = {
	x: (350),
	y: (480-96), 
	width: 64,
	height: 96,
	motion: 0,
	legs: 0,
	dir: 'r',
}

allBalls = []
var numBalls = 0;

function badBalls(x, y, width, height, motionx, motiony) {
	this.x = x;
	this.y = y;
	this.width = 64;
	this.height = 64;
	this.dirx = motionx;
	this.diry = motiony;
}

function spawnBall() {
	newBall = allBalls[numBalls-1];
	nx = newBall.x + 5 + newBall.width;
	ny = newBall.y +5 + newBall.height;
	nw = 64;
	nh = 64;
	nmx = newBall.dirx * -1;
	nmy = newBall.diry * -1;
	/*if (nx >= (wide - nw - 25) ) {
		nx = (wide - nw - 25);
		nmx = 1;
	}else if (ny >= (height - nh - 25) ) {
		ny = (height - nh - 25);
	}*/

	newBall = new badBalls(nx, ny, nw, nh, nmx, nmy);
	allBalls[numBalls] = newBall;
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
	else {
		if (ent.x <= 25) {
			ent.x += 5;
			ent.dirx *= -1;
		} else if (ent.x >= (wide - ent.width - 25) ) {
			ent.x -= 5;
			ent.dirx *= -1;
		}
		else if (ent.y <= 25) {
			ent.y += 5;
			ent.diry *= -1;
		} else if (ent.y >= (height - ent.height - 25) ) {
			ent.y -= 5;
			ent.diry *= -1;
		}
	}

}


function drawEntities() {
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
					tBall.diry *= -1;
					jBall.dirx *= -1;
					tBall.diry *= -1;
				}
			}
		}
		bsrc = badBall;
		tBx = tBall.x;
		tBy = tBall.y;
		ctx.drawImage(bsrc, tBx, tBy);
	}
}

		

		


function movePlayer(dir) {
	if (dir == 1 && player.y >= 25) {
		player.y -= 10;
		player.motion = 10;
		player.dir = 'b';
	} 
	else if (dir == 2 && player.x >= 25) {
		player.x -= 10;
		player.dir = 'l';
		player.motion = 10;
	}
	else if (dir == 3 && player.x <= (wide - player.width) ){
		player.x += 10;
		player.dir = 'r';
		player.motion = 10;
	}
	else if (dir == 4 && player.y <= (height - player.height - 25) ) {
		player.y += 10;
		player.motion = 10;
		player.dir = 'f';
	}
}

function playerCollision(blurb) {
	gameOverResult = 1;
	alert("SCORE: "+gameScore);
	gameScore=1234567;wa
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
		//Check body hitbox
		if ( (tHitboxx >= (hitboxBodx -  tHitboxw) && (tHitboxx <= (hitboxBodx + tHitboxw) ) ) && (tHitboxy >= (hitboxBody - tHitboxh) && (tHitboxy <= (hitboxBody + hitboxBodh) )) ) {
			playerCollision();
		} else if ( (tHitboxx >= (hitboxFx - tHitboxw) && (tHitboxx <= (hitboxFx + hitboxFw) ) ) && (tHitboxy >= (hitboxFy -  tHitboxh) && (tHitboxy <= (hitboxFy + hitboxFh) )) ) {
			playerCollision();
		}
	}
}

function drawPlayer(){
	if (WDown == 1) {
		movePlayer(1);
	}
	if (ADown == 1) {
		movePlayer(2);
	}
	if (DDown == 1) {
		movePlayer(3);
	}
	if (SDown == 1) {
		movePlayer(4);
	}
	checkPlayerCollision();
	if (gameOverResult == 1) {
		alert("COLLISION PEPE");
	}
	if (player.motion >= 0) {
		if (player.legs % 2 == 0) {
			if (player.dir == 'r') {
				pimg = pepeMovingRight;
			} else if (player.dir == 'l') {
				pimg = pepeMovingLeft;
			} else if (player.dir == 'f') {
				pimg = pepeMovingForward;
			} else if (player.dir == 'b') {
				pimg = pepeMovingBack;
			} else {
				alert('player.dir BAD VALUE');
			}
		}
		 else {
			pimg = pepeStandingRight;
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
		player.legs += 1;
		player.motion -= 2;
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
	ctx.beginPath();
	ctx.rect(0,0,wide,height);
	ctx.fillStyle = '#ab0012';
	ctx.fill();
}

function drawGame() {
	if (gameScore >= 123456) {
		alert("GAME OVER!");
	}
	if (gameTick == 0) {
		var ball = new badBalls(300, 30, 64, 64, 1, 1);
		allBalls[numBalls] = ball;
		numBalls += 1;
	}
	gameTick += 1;
	if (gameTick % 42 == 0) {
		spawnBall();
	}	
	drawBackground();
	drawPlayer();
	drawEntities();
	gameScore += 1;
	document.getElementById('score').innerHTML = gameScore;
	document.getElementById('dist').innerHTML = allBalls[0].y;
}

alert('begin!');
setInterval(drawGame, 42);



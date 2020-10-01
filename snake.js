


var token = {
	x:10,
	y:10,
	width:20,
	length:20,
	color:'red'
}

var player = {
	x:100,
	y:100,
	width:20,
	len: 0,
	color:'green',
	dir:0
}

var segs = [player];

var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');
var wide = canvas.width;
var high = canvas.height;
var skore = 0;
var tempus = 420;

document.addEventListener('keypress', function (e) {
	if (e.keyCode == 119 && player.dir != 4) {
		player.dir = 1;
	} else if (e.keyCode == 97 && player.dir != 3) {
		player.dir = 2;
	} else if (e.keyCode == 100 && player.dir != 2) {
		player.dir = 3;
	} else if (e.keyCode == 115 && player.dir != 1) {
		player.dir = 4;
	} else if (e.keyCode == 32) {
		player.dir = 0;
	}
});

function Ptoken(x,y,width,len,color,dir) {
	this.x = x;
	this.y = y;
	this.width = width;
	this.len = len;
	this.color = color;
	this.dir = dir;
}

function increaseLeng() {
	xseg = segs[skore-1];
	nx = xseg.x;
	ny = xseg.y;
	nw = xseg.width;
	nl = skore;
	nc = xseg.color;
	nd = xseg.dir;
	if (xseg.dir == 1) {
		ny += xseg.width;
	} else if (xseg.dir == 2) {
		nx += xseg.width;
	} else if (xseg.dir == 3) {
		nx -= xseg.width;
	} else if (xseg.dir == 4) {
		ny -= xseg.width;
	} else {
		nd = 0;
	}
	xseg = new Ptoken(nx,ny,nw,nl,nc,nd);
	segs[skore] = xseg
	
}

function drawPlayer() {
	for (i = 0; i <= skore; i++) {
		ptok = segs[i];
		ctx.beginPath();
		ctx.rect(ptok.x,ptok.y,ptok.width,ptok.width);
		//ctx.rect(100,100,20,20);
		ctx.fillStyle = ptok.color;
		//ctx.fillStyle = 'green';
		ctx.fill();
	}
}

function drawToken() {
	ctx.beginPath();
	ctx.rect(token.x,token.y,token.width,token.length);
	ctx.fillStyle = token.color;
	//ctx.rect(25,25,10,10);
	//ctx.fillStyle = 'red';
	ctx.fill();
}

function drawBoard() {
	ctx.beginPath();
	ctx.rect(0,0,wide,high);
	ctx.fillStyle = 'grey';
	ctx.fill();
}


function drawGame() {
	drawBoard();
	drawToken();
	drawPlayer();
}

function startGame() {
	token.x = Math.floor((Math.random() * (wide-20)) + 0);
	token.y = Math.floor((Math.random() * (high-20))+0);
	player.x = Math.floor((Math.random() * (wide-20)) + 0);
	player.y = Math.floor((Math.random() * (high-20))+0);
	//player.dir = Math.floor(Math.random() * 4+0);
	drawGame();
}



function checkCollision() {
	if ( (player.x <= (token.x + token.width)) && (player.x >= (token.x - player.width)) && (player.y <= (token.y + token.width)) && (player.y >= (token.y - player.width)) ) {
		skore += 1;
		token.x = Math.floor((Math.random() * (wide-20)) +0);
		token.y = Math.floor((Math.random() * (high-20))+0);
		tempus = tempus * .75;
		increaseLeng();
		clearInterval(gameSpeed);
		gameSpeed = setInterval(moveGame, tempus);
		score = skore.toString();
		document.getElementById('score').innerHTML = score;

	}
	if (skore > 0) {
		for (i = 1; i <= skore; i++) {
			disSeg = segs[i];
			if (player.x == disSeg.x && player.y == disSeg.y) {
				alert("GAMEOVER");
			}
		}
	}
	if ( (player.x >= (wide - player.width)) || (player.x <= 0) || (player.y >= (high - player.width)) || (player.y <=0)) {
		alert("GAMEOVER");
	}
}



function moveGame() {
	mdis = player.width;
	for (i = skore; i >= 1; i--) {
		disSeg = segs[i];
		datSeg = segs[i-1];
		disSeg.x = datSeg.x;
		disSeg.y = datSeg.y;
		disSeg.dir = datSeg.dir;
	}
	if (player.dir == 1) {
		player.y -= mdis;
	} else if (player.dir == 2) {
		player.x -= mdis;
	} else if (player.dir == 3) {
		player.x += mdis;
	} else if (player.dir == 4) {
		player.y += mdis;
	} else if (player.dir != 0) {
		player.color = 'black';
	}
	checkCollision()
}



startGame();
setInterval(drawGame, 42);
var gameSpeed = setInterval(moveGame, tempus);
//setInterval(moveGame, tempus);


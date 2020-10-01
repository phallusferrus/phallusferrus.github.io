var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');
var wide = canvas.width;
var high = canvas.height;
var psize = 20;
var	ex = Math.floor((Math.random() * (wide-10)) + 0);
var	why = Math.floor((Math.random() * (high-10)) + 0);
var token = {x:10,y:10,color:'red'}
token.x = Math.floor((Math.random() * wide) + 0);
token.y = Math.floor((Math.random() * high) + 0);
var skore = 0;
var pdir = 0; 
document.addEventListener('keypress', function (e) {
	if (e.keyCode == 119) {
		pdir = 1;
	} else if (e.keyCode == 97) {
		pdir = 2;
	} else if (e.keyCode == 100) {
		pdir = 3;
	} else if (e.keyCode == 115) {
		pdir = 4;
	}
});


function checkCollide() {
	if ( (ex <= token.x+10) && (ex >= token.x-psize) && (why <=token.y+psize) && (why >= token.y-psize) ) {
		skore += 1;
		token.x = Math.floor((Math.random() * wide) + 0);
		token.y = Math.floor((Math.random() * high) + 0);
		psize += 5;
		var score = skore.toString();
		document.getElementById('score').innerHTML = score;
		cleanScreen();
	}
}

function gameMove(dir) {
	if (dir == 1) {
		pdir = 1;
	} else if (dir == 2) {
		pdir=2;
	} else if (dir == 3) {
		pdir=3;
	} else if (dir == 4) {
		pdir=4;
	} else {
		document.getElementById('gbut').innerHTML = 'ERROR';
	}
	checkCollide();
	drawPlayer();
}


function drawBoard() {
	ctx.beginPath();
	ctx.rect(0,0,wide,high);
	ctx.fillStyle = 'blue';
	ctx.fill();
}

function drawPlayer() {
	ctx.beginPath();
	ctx.rect(ex,why,psize,psize);
	ctx.fillStyle = 'green';
	ctx.fill();
}

function drawToken() {
	ctx.beginPath();
	ctx.rect(token.x,token.y,10,10);
	ctx.fillStyle = 'red';
	ctx.fill();
}

function cleanScreen() {
	drawBoard();
	drawPlayer();
	drawToken();
}


function snakeMove() {
	if (pdir == 1 && why > 10) {
		why -= 10;
	} else if (pdir == 2 && ex > 10) {
		ex -= 10;
	} else if (pdir == 3 && (ex < (wide-10))) {
		ex += 10;
	} else if (pdir == 4 && (why < (high-10))) {
		why += 10;
	} else {
		pdir = 0;
		document.getElementById('gbut').innerHTML = 'LIMIT';
	}
	checkCollide();
}

setInterval(cleanScreen, 42);
setInterval(snakeMove, 200);

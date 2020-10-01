var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');
var high = canvas.height;
var wide = canvas.width;
var ballr = new Image(20,20);
ballr.src = 'picss/dof/ball.jpg';

var player = {
	x: 30,
	y: high / 2,
	width: 20,
	color: 'blue',
}

var comp = {
	x: wide - 50,
	y: high / 2,
	width: 20,
	color: 'green',
}

var ball = {
	x: wide / 2,
	y: high / 2,
	color: 'red',
	xdir: 0,
	ydir: 0,
	yslo: 0,
}


document.addEventListener('keypress', function (e) {
	if (e.keyCode == 119) {
		movePlayer(1);
	} else if (e.keyCode == 115) {
		movePlayer(2);
	}
});

function movePlayer(dir) {
	if (dir == 1) {
		player.y -= 100;
	} else {
		player.y += 100;
	}
}

function drawBoard() {
	ctx.beginPath();
	ctx.rect(0,0,wide,high);
	ctx.fillStyle = 'grey';
	ctx.fill();
}

function drawPaddle(team) {
	ctx.beginPath();
	ctx.rect(team.x, team.y-69, team.width, 69);
	ctx.fillStyle = team.color;
	ctx.fill();
	ctx.beginPath();
	ctx.rect(team.x, team.y, team.width, 69);
	ctx.fillStyle = team.color;
	ctx.fill();
}

function drawBall() {
	//ctx.beginPath();
	ctx.drawImage(ballr, ball.x-10, ball.y - 10);
	//ctx.rect(ball.x-10 ,ball.y-10, 20, 20);
	//ctx.fillStyle = ball.color;
	//ctx.fill();
}

function checkLoss() {
	if (ball.x > wide || ball.x < 0) {
		alert("GAME OVER");
	}
}

function moveComp() {
	comp.y = ball.y;
}

function drawGame() {
	drawBoard();
	drawPaddle(player);
	drawPaddle(comp);
	drawBall();
	moveBall();
	moveComp();
	checkLoss();
}

function moveBall() {
	if (ball.xdir == 1) {
		ball.x -= 8;
	} else {
		ball.x += 8;
	}
	whyShift = (ball.yslo * ball.ydir);
	ball.y += whyShift;
	if (ball.x > comp.x - 20) {
		if ( (ball.y >= (comp.y - 69)) && ball.y <= (comp.y + 69) ) {
			pongTone.play();
			ball.xdir = 1;
			ball.ydir *= -1;
			dirNoise = (Math.floor((Math.random() * 3) - 3));
			ball.yslo += dirNoise;

		}
	} else if (ball.x < (player.x + player.width + 20)) {
		if ( (ball.y >= (player.y - 69)) && ball.y <= (player.y + 69) ) {
			pingTone.play();
			ball.xdir = 2;
			ball.ydir *= -1;
			dirNoise = (Math.floor((Math.random() * 3) - 3));
			ball.yslo += dirNoise;
		}
	}
	if ( (ball.y >= (high - 20) ) || (ball.y <= 20) ) {

		ball.ydir *= (-1);
	}

}

randBallDir = (Math.floor((Math.random() * 2) + 1));
ball.xdir = randBallDir;
randBallWhy = (Math.floor((Math.random() * 2) + 1));
if (randBallWhy == 1) {
	ball.ydir = 1;
} else {
	ball.ydir = -1;
}
//randSlope = (Math.floor((Math.random() * 10) 0));
//ball.yslo = randSlope;
ball.yslo = 3;

var eventTone = new Audio('event.mp3');
var pingTone = new Audio('ping.mp3');
var pongTone = new Audio('pong.mp3');

eventTone.play();
alert("START");

setInterval(drawGame, 42);


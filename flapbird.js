


var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');
var wide = canvas.width;
var high = canvas.height;
var timet = 0;

document.addEventListener('keypress', function (e) {
	if (e.keyCode == 119) {
		movePlayer(1);
	} else if (e.keyCode == 115) {
		movePlayer(2);
	}
});

function movePlayer(dir) {
	if (dir == 1) {
		player.speed = -1;
		timet = 0;
		player.y -= 10;
	} else if (dir == 2) {
		player.speed = -1;
		timet = 0;
		player.y += 10;
	} else {
		alert("movePlayer ERROR");
	}
}


var player = {
	x: 30,
	y: high/2,
	width: 20,
	color: 'red',
	speed: 0,
}

var trap = {
	x: wide-50,
	split: high/2,
	width: 20,
	color: 'green',
}


var traps = [trap];

var ntraps = 1;

function drawBoard() {
	ctx.beginPath();
	ctx.rect(0,0,wide,high);
	ctx.fillStyle = 'grey';
	ctx.fill();
}

function drawTraps() {
	for (i = 0; i < ntraps; i++) {
		distrap = traps[i]
		ctx.beginPath();
		ctx.rect(distrap.x, 0, distrap.width,( distrap.split -  (2*player.width)) );
		ctx.fillStyle = distrap.color;
		ctx.fill();
		ctx.beginPath();
		ctx.rect(distrap.x, (distrap.split +  (2*player.width)), distrap.width,(high - (distrap.split + (2*player.width))));
		ctx.fillStyle = distrap.color;
		ctx.fill();
	}
}

function drawPlayer() {
	player.speed = player.speed - ((timet * timet) * .0008);
	player.y = player.y - player.speed;
	ctx.beginPath();
	ctx.rect(player.x, player.y, player.width, player.width);
	ctx.fillStyle = player.color;
	ctx.fill();
}

function checkCollision() {
	for (i = 0; i < ntraps; i++) {
		var distrap = traps[i];
		if ((distrap.x <= (player.x + player.width)) && (distrap.x >= player.x - player.width)) {
			if ((player.y <= (distrap.split - (2*player.width))) || ((player.y >= (distrap.split + player.width)))) {
				alert("COLLISION");
			}
		}
	}
	if (player.y > high || player.y < 0) {
		alert("COLLISION");
	}
}

function drawScore() {
	ctx.font = '25px ariel';
	var skore = 0;
	for (i = 0; i < ntraps; i++) {
		distrap = traps[i];
		if (distrap.x < player.x) {
			skore += 1;
		}
	}
	var score = skore.toString();
	ctx.fillText(score, 10,(high - 10));
}

function drawGame() {
	drawBoard();
	drawTraps();
	drawPlayer();
	drawScore();
	checkCollision();
}

function Ttrap(split) {
	this.x = wide;
	this.split = split;
	this.width = 20;
	this.color = 'green';
}

function moveGame() {
	var datrap = traps[0];
	datrap.x -= 1
	//datrap.x -= 20;
	for (i = 1; i <= (ntraps); i++) {
		datrap = traps[i-1];
		datrap.x -= 1;
	}
}

function newTrap() {
	xntraps = ntraps - 1;
	var lasttrap = traps[xntraps];
	var noob = Math.floor((Math.random() * 100) +0)
	if (noob > 90 && lasttrap.x < (wide-100)) {
		disSplit = Math.floor((Math.random() * (high-100)) + 100);
		lasttrap = new Ttrap(disSplit);
		traps[ntraps] = lasttrap;
		ntraps++;
	}
}

function playGame() {
	drawGame();
	moveGame();
	newTrap();
	timet += 1;
}
	

//setInterval(drawGame, 42);
//setInterval(playGame, 1500);
setInterval(playGame, 42);
//setInterval(newTrap, 3000);
//setInterval(gravClock, 1000);


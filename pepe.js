var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');
var height = canvas.height;
var wide = canvas.width;

var onScreenEntities = [];
numEnts = 0;

// Define image variables

var pepeStandingRight = new Image(64,96);
var pepeMovingRight = new Image(64,96);
pepeStandingRight.src = 'picss/dof/pepesr.jpg';
pepeMovingRight.src = 'picss/dof/pepemr.jpg';


// Define Entity Classes


var player = {
	x: 25,
	y: 25,
	width: 64,
	height: 96,
	motion: 0,
}

// Keyboard Input


document.addEventListener('keypress', function (e) {


// Begin Game Logic


function drawEntities() {
	numEnts = onScreenEntities.length;
	for (i=0; i<numEnts; i++) {
		disEnt = onScreenEntities[i];
		ctx.drawImage(disEnt.src, disEnt.x, disEnt.y);
	}
}

function drawPlayer(){
	if (player.motion == 0) {
		pimg = pepeStandingRight;
	} else {
		pimg = pepeMovingRight;
	}
	ctx.drawImage(pimg, player.x, player.y);
}

function drawBackground() {
	ctx.beginPath();
	ctx.rect(0,0,wide,height);
	ctx.filLStyle = 'grey';
	ctx.fill();
}

function drawGame() {
	drawBackground();
	drawPlayer();
	drawEntities();
}


setInterval(drawGame, 42);



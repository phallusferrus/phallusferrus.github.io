//Table of Contents
//S.1 - Canvas Info
//S.2 - Keyboard Input
//S.3 - Image Sources
//S.4 - Objects
//S.5 - Constructors
//S.6 - General Game Functions
//S.7 - Game Logic


//S.1 - Canvas Info


var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');


//


//S.2 Keyboard Input

var WDown = 0;
var ADown = 0;
var DDown = 0;
var SDown = 0;
var QDown = 0;
var EDown = 0;
var SpaceDown = 0;
function escPause() {
	alert("PAUSE");
}

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
	} else if (e.keyCode == 81) {
		QDown = 1;
	}
	else if (e.keyCode == 69) {
		EDown = 1;
	}
	else if (e.keyCode == 32) {
		SpaceDown = 0;
	} else if (e.keyCode == 27) {
		escPause();
		EscDown = 1;
	}

});

document.addEventListener('keyup', function (e) {
	if (e.keyCode == 87) {
		WDown = 0;
	} else if (e.keyCode == 83) {
		SDown = 0;
	} else if (e.keyCode == 65) {
		ADown = 0;
	} else if (e.keyCode == 68) {
		DDown = 0;
	} else if (e.keyCode == 81) {
		QDown = 0;
	} else if (e.keyCode == 69) {
		EDown = 0;
	} else if (e.keyCode == 32) {
		SpaceDown = 0;
	} else if (e.keyCode == 27) {
		EscDown = 0;
	}

});


/*
 *
 *
 * S.3 - Image Sources
 *
 *
 * */


var tripsrc = new Image(32,48);
tripsrc.src = 'picss/dof/trip2.png';

var bgtilesrc = new Image(64,48);
bgtilesrc.src = 'picss/dof/bgtile.png';

var pepesrc = new Image(64, 96);
pepesrc.src = 'picss/dof/peper01.png';

var stickysrc = new Image(120, 90);
stickysrc.src = 'picss/dof/sticky.png';

var gnusrc = new Image(40, 60);
gnusrc.src = 'picss/dof/gnu.png';

var snoosrc = new Image(64, 89);
snoosrc.src = 'picss/dof/snoo.png';
var snoo2src = new Image(64, 89);
snoo2src.src = 'picss/dof/snoo2.png';

var snoo3src = new Image(64, 89);
snoo3src.src = 'picss/dof/snoo3.png';

var snoo4src = new Image(64, 89);
snoo4src.src = 'picss/dof/snoo4.png';

var snoo5src = new Image(64, 89);
snoo5src.src = 'picss/dof/snoo5.png';

var snoo6src = new Image(64, 89);
snoo6src.src = 'picss/dof/snoo6.png';



/*
 *
 *
 * S.4 - Object Lists
 *
 *
 * */


allENT = [];
allMaps = [];
allBorders = [];


/*
 *
 *
 * S.5 - Constructor Functions
 *
 *
 * */


function makeENT(src, x, y, w, h, dx, dy, fx) {
	this.src = src;
	this.x = x;
	this.y = y;
	this.width = w;
	this.height = h;
	this.dx = dx;
	this.dy = dy;
	this.fx = fx;	
}


// function makeMap() 
		

/*
 *
 *
 * S.6 - General Game Functions
 *
 *
 * */

var ang = 0;

function rotate(ent) {
	ctx.save();
	ctx.clearRect(0, 0, canvas.width, canvas.height);
	ctx.translate(canvas.width/2, canvas.height/2);
    ctx.rotate(Math.PI / 180 * (ang += 5));
    ctx.translate(-(canvas.width/2), -(canvas.height/2));
     ctx.drawImage(ent.src, ent.x, ent.y, ent.width, ent.height);
	/*ent.translate(ent.width/2, ent.height/2);
	ent.rotate(Math.PI / 180 * (ang += 5));
	ent.translate(-(ent.width/2), -(ent.height/2));
	ctx.drawImage(ent.src, ent.x, ent.y, ent.width, ent.height);*/
	ctx.restore();
	ang += 5;
}

function borderBounce(ent) {
	if (ent.x <= (25 + ent.width) ) {
		ent.dx *= -1;
	} else if (ent.x >= (canvas.width - 25 - ent.width)) {
		ent.dx *= -1;
	}
	if (ent.y <= (25 + ent.height) ) {
		ent.dy *= -1;
	} else if (ent.y >= (canvas.height - 25 - ent.height)) {
		ent.dy *= -1;
	}
}

function snooZap(snoo) {
	//Constant Rate Change thingy madoot
	snooZapTimeLimit = 600
	snoo.age += 1;
	if (snoo.age >= snooZapTimeLimit) {
		snoo.age = 0;
	}
	if (snoo.age <= (snooZapTimeLimit / 6) ) {
		snoo.src = snoosrc;
	} else if (snoo.age <= (snooZapTimeLimit / 3) ) {
		snoo.src = snoo2src;
	} else if (snoo.age <= (snooZapTimeLimit / 2) ) {
		snoo.src = snoo3src;
	} else if (snoo.age <= ( (2 * snooZapTimeLimit) / 3) ) {
		snoo.src = snoo4src;
	} else if (snoo.age <= ( (5 * snooZapTimeLimit) / 6) ) {
		snoo.src = snoo5src;
	} else {
		snoo.src = snoo6src;
	}
}







function drawTestBackground() {
/*	ctx.beginPath();
	ctx.rect(0,0,canvas.width,canvas.height);
	ctx.fillStyle = '#f8f8f2';
	ctx.fill(); */
	for (i=0; i<canvas.width; i++) {
		if ( i % 40 == 0 ) {
			ctx.beginPath();
			ctx.rect(i, 0, 1, canvas.height);
			ctx.fillStyle = '#232629';
			ctx.fill();
		}
	}
	for (i=0; i<canvas.height; i++) {
		if ( i % 30 == 0 ) {
			ctx.beginPath();
			ctx.rect(0, i, canvas.width, 1);
			ctx.fillStyle = '#232629';
			ctx.fill();
		}
	}
}

function drawBackground(src, iw, ih) {

	for (i=0; i<canvas.width; i++) {
		if ( i == 0 || i % iw == 0) {
			for (j=0; j<canvas.height; j++) {
				if (j == 0 || j % ih == 0) {
					ctx.drawImage(src, i, j);
				}
			}
		}
	}
}	

function drawEnt(src, x, y) {
	ctx.drawImage(src, x , y);
}

function moveEnt(ent) {
	unit = .5;
	if (ent.dx == 1) {
		ent.x += unit;
	} else if (ent.dx == -1) {
		ent.x -= unit;
	} else if (ent.dx != 0) {
		alert('moveEnt issues dx');
	} 
	if (ent.dy == 1) {
		ent.y += unit;
	} else if (ent.dy == -1) {
		ent.y -= unit;
	} else if (ent.dy != 0) {
		alert('moveEnt issues dy');
	} 
}

function fxEnt(ent, fx) {

	if (ent.fx == 'rotate') {
		rotate(ent, ent.x, ent.y);
	}
	if (ent.fx == 'borderBounce') {
		borderBounce(ent);
	}
	if (ent.fx == 'snooZap') {
		snooZap(ent);
	}
}

function drawEnts() {
	for (i=0; i<allENT.length; i++) {
		ent = allENT[i];

		// dx / dy
		if (ent.dx != 0 || ent.dy != 0) {
			moveEnt(ent);
		}

		// FX 
		if (ent.fx == 'rotate') {
			rotate(ent, ent.x, ent.y);
		}
		if (ent.fx == 'borderBounce') {
			borderBounce(ent);
		}
		if (ent.fx != 0) {
			fxEnt(ent, ent.fx);
		}
		drawEnt(ent.src, ent.x, ent.y);
	}
}


/*
 *
 *
 * S.7 - GameLoic
 *
 *
 * */


tripcode = new makeENT(tripsrc, 125, 125, tripsrc.width,tripsrc.height, 1, 1, 'borderBounce');
allENT[allENT.length] = tripcode;
gnu = new makeENT(gnusrc, 300, 300, gnusrc.width, gnusrc.height, 0, -1, 0);
allENT[allENT.length] = gnu;
snoo = new makeENT(snoosrc, 420, 215, snoosrc.width, snoosrc.height, 0, 0, 'snooZap');
allENT[allENT.length] = snoo;
snoo.age = 0;

function drawGame() {
	drawBackground(stickysrc, 120, 40);
//	drawTestBackground();
//	drawEnt(trip, 150, 150);
//	drawEnt(gnu, 40, 60);
//	drawEnt(pepe, 420, 240);
//	setSpin(trip, 100);
	drawEnts();
}

setInterval(drawGame, 42);



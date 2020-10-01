var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');
var dis_fin = 0;



function getDistance(x, y) {
	
	var distance;
	var radius = canvas.height / 2;
	distance = (Math.sqrt(x+y));
	if (distance <= (.05*radius)) {
		dis_fin += 20;
	} else if (distance <= (.12*radius)) {
		dis_fin += 10;
	} else if (distance <= (.33*radius)) {
		dis_fin += 3;
	} else if (distance <= (.5*radius)) {
		dis_fin += 5;
	} else if (distance <= (.95*radius)) {
		dis_fin += 1;
	} else if (distance <= radius) {
		dis_fin += 2;
	} else {
		dis_fin = dis_fin;
	}
	var dis_finar = dis_fin.toString();
	var dister = distance.toString();
	document.getElementById('dist').innerHTML = dister;
	document.getElementById('score').innerHTML = dis_finar;
}

function gameMove() {
	var ex = Math.floor((Math.random() * 640) + 0);
	var why = Math.floor((Math.random() * 480) +0);
	ctx.beginPath();
	ctx.rect(ex, why, 16, 16);
	ctx.fillStyle = 'green';
	ctx.fill();
	ctx.beginPath();
	ctx.rect(ex,why+7,16,3);
	ctx.fillStyle = 'grey';
	ctx.fill();
	ctx.beginPath();
	ctx.rect(ex+7,why,3,16);
	ctx.fillStyle = 'grey';
	ctx.fill();
	ctx.beginPath();
	ctx.rect(ex+7,why+7,3,3);
	ctx.fillStyle = 'blue';
	ctx.fill();
	var halfwayx = canvas.width / 2;
	var halfwayy = canvas.height /2;
	var disy = 0;
	var disx = 0;
	if (why < halfwayy) {
		disy = halfwayy - why;
	} else if (why > halfwayy) {
		disy = (why - halfwayy);
	} else {
		disy = 0;
	}
	if (ex < halfwayx) {
		disx = halfwayx - ex;
	} else if (ex > halfwayx) {
		disx = ex - halfwayx;
	} else {
		disx = 0;
	}
	disx = disx*disx;
	disy = disy*disy;
	getDistance(disx,disy);

}

function drawBoard(){

	var radius = canvas.height / 2;
	var halfway = canvas.width / 2;
	ctx.translate(halfway, radius);
	radius = radius * .9;
	ctx.beginPath();
	ctx.arc(0,0,radius,0,2*Math.PI);
	ctx.fillStyle = 'black';
	ctx.fill();
	ctx.beginPath();
	ctx.arc(0,0,radius*.95,0,2*Math.PI);
	ctx.fillStyle = 'red';
	ctx.fill();
	ctx.beginPath();
	ctx.arc(0,0,radius*.9,0,2*Math.PI);
	ctx.fillStyle = 'black';
	ctx.fill();
	var i;
	for (i = 0; i<20; i++) {
		if (i%2 == 0) {
			ctx.beginPath();
			ctx.moveTo(0,0);
			ctx.rotate(i*(Math.PI/10));
			//ctx.lineTo(0, -radius*.5);
			ctx.arc(0,0,radius*.9,0,Math.PI/10);
			ctx.fillStyle = 'white';
			ctx.fill();
			ctx.rotate(-i*(Math.PI/10));

		} /*else {
			ctx.beginPath();
			ctx.moveTo(0,0);
			ctx.rotate(i * (Math.PI/40));
			//ctx.lineTo(0, -radius*.5);
			ctx.arc(0,0,radius*.9,0,Math.PI/40);
			ctx.fillStyle = 'red';
			ctx.fill();
			ctx.rotate(-i*(Math.PI/40));
		}*/

	}
	ctx.beginPath();
	ctx.lineWidth = radius*.05;
	ctx.arc(0,0,radius*.50,0,2*Math.PI);
	ctx.strokeStyle = 'red';
	ctx.stroke();
	ctx.lineWidth = radius/.05;
	ctx.beginPath();
	ctx.arc(0,0,radius*.1,0,2*Math.PI);
	ctx.fillStyle = 'red';
	ctx.fill();
	ctx.beginPath();
	ctx.arc(0,0,radius*.042,0,2*Math.PI);
	ctx.fillStyle = 'black';
	ctx.fill();




	radius = radius / .9;
	ctx.translate(-halfway, -radius);
}	



drawBoard();


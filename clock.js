

var canvas = document.getElementById('clockid');
var ctx = canvas.getContext('2d');
var radius = canvas.height / 2;
var halfway = canvas.width / 2;
ctx.translate(halfway, radius);
radius = radius * .9;


function drawFace(ctx, radius) {
	ctx.beginPath();
	ctx.arc(0,0,radius/10,0,2*Math.PI);
	ctx.fillStyle = 'black';
	ctx.fill();
	ctx.beginPath();
	ctx.arc(0,0,radius*.9,0,2*Math.PI);
	ctx.stroke();
	var grad;
	grad = ctx.createRadialGradient(0,0,radius*.95,0,0,radius*1.05);
	grad.addColorStop(0,'beige');
	grad.addColorStop(0.5,'black');
	grad.addColorStop(1,'blue');
	ctx.strokeStyle = grad;
	ctx.lineWidth = radius*.1;
	ctx.stroke();
}

function drawNumbers() {
	var angle;
	var num;
	ctx.font = radius * .1 + "px arial";
	ctx.textBaseline = 'middle';
	ctx.textAlign = 'center';
	for (num = 1; num<13; num++) {
		angle = num * (Math.PI / 6);
		ctx.rotate(angle);
		ctx.translate(0, -radius * .75);
		ctx.rotate(-angle);
		ctx.fillText(num.toString(), 0, 0);
		ctx.rotate(angle);;
		ctx.translate(0, radius*.75);
		ctx.rotate(-angle);
	}
}

function drawHand(ctx, pos, length, width) {
	ctx.beginPath();
	ctx.lineWidth = width;
	ctx.lineCap = 'round';
	ctx.moveTo(0,0);
	ctx.rotate(pos);
	ctx.lineTo(0, -length);
	ctx.stroke();
	ctx.rotate(-pos);
}



function drawTime(ctx, radius) {
	var now = new Date();
	var hour = now.getHours();
	var mins = now.getMinutes();
	var secs = now.getSeconds();
	hour = hour%12;
	hour = (hour * (Math.PI/6) + (mins*(Math.PI/(6*60))) + (secs*(Math.PI/(360*60))));
	drawHand(ctx, hour, radius*.5, radius*.05);
	mins = ((mins * (Math.PI/30)) + (secs*(Math.PI/(30*60))));
	drawHand(ctx, mins, radius*.75,radius*.05);
	secs = (secs * (Math.PI/30));
	drawHand(ctx, secs, radius*.9,radius*.02);
}



function drawClock() {
	ctx.beginPath();
	ctx.arc(0,0,radius,0,2*Math.PI);
	ctx.stroke();
	ctx.fillStyle = 'grey';
	ctx.fill();
	drawFace(ctx, radius);
	drawNumbers(ctx,radius);
	drawTime(ctx,radius);

}





setInterval(drawClock, 1000);
//drawClock();

var canvas = document.getElementById('canvasid');
var ctx = canvas.getContext('2d');



function drawBackground() {
	ctx.beginPath();
	ctx.rect(0, 0, 768, 768);
	ctx.fillStyle = '#232629';
	ctx.fill();
}


function drawSol() {
	ctx.beginPath();
	ctx.rect(768/2, 768/2, 16, 16);
	ctx.fillStyle = 'yellow';
	ctx.fill();
}



drawBackground();
drawSol();

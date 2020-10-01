function component(x, y, width, height, color) 
{
	this.width = width;
	this.height = height;
	this.x = y;
	this.y = y;
	ctx.beginPath();
	ctx.fillStyle = color;
	ctx.stroke();
	ctx.fillRect(this.x, this.y, this.width, this.height);
}

function updateGameArea() 
{


}


var clock = document.getElementById('clockid');
var ctx = clock.getContext('2d');
//black bulseye background
ctx.beginPath();
ctx.arc(20,20,10,0,2*Math.PI);
ctx.fillStyle = 'black';
ctx.fill();
ctx.stroke();

//inner white bullseye
ctx.beginPath();
ctx.arc(20,20,5,0,2*Math.PI);
ctx.fillStyle = 'white';
ctx.fill();
//red bulsseye dot
ctx.beginPath();
ctx.arc(20,20,2,0,2*Math.PI);
ctx.fillStyle = 'red';
ctx.fill();
//black face bg
ctx.beginPath();
ctx.arc(50,50,20,0,2*Math.PI);
ctx.fillStyle = 'white';
ctx.stroke();
ctx.fill();
//left red eye
ctx.beginPath();
ctx.arc(45,45,2,0,2*Math.PI);
ctx.fillStyle = 'red';
ctx.fill();
//right red eye
ctx.beginPath();
ctx.arc(55,45,3,0,2*Math.PI);
ctx.fillStyle = 'red';
ctx.fill();
//smile
ctx.beginPath();
ctx.arc(50,55,10,0,Math.PI);
ctx.stroke();
//	ctx.fillStyle = 'red';
//	ctx.fill();

ctx.beginPath();
ctx.rect(100,50,10,10);
ctx.fillStyle = 'green';
ctx.fill();
ctx.stroke();

ctx.beginPath();
ctx.rect(120, 50, 10, 10);
ctx.fillStyle = 'green';
ctx.fill();
ctx.stroke();

ctx.beginPath();
ctx.arc(115, 69, 15, 0, Math.PI);
ctx.fillStyle = 'green';
ctx.fill();
ctx.stroke();

component(130, 60, 10, 10, 'red');

component(150,75,10,10,'green');










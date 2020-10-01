

var turn = 0;
var helperskreen = 0;
var gbp = 3;
var gbpw = 0;
var rival = 0;
var aut = 0;
var autw = 0;
var rpsloop = 0;
var rpsintrov = 0;
var rpswin = 0;
var rpsfin = 0;
var rpsgameover = 0;
var artloop = 0;
var picturedone = 0;
var picturechose = 0;
var outside = 0;
var outsidepass = 0;
var starin = 0;
var starevar = 0;
var tttoeloop = 0;
var latinloop = 0;
var tttoeintrov = 0;
var tttoeintrotwo = 0;
var tttoegameover = 0;
var tttoeindraw = 0;
var tttoerival = 0;
var tttoecolchoose = 0;
var tttoerow = 0;
var tttoecol = 'x';
var tttoken = '?';
var tttoefin = 0;
var tttoedraw = 0;
var tttoewin = 0;
var tttoetestfail = 0;
var latinfin = 0;
var latinfin = 0;
var romaitalia = 0;
var latinreaction = 0;
var latinstory = 0;
var latinintrod = 0;
var yellow = 'picss/das/cncty.png';
var red = 'picss/das/cnctr.png';
var connectfourloop = 0;
var cnctfin = 0;
var cnctintrov = 0;
var cnctboard = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,35,45,55,65,75,85,95,115,125,135,145,155,165,225,335,445,555,665,775,885,995,1235,12345,1122335];
var cnctcol1 = 0;
var cnctcol2 = 0;
var cnctcol3 = 0;
var cnctcol4 = 0;
var cnctcol5 = 0;
var cnctcol6 = 0;
var cnctcol7 = 0;
var cnctgameover = 'x';
var math1 = 0;
var math2 = 0;
var math3 = 0;
var math1r = 0;
var math2r = 0;
var math3r = 0;
var mathcorrect = 0;
rpsmoves = ['r', 'p', 's']
tttoemoves =[1, 2, 3, 4, 5, 6, 7, 8, 9]
tttoemovestaken = []
tttoeboard = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i']
billyvars = [6,7,13,14,20,21,27,28,34,35,41,42,48,49]
skoolvars = [6, 7, 13, 14, 20, 21, 27, 28, 34, 35, 36, 37, 41, 42, 43, 44, 48, 49]
var lunchvar = 0;
var lunchseat = 0;
var stacylunch = 0;
var ffight = 0;
var billylunch = 0;
var lunchst = 0;
var lunchfin = 0;
var stacyb = 0;
var stacycreep = 0;
var blchat = 0;
var ffot = 0;
var blplay = 0;
var blsnt = 0;
var billyhouse = 0;
var blshown = 0;
var sntchose = 0;
var billycard = 0;
var billypokemon = 0;
var snvc = 0;
var sntp = 0;
var dreact = 0;
var bfchar = 'x';
var bfbwin = 0;
var bfwon = 0;
var cnctrival = 0;
var detentvar = 0;
var detentskar = 0;
detentlinea = [1,2,8,9]
detentlineb = [1,2,8,9,16]
detentlinec = [1,2,8,9,16,23,30]
detentlined = [1,2,3,8,9,10,16,17,23,30]
detentlinee = [1,2,3,8,9,10,16,17,23,24,30,31,38,39]
detentlinef = [1,2,3,4,8,9,10,11,16,17,23,24,30,31,38,39]
detentlineg = [1,2,3,4,8,9,10,11,16,17,18,23,24,25,30,31,38,39]




function arpees() {
	alert("RPS TEST");
};

function adlert() {
	alert('adlert!');
	document.getElementById('a4').src = 'picss/Ineedamiracle.png';
	document.getElementById('but1').innerHTML = 'Changed';
	document.getElementById('b4').src = 'picss/feellikeastrainer.png';
};

function skrener(fyle) {
	var i;
	for(i = 1; i < 50; i++) {
		var skyl = fyle+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;}
};

function drawr(ary, fyle, indy) {
	var i;
	for (i = 1; i < 50; i++) {
		var scrn = 'dis'+i;
		if (ary.includes(i)){
			skyl = fyle+indy+i+'.png';
			}
		else {
			skyl = fyle+i+'.png';
		}
		document.getElementById(scrn).src=skyl;}
};

function batoner(a,b,c,d,e,f,g) {
	document.getElementById('butt1').innerHTML=a;
	document.getElementById('butt2').innerHTML=b;
	document.getElementById('butt3').innerHTML=c;
	document.getElementById('butt4').innerHTML=d;
	document.getElementById('butt5').innerHTML=e;
	document.getElementById('butt6').innerHTML=f;
	document.getElementById('butt7').innerHTML=g;
}

function dayskool() {
	var fyle = 'picss/das/daya';
	skrener(fyle);
	batoner('START','START','START','JOKE','HELP','HELP','HELP')
}

function helpers(){
	var fyle = 'picss/das/help';
	skrener(fyle);
	batoner('OK', 'OK', 'OK', 'OK', 'OK', 'OK', 'OK');
}

function autwarn(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'autw';
	drawr(ary, fyle, indy);
	batoner('OK', 'OK', 'OK', 'OK', 'OK', 'OK', 'OK');
}

function skool1(){
	var fyle = 'picss/das/skool';
	skrener(fyle);
	batoner('MYFAV','MYFAV','TEACH','TEACH','SPIT!','SPIT!','WAAH!');
}

function billy1(){
	var fyle = 'picss/das/billy';
	skrener(fyle);
	batoner('OK','OK','OK','OK', 'OK', 'OK', 'OK');
}

function billy1a(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'a';
	drawr(ary, fyle, indy);
	batoner('FRIEND', 'FRIEND', 'TOYS', 'TOYS', 'HATE', 'HATE', 'WAAH!');
}

function skool2(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'a';
	drawr(ary, fyle, indy);
	batoner('PLEDGE', 'PLEDGE', 'NO WAY', 'NO WAY', 'BILLY', 'BILLY', 'WAAAAH')
}

function flag1(){
	var fyle = 'picss/das/flag';
	skrener(fyle);
	batoner('AND','TO','THE','REPUBLID','FOR','WISH','IT');
}

function flag2(){
	var ary = billyvars;
	var fyle = 'picss/das/flag';
	var indy = 'b';
	drawr(ary, fyle, indy);
	batoner('...OK','...OK','...OK','...OK','...OK','...OK','OK');
}

function flag3(){
	var fyle = 'picss/das/flag';
	skrener(fyle);
	if (rival > 1){
		batoner('GOD', 'I', 'JUST', 'HATE', 'THAT', 'STUPID', 'BILLY'); }
	else {
		batoner('I', 'PLEDGE', 'OF', 'ALLEGIANCE', 'TO', 'THE', 'FLAG'); }
}

function skool3(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'c';
	drawr(ary, fyle, indy);
	batoner('RECESS!', 'RECESS!', 'RECESS!', 'RECESS!', 'RECESS!', 'RECESS!', 'RECESS!');
}

function gbpwarn(){
	gbpw = gbpw +1;
	var fyle = 'picss/das/gbpw';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK');
}

function detentgo(){
	var ary = billyvars;
	var fyle = 'picss/das/gbpw';
	var indy = 'detent';
	drawr(ary, fyle, indy);
	batoner('UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH')
}

function follow(){
	var fyle = 'picss/das/outside';
	skrener(fyle);
	batoner('OK','OK','SMOKING?','SMOKING?', 'NO YOU!','NO YOU!', 'DROOL');
}

function teachsmoke(){
	var fyle = 'picss/das/outside';
	var ary = billyvars;
	var indy = 's';
	drawr(ary, fyle, indy);
	batoner('OK','OK','OK','OK','OK','OK','OK');
}

function outwarn(){
	var fyle = 'picss/das/outside';
	var ary = billyvars;
	var indy = 'w';
	drawr(ary, fyle, indy);
	batoner('UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH');
}

function lectcha(){
	var fyle = 'picss/das/outside';
	var ary = billyvars;
	var indy = 'l';
	drawr(ary, fyle, indy);
	batoner('YOU\'RE','SUCH','A','HYPOCRITE','BUT','OK','WHATEVER');
}

function outstare(){
	var fyle = 'picss/das/outside';
	var ary = billyvars;
	var indy = 'st';
	drawr(ary, fyle, indy);
	batoner('...','...','...','...','...','...','...');
}

function outautwarn(){
	var fyle = 'picss/das/outside';
	var ary = billyvars;
	var indy = 'autw';
	drawr(ary, fyle, indy);
	batoner('OK','OK','OK','OK','OK','OK','OK');
}

function skool4(){
	var ary = skoolvars;
	var fyle = 'picss/das/door';
	var indy = 'd';
	drawr(ary, fyle, indy);
	batoner('BILLY', 'BILLY', 'DRAW', 'DRAW', 'FOLLOW', 'FOLLOW', 'STARE');
}

function art(){
	var fyle = 'picss/das/art';
	skrener(fyle);
	batoner('ROCKETSHIP','ROCKETSHIP','POKEMON','POKEMON','HOUSE','HOUSE','THOUGHTS');
}

function picture1(){
	var fyle = 'picss/das/pica';
	skrener(fyle);
	batoner('ITS','APOLLO','ELEVEN','FROM','THE','MOON','LANDING');
}

function picture2(){
	var fyle = 'picss/das/picb';
	skrener(fyle);
	batoner('NIDOKING','I','CHOOSE','YOU','USE','HORN','ATTACK');
}

function picture3(){
	var fyle = 'picss/das/picc';
	skrener(fyle);
	batoner('THATS','WHERE','I','LIVE','WITH','MY','DAD')
}

function picture4(){
	var fyle = 'picss/das/picd';
	skrener(fyle);
	batoner('ALL','IS','LONELY','NESS','HERE','FOR','ME');
}

function stare1(){
	var fyle = 'picss/das/starea';
	skrener(fyle);
	batoner('STATELY','PLUMP','BUCK','MULLIGAN','CAME','FROM','THE');

}

function stare2(){
	var fyle = 'picss/das/stareb';
	skrener(fyle);
	batoner('GOOD','PIECE','OF','CINE','REAL','HORROR','SHOW');
}

function stare3(){
	var fyle = 'picss/das/starec';
	skrener(fyle);
	batoner('THE','RAINBOW','WINGED','BIRDS','ARE','FLYING','AROUND');
}


function rpsintro(){
	var fyle = 'picss/das/rpsi';
	skrener(fyle);
	batoner('ROCK','ROCK','PAPER','PAPER','SCISORS','SCISORS','XXXXX')
}

function rpsdraw(move, bmove){
	var i;
	for(i = 1; i < 11; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	u1 = 'picss/das/rps'+move+'a.png'
	u2 = 'picss/das/rps'+move+'b.png'
	u3 = 'picss/das/rps'+move+'c.png'
	u4 = 'picss/das/rps'+move+'d.png'
	b1 = 'picss/das/rps'+bmove+'a.png'
	b2 = 'picss/das/rps'+bmove+'b.png'
	b3 = 'picss/das/rps'+bmove+'c.png'
	b4 = 'picss/das/rps'+bmove+'d.png'
	document.getElementById('dis11').src=u1;
	document.getElementById('dis12').src=u2;
	for(i = 13; i < 18; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	document.getElementById('dis18').src=u3;
	document.getElementById('dis19').src=u4;
	for(i = 20; i < 32; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	document.getElementById('dis32').src=b1;
	document.getElementById('dis33').src=b2;
	for(i = 34; i < 39; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	document.getElementById('dis39').src=b3;
	document.getElementById('dis40').src=b4;
	for(i = 41; i < 50; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function rpsjudge (move, bmove, wl){
	if (wl == 'w'){
		rpswin = rpswin +1;
	}
	var i;
	for(i = 1; i < 11; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	u1 = 'picss/das/rps'+move+'a.png'
	u2 = 'picss/das/rps'+move+'b.png'
	u3 = 'picss/das/rps'+move+'c.png'
	u4 = 'picss/das/rps'+move+'d.png'
	b1 = 'picss/das/rps'+bmove+'a.png'
	b2 = 'picss/das/rps'+bmove+'b.png'
	b3 = 'picss/das/rps'+bmove+'c.png'
	b4 = 'picss/das/rps'+bmove+'d.png'
	verda='picss/das/rps'+wl+'a.png'
	verdb='picss/das/rps'+wl+'b.png'
	verdc='picss/das/rps'+wl+'c.png'
	document.getElementById('dis11').src=u1;
	document.getElementById('dis12').src=u2;
	for(i = 13; i < 18; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	document.getElementById('dis18').src=u3;
	document.getElementById('dis19').src=u4;
	document.getElementById('dis20').src=verda;
	for(i = 21; i < 27; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	document.getElementById('dis27').src=verdb
	for(i = 28; i < 32; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	document.getElementById('dis32').src=b1;
	document.getElementById('dis33').src=b2;
	document.getElementById('dis34').src=verdc
	for(i = 35; i < 39; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	document.getElementById('dis39').src=b3;
	document.getElementById('dis40').src=b4;
	for(i = 41; i < 50; i++) {
		var skyl = 'picss/das/rpsd'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyl;};
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function rpseval(move){
	var bmover = Math.floor((Math.random() * 2) + 0);
	var bmove = rpsmoves[bmover]
	if (move == bmove){
		rpsdraw(move,bmove);
		rpsintrov = rpsintrov -1;}
	else if (move == 'r' && bmove == 's'){
		rpsjudge(move, bmove, 'w')
		rpsgameover = rpsgameover +1;
	}
	else if (move == 'r' && bmove == 'p'){
		rpsjudge(move, bmove, 'l')
		rpsgameover = rpsgameover +1;
	}
	else if (move == 'p' && bmove == 'r'){
		rpsjudge(move, bmove, 'w')
		rpsgameover = rpsgameover +1;
	}
	else if (move == 'p' && bmove == 's'){
		rpsjudge(move, bmove, 'l')
		rpsgameover = rpsgameover +1;
	}
	else if (move == 's' && bmove == 'r'){
		rpsjudge(move, bmove, 'l')
		rpsgameover = rpsgameover +1;
	}
	else if (move == 's' && bmove == 'p'){
		rpsjudge(move, bmove, 'w')
		rpsgameover = rpsgameover +1;
	}
	else {
		helpers();
		
	}
}

function rpswiner(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'rpswin';
	drawr(ary, fyle, indy);
	batoner('*DAB*','*DAB*','GET','REKT','LOOSER','*DAB', '*DAB*')
}

function rpsloose(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'rpsloose';
	drawr(ary, fyle, indy);
	batoner('SHUT','UP','BILLY','I','FUCKED', 'YOUR', 'MOM') 
}

function billy2(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'b';
	drawr(ary, fyle, indy);
	batoner('OK','BILLY','THAT','GAME','SOUNDS','LIKE','FUN')
}

function outautard(){
	var fyle = 'picss/das/outside';
	var ary = billyvars;
	var indy = 'aut';
	drawr(ary, fyle, indy);
	batoner('MY PILL','MY PILL','MY PILL','MY PILL','MY PILL','MY PILL','MY PILL');
}

function autard(){
	var fyle = 'picss/das/autard';
	skrener(fyle);
	batoner('*SWALLOW*','*SWALLOW*','*SWALLOW*','*SWALLOW*','*SWALLOW*','*SWALLOW*','*SWALLOW*')
}

function outdetent(){
	var ary = billyvars;
	var fyle = 'picss/das/outside';
	var indy = 'detent';
	drawr(ary, fyle, indy);
	batoner('UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH')
}

function skool5(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'e';
	drawr(ary, fyle, indy);
	batoner('LETS','LEARN!','WHAT','EVER','BILLY','BILLY','BILLY')
}

function detenttime(){
	var fyle = 'picss/das/detent';
	skrener(fyle);
	batoner('...','...','...','...','...','...','...')
}

function tttoecolchooser(row){
	tttoerow = row;
	batoner('A','A','B','B','C','C','---');
} 

function tttoeeval(row, col){
	tttoken = 'x';
	tttoetestfail = 0;
	if (row == 1 && col == 'a'){
		tttoetest(1);
	}
	else if (row == 1 && col == 'b'){
		tttoetest(2);
	}
	else if (row == 1 && col == 'c'){
		tttoetest(3);
	}
	else if (row == 2 && col == 'a'){
		tttoetest(4);
	}
	else if (row == 2 && col == 'b'){
		tttoetest(5);
	}
	else if (row == 2 && col == 'c'){
		tttoetest(6);
	}
	else if (row == 3 && col == 'a'){
		tttoetest(7);
	}
	else if (row == 3 && col == 'b'){
		tttoetest(8);
	}
	else if (row == 3 && col == 'c'){
		tttoetest(9);
	}
	else{
		helpers()
		return
	}
	if (tttoetestfail > 0){
		tttoetestfail = 0;
		return
	}
	if (tttoeboard[0] == tttoeboard[1] && tttoeboard[0] == tttoeboard[2]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}
	else if (tttoeboard[0] == tttoeboard[3] && tttoeboard[0] == tttoeboard[6]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}

	else if (tttoeboard[0] == tttoeboard[4] && tttoeboard[0] == tttoeboard[8]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}
	else if (tttoeboard[1] == tttoeboard[4] && tttoeboard[1] == tttoeboard[7]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}
	else if (tttoeboard[2] == tttoeboard[5] && tttoeboard[2] == tttoeboard[8]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}

	else if (tttoeboard[2] == tttoeboard[4] && tttoeboard[0] == tttoeboard[6]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}
	else if (tttoeboard[3] == tttoeboard[4] && tttoeboard[3] == tttoeboard[5]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}
	else if (tttoeboard[6] == tttoeboard[7] && tttoeboard[6] == tttoeboard[8]){
		tttoegameover = 1;
		tttoewin = 1;
		batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
		return
	}
	else if (tttoemovestaken.length > 8){
		tttoedraw = 1;
		tttoegameover = 1;
		batoner('UH-OH','LOOKS','LIKE','IT\'S','A','CAT\'S','GAME');
		return
	}
	else{
		billytttmove();
		tttoeboarddraw()

		if (tttoeboard[0] == tttoeboard[1] && tttoeboard[0] == tttoeboard[2]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
		else if (tttoeboard[0] == tttoeboard[3] && tttoeboard[0] == tttoeboard[6]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
	
		else if (tttoeboard[0] == tttoeboard[4] && tttoeboard[0] == tttoeboard[8]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
		else if (tttoeboard[1] == tttoeboard[4] && tttoeboard[1] == tttoeboard[7]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
		else if (tttoeboard[2] == tttoeboard[5] && tttoeboard[2] == tttoeboard[8]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
	
		else if (tttoeboard[2] == tttoeboard[4] && tttoeboard[2] == tttoeboard[6]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
		else if (tttoeboard[3] == tttoeboard[4] && tttoeboard[3] == tttoeboard[5]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
		else if (tttoeboard[6] == tttoeboard[7] && tttoeboard[6] == tttoeboard[8]){
			tttoegameover = 1;
			batoner('TIC','TAC','TOE','THREE','IN','A','ROW');
			return
		}
		else if (tttoemovestaken.length > 8){
			tttoedraw = 1;
			tttoegameover = 1;
			batoner('UH-OH','LOOKS','LIKE','IT\'S','A','CAT\'S','GAME');
			return;
		}
		else{
			tttoeboarddraw();
		}
		return
	}
}

function billytttmove(){
	tttoken = 'o';
	var tttrandmove = Math.floor((Math.random() * 9) + 1);
	if (tttoemovestaken.includes(5)){

		if (tttoemovestaken.includes(tttrandmove)){
			billytttmove();
		}
		else{
			tttoeboard[tttrandmove-1] = tttoken;
			tttoemovestaken.push(tttrandmove);
			tttoeboarddraw();
			return
		}
	}
	else{
		tttoeboard[4] = tttoken;
		tttoemovestaken.push(5);
		return
	}
}

function tttoetest(move){
	if (tttoemovestaken.includes(move)){
		tttoeboarddraw();
		tttoetestfail = 1;
		return
	}
	else{
		tttoeboard[move-1] = tttoken;
		tttoemovestaken.push(move);
		tttoeboarddraw();
		return
	}
}

function tttoeboarddraw(){
	var i;
	for (i = 1; i < 17; i++){
		var skyle = 'picss/das/tttoe'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyle;
	};
	if (tttoeboard[0] == 'x'){
		document.getElementById('dis17').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[0] == 'o'){
		document.getElementById('dis17').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis17').src='picss/das/tttoe17.png';
	}
	if (tttoeboard[3] == 'x'){
		document.getElementById('dis18').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[3] == 'o'){
		document.getElementById('dis18').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis18').src='picss/das/tttoe17.png';
	}
	if (tttoeboard[6] == 'x'){
		document.getElementById('dis19').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[6] == 'o'){
		document.getElementById('dis19').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis19').src='picss/das/tttoe17.png';
	}
	for (i = 20; i < 24; i++){
		var skyle = 'picss/das/tttoe'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyle;
	};
	if (tttoeboard[1] == 'x'){
		document.getElementById('dis24').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[1] == 'o'){
		document.getElementById('dis24').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis24').src='picss/das/tttoe17.png';
	}
	if (tttoeboard[4] == 'x'){
		document.getElementById('dis25').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[4] == 'o'){
		document.getElementById('dis25').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis25').src='picss/das/tttoe17.png';
	}
	if (tttoeboard[7] == 'x'){
		document.getElementById('dis26').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[7] == 'o'){
		document.getElementById('dis26').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis26').src='picss/das/tttoe17.png';
	}
	for (i = 27; i < 31; i++){
		var skyle = 'picss/das/tttoe'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyle;
	};
	if (tttoeboard[2] == 'x'){
		document.getElementById('dis31').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[2] == 'o'){
		document.getElementById('dis31').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis31').src='picss/das/tttoe17.png';
	}
	if (tttoeboard[5] == 'x'){
		document.getElementById('dis32').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[5] == 'o'){
		document.getElementById('dis32').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis32').src='picss/das/tttoe17.png';
	}
	if (tttoeboard[8] == 'x'){
		document.getElementById('dis33').src='picss/das/tttoex.png';
	}
	else if (tttoeboard[8] == 'o'){
		document.getElementById('dis33').src='picss/das/tttoeo.png';
	}
	else {
		document.getElementById('dis33').src='picss/das/tttoe17.png';
	}
	for (i = 34; i < 50; i++){
		var skyle = 'picss/das/tttoe'+i+'.png';
		var scrn = 'dis'+i;
		document.getElementById(scrn).src=skyle;
	};
	return
}

function tttoeintroduo(){
	var fyle = 'picss/das/tttoeintroduo';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK');
}

function tttoeintro(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'tttoeintro';
	drawr(ary, fyle, indy);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function tttoecatsgame(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'tttoedraw';
	drawr(ary, fyle, indy);
	batoner('OK','OK','OK','OK','OK','OK','OK');
}

function tttoewiner(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'tttoewin';
	drawr(ary, fyle, indy);
	batoner('SUCK','IT','LOOSER','I','WIN','YOU','LOOSE');
}

function tttoeloose(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'tttoeloose';
	drawr(ary, fyle, indy);
	batoner('SHUT','UP','BILLY','I','FUCKED','YOUR','MOM')
}

function billyfight(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'fight';
	drawr(ary, fyle, indy);
	batoner('FIGHT','FIGHT','FIGHT','NOTHING','NOTHING','NOTHING','NOTHING');
}

function afterfight(){
	var fyle = 'picss/das/afterfight';
	skrener(fyle);
	batoner('SHUT','UP','YOU','DAMN','SNITCH','AND','FIGHT');
}

function teacherfight(){
	var fyle = 'picss/das/teacherfight';
	skrener(fyle);
	batoner('UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH')
}

function latin1(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'f';
	drawr(ary, fyle, indy);
	batoner('*SNORE*','...','OK','OK','OK','...','*SNORE*');
}

function latinintro(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'g';
	drawr(ary, fyle, indy);
	batoner('WOODS','WOODS','DRESS','DRESS','SPARTACUS','SPARTACUS','SPARTACUS');
}

function spartstory(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'hc';
	drawr(ary, fyle, indy);
	batoner('AND','LOTS','OF','THEM','WERE','NAMED','SPARTACUS');
}

function dressstory(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'hb';
	drawr(ary, fyle, indy);
	batoner('AND','THEY','DIDN\'T','HAVE','ANY','BLUE','JEANS');
}


function bigfootstory(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'ha';
	drawr(ary, fyle, indy);
	batoner('AND','BIG','FOOT','TOOK','ALL','OUR','FOOD');
}

function spartreact(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'ic';
	drawr(ary, fyle, indy);
	batoner('DOES','THAT','MAKE','JESUS','SPART','ACUS', 'TOO?');
}

function dressreact(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'ib';
	drawr(ary, fyle, indy);
	batoner('AT','LEAST','I\'M','WEARING','PANTS','NOT','SHEETS');
}

function bigfootreact(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'ia';
	drawr(ary, fyle, indy);
	batoner('BUT','DADDY','SAID','I','SAW','BIG','FOOT')
}

function latinalpha(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'j';
	drawr(ary, fyle, indy);
	batoner('*SNORE*','...','OK','OK','OK','...','*SNORE*');
}

function romainitalia(){
	var fyle = 'picss/das/skoolk';
	skrener(fyle)
	batoner('QUID','QUID','QUID','QUID','QUID','QUID','QUID')
}

function skool6(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'l';
	drawr(ary, fyle, indy);
	batoner('MATH!','MATH!','*YAWN*','*YAWN*','BILLY','BILLY','BILLY')
}

function cnctintro(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'cncti'
	drawr(ary, fyle, indy);
	batoner('I','LOVE','CONNECT','FOUR','YOU\'RE','GONNA','LOOSE')
}

function cnctintrob(){
	cnctdraw();
	batoner('1','2','3','4','5','6','7');
	return
}

function cnctdraw(){
	for (i = 1; i < 50; i++){
		var scrn = 'dis'+ i;
		var skyle = 'picss/das/cnct'+i+'.png';
		if (cnctboard[i-1] == 'y'){
			document.getElementById(scrn).src=yellow;
		}
		else if (cnctboard[i-1] == 'r'){
			document.getElementById(scrn).src=red;
		}
		else{
			document.getElementById(scrn).src=skyle;
		}
	}
}

function cncteval(move,token){
	if (move == 1){
		if (cnctcol1 == 0){
			cnctcol1 = cnctcol1 + 1;
			cnctboard[6]= token;
		}
		else if (cnctcol1 == 1){
			cnctcol1 = cnctcol1 + 1;
			cnctboard[5] = token;
		}
		else if (cnctcol1 == 2){
			cnctcol1 = cnctcol1 + 1;
			cnctboard[4] = token;
		}
		else if (cnctcol1 == 3){
			cnctcol1 = cnctcol1 + 1;
			cnctboard[3] = token;
		}
		else if (cnctcol1 == 4){
			cnctcol1 = cnctcol1 + 1;
			cnctboard[2] = token;
		}
		else if (cnctcol1 == 5){
			cnctcol1 = cnctcol1 + 1;
			cnctboard[1] = token;
		}
		else{
			return
		}
	}
	else if (move == 2){
		if (cnctcol2 == 0){
			cnctcol2 = cnctcol2 + 1;
			cnctboard[6+7]= token;
		}
		else if (cnctcol2 == 1){
			cnctcol2 = cnctcol2 + 1;
			cnctboard[5+7] = token;
		}
		else if (cnctcol2 == 2){
			cnctcol2 = cnctcol2 + 1;
			cnctboard[4+7] = token;
		}
		else if (cnctcol2 == 3){
			cnctcol2 = cnctcol2 + 1;
			cnctboard[3+7] = token;
		}
		else if (cnctcol2 == 4){
			cnctcol2 = cnctcol2 + 1;
			cnctboard[2+7] = token;
		}
		else if (cnctcol2 == 5){
			cnctcol2 = cnctcol2 + 1;
			cnctboard[1+7] = token;
		}
		else{
			return
		}
	}
	else if (move == 3){
		if (cnctcol3 == 0){
			cnctcol3 = cnctcol3 + 1;
			cnctboard[6+14]= token;
		}
		else if (cnctcol3 == 1){
			cnctcol3 = cnctcol3 + 1;
			cnctboard[5+14] = token;
		}
		else if (cnctcol3 == 2){
			cnctcol3 = cnctcol3 + 1;
			cnctboard[4+14] = token;
		}
		else if (cnctcol3 == 3){
			cnctcol3 = cnctcol3 + 1;
			cnctboard[3+14] = token;
		}
		else if (cnctcol3 == 4){
			cnctcol3 = cnctcol3 + 1;
			cnctboard[2+14] = token;
		}
		else if (cnctcol3 == 5){
			cnctcol3 = cnctcol3 + 1;
			cnctboard[1+14] = token;
		}
		else{
			return
		}
	}
	else if (move == 4){
		if (cnctcol4 == 0){
			cnctcol4 = cnctcol4 + 1;
			cnctboard[6+21]= token;
		}
		else if (cnctcol4 == 1){
			cnctcol4 = cnctcol4 + 1;
			cnctboard[5+21] = token;
		}
		else if (cnctcol4 == 2){
			cnctcol4 = cnctcol4 + 1;
			cnctboard[4+21] = token;
		}
		else if (cnctcol4 == 3){
			cnctcol4 = cnctcol4 + 1;
			cnctboard[3+21] = token;
		}
		else if (cnctcol4 == 4){
			cnctcol4 = cnctcol4 + 1;
			cnctboard[2+21] = token;
		}
		else if (cnctcol4 == 5){
			cnctcol4 = cnctcol4 + 1;
			cnctboard[1+21] = token;
		}
		else{
			return
		}
	}
	else if (move == 5){
		if (cnctcol5 == 0){
			cnctcol5 = cnctcol5 + 1;
			cnctboard[6+28]= token;
		}
		else if (cnctcol5 == 1){
			cnctcol5 = cnctcol5 + 1;
			cnctboard[5+28] = token;
		}
		else if (cnctcol5 == 2){
			cnctcol5 = cnctcol5 + 1;
			cnctboard[4+28] = token;
		}
		else if (cnctcol5 == 3){
			cnctcol5 = cnctcol5 + 1;
			cnctboard[3+28] = token;
		}
		else if (cnctcol5 == 4){
			cnctcol5 = cnctcol5 + 1;
			cnctboard[2+28] = token;
		}
		else if (cnctcol5 == 5){
			cnctcol5 = cnctcol5 + 1;
			cnctboard[1+28] = token;
		}
		else{
			return
		}
	}
	else if (move == 6){
		if (cnctcol6 == 0){
			cnctcol6 = cnctcol6 + 1;
			cnctboard[6+35]= token;
		}
		else if (cnctcol6 == 1){
			cnctcol6 = cnctcol6 + 1;
			cnctboard[5+35] = token;
		}
		else if (cnctcol6 == 2){
			cnctcol6 = cnctcol6 + 1;
			cnctboard[4+35] = token;
		}
		else if (cnctcol6 == 3){
			cnctcol6 = cnctcol6 + 1;
			cnctboard[3+35] = token;
		}
		else if (cnctcol6 == 4){
			cnctcol6 = cnctcol6 + 1;
			cnctboard[2+35] = token;
		}
		else if (cnctcol6 == 5){
			cnctcol6 = cnctcol6 + 1;
			cnctboard[1+35] = token;
		}
		else{
			return
		}
	}
	else if (move == 7){
		if (cnctcol7 == 0){
			cnctcol7 = cnctcol7 + 1;
			cnctboard[6+42]= token;
		}
		else if (cnctcol7 == 1){
			cnctcol7 = cnctcol7 + 1;
			cnctboard[5+42] = token;
		}
		else if (cnctcol7 == 2){
			cnctcol7 = cnctcol7 + 1;
			cnctboard[4+42] = token;
		}
		else if (cnctcol7 == 3){
			cnctcol7 = cnctcol7 + 1;
			cnctboard[3+42] = token;
		}
		else if (cnctcol7 == 4){
			cnctcol7 = cnctcol7 + 1;
			cnctboard[2+42] = token;
		}
		else if (cnctcol7 == 5){
			cnctcol7 = cnctcol7 + 1;
			cnctboard[1+42] = token;
		}
		else{
			return
		}
	}
	cnctdraw();
	cnctgamewin();
	if (cnctgameover == 'x'){
		if (token == 'y'){
			cnctbillymove();
			cnctdraw();
			cnctgamewin()
			if (cnctgameover == 'x'){
				return
			}
			else{
				batoner('GAME','OVER','FOUR','IN A','ROW','GAME','OVER');
				cnctfin = 1;
				return
			}

		}
		else{
			return
		}
	}
	else{

		batoner('GAME','OVER','FOUR','IN A','ROW','GAME','OVER');
		cnctfin = 1;
		return
	}
}

function cnctbillymove(){
	if (cnctcol1 == 3){
		bmove = 1;
	}
	else if (cnctcol2 == 3){
		bmove = 2;
	}
	else if (cnctcol3 == 3){
		bmove = 3;
	}
	else if (cnctcol4 == 3){
		bmove = 4;
	}
	else if (cnctcol5 == 3){
		bmove = 5;
	}
	else if (cnctcol6 == 3){
		bmove = 6;
	}
	else if (cnctcol7 == 3){
		bmove = 7;
	}
	else{
		bmove = Math.floor((Math.random() * 7) + 1);
	}
	bcol = 'cnctcol'+bmove
	if (bcol > 5){
		cnctbillymove();
	}
	else{
		cncteval(bmove, 'r')
	}
	return
}

function cnctgamewin(){
	if (cnctboard[4] == cnctboard[10] && cnctboard[4] == cnctboard[16] && cnctboard[4] == cnctboard[22]){
		cnctgameover = cnctboard[4];
		return
	}
	else if (cnctboard[5] == cnctboard[11] && cnctboard[5] == cnctboard[17] && cnctboard[5] == cnctboard[23]){
		cnctgameover = cnctboard[5];
		return
	}
	else if (cnctboard[6] == cnctboard[12] && cnctboard[6] == cnctboard[18] && cnctboard[6] == cnctboard[24]){
		cnctgameover = cnctboard[6];
		return
	}
	else if (cnctboard[11] == cnctboard[17] && cnctboard[11] == cnctboard[23] && cnctboard[11] == cnctboard[29]){
		cnctgameover = cnctboard[11];
		return
	}
	else if (cnctboard[12] == cnctboard[18] && cnctboard[12] == cnctboard[24] && cnctboard[12] == cnctboard[30]){
		cnctgameover = cnctboard[12];
		return
	}
	else if (cnctboard[13] == cnctboard[19] && cnctboard[13] == cnctboard[25] && cnctboard[13] == cnctboard[31]){
		cnctgameover = cnctboard[13];
		return
	}
	else if (cnctboard[18] == cnctboard[24] && cnctboard[18] == cnctboard[30] && cnctboard[18] == cnctboard[36]){
		cnctgameover = cnctboard[18];
		return
	}
	else if (cnctboard[19] == cnctboard[25] && cnctboard[19] == cnctboard[31] && cnctboard[19] == cnctboard[37]){
		cnctgameover = cnctboard[19];
		return
	}
	else if (cnctboard[20] == cnctboard[26] && cnctboard[20] == cnctboard[32] && cnctboard[20] == cnctboard[38]){
		cnctgameover = cnctboard[20];
		return
	}
	else if (cnctboard[25] == cnctboard[31] && cnctboard[25] == cnctboard[37] && cnctboard[25] == cnctboard[43]){
		cnctgameover = cnctboard[25];
		return
	}
	else if (cnctboard[26] == cnctboard[32] && cnctboard[26] == cnctboard[38] && cnctboard[26] == cnctboard[44]){
		cnctgameover = cnctboard[26];
		return
	}
	else if (cnctboard[27] == cnctboard[33] && cnctboard[27] == cnctboard[39] && cnctboard[27] == cnctboard[45]){
		cnctgameover = cnctboard[27];
		return
	}
	else if (cnctboard[1] == cnctboard[9] && cnctboard[1] == cnctboard[17] && cnctboard[1] == cnctboard[25]){
		cnctgameover = cnctboard[1];
		return
	}
	else if (cnctboard[2] == cnctboard[10] && cnctboard[2] == cnctboard[18] && cnctboard[2] == cnctboard[26]){
		cnctgameover = cnctboard[2];
		return
	}
	else if (cnctboard[3] == cnctboard[11] && cnctboard[3] == cnctboard[19] && cnctboard[3] == cnctboard[27]){
		cnctgameover = cnctboard[3];
		return
	}
	else if (cnctboard[8] == cnctboard[16] && cnctboard[8] == cnctboard[24] && cnctboard[8] == cnctboard[32]){
		cnctgameover = cnctboard[8];
		return
	}
	else if (cnctboard[9] == cnctboard[17] && cnctboard[9] == cnctboard[25] && cnctboard[9] == cnctboard[33]){
		cnctgameover = cnctboard[9];
		return
	}
	else if (cnctboard[10] == cnctboard[18] && cnctboard[10] == cnctboard[26] && cnctboard[10] == cnctboard[34]){
		cnctgameover = cnctboard[10];
		return
	}
	else if (cnctboard[15] == cnctboard[23] && cnctboard[15] == cnctboard[31] && cnctboard[15] == cnctboard[39]){
		cnctgameover = cnctboard[15];
		return
	}
	else if (cnctboard[16] == cnctboard[24] && cnctboard[16] == cnctboard[32] && cnctboard[16] == cnctboard[40]){
		cnctgameover = cnctboard[16];
		return
	}
	else if (cnctboard[17] == cnctboard[25] && cnctboard[17] == cnctboard[33] && cnctboard[17] == cnctboard[41]){
		cnctgameover = cnctboard[17];
		return
	}
	else if (cnctboard[22] == cnctboard[30] && cnctboard[22] == cnctboard[38] && cnctboard[22] == cnctboard[46]){
		cnctgameover = cnctboard[22];
		return
	}
	else if (cnctboard[23] == cnctboard[31] && cnctboard[23] == cnctboard[39] && cnctboard[23] == cnctboard[47]){
		cnctgameover = cnctboard[23];
		return
	}
	else if (cnctboard[24] == cnctboard[32] && cnctboard[24] == cnctboard[40] && cnctboard[24] == cnctboard[48]){
		cnctgameover = cnctboard[24];
		return
	}
	else if (cnctboard[1] == cnctboard[2] && cnctboard[1] == cnctboard[3] && cnctboard[1] == cnctboard[4]){
		cnctgameover = cnctboard[1];
		return
	}
	else if (cnctboard[2] == cnctboard[3] && cnctboard[2] == cnctboard[4] && cnctboard[2] == cnctboard[5]){
		cnctgameover = cnctboard[2];
		return
	}
	else if (cnctboard[3] == cnctboard[4] && cnctboard[3] == cnctboard[5] && cnctboard[3] == cnctboard[6]){
		cnctgameover = cnctboard[3];
		return
	}
	else if (cnctboard[8] == cnctboard[9] && cnctboard[8] == cnctboard[10] && cnctboard[8] == cnctboard[11]){
		cnctgameover = cnctboard[8];
		return
	}
	else if (cnctboard[9] == cnctboard[10] && cnctboard[9] == cnctboard[11] && cnctboard[9] == cnctboard[12]){
		cnctgameover = cnctboard[9];
		return
	}
	else if (cnctboard[10] == cnctboard[11] && cnctboard[10] == cnctboard[12] && cnctboard[10] == cnctboard[13]){
		cnctgameover = cnctboard[10];
		return
	}
	else if (cnctboard[15] == cnctboard[16] && cnctboard[15] == cnctboard[17] && cnctboard[15] == cnctboard[18]){
		cnctgameover = cnctboard[15];
		return
	}
	else if (cnctboard[16] == cnctboard[17] && cnctboard[16] == cnctboard[18] && cnctboard[16] == cnctboard[19]){
		cnctgameover = cnctboard[16];
		return
	}
	else if (cnctboard[17] == cnctboard[18] && cnctboard[17] == cnctboard[19] && cnctboard[17] == cnctboard[20]){
		cnctgameover = cnctboard[17];
		return
	}
	else if (cnctboard[22] == cnctboard[23] && cnctboard[22] == cnctboard[24] && cnctboard[22] == cnctboard[25]){
		cnctgameover = cnctboard[22];
		return
	}
	else if (cnctboard[23] == cnctboard[24] && cnctboard[23] == cnctboard[25] && cnctboard[23] == cnctboard[26]){
		cnctgameover = cnctboard[23];
		return
	}
	else if (cnctboard[24] == cnctboard[25] && cnctboard[24] == cnctboard[26] && cnctboard[24] == cnctboard[27]){
		cnctgameover = cnctboard[24];
		return
	}
	else if (cnctboard[29] == cnctboard[30] && cnctboard[29] == cnctboard[31] && cnctboard[29] == cnctboard[32]){
		cnctgameover = cnctboard[29];
		return
	}
	else if (cnctboard[30] == cnctboard[31] && cnctboard[30] == cnctboard[32] && cnctboard[30] == cnctboard[33]){
		cnctgameover = cnctboard[30];
		return
	}
	else if (cnctboard[31] == cnctboard[32] && cnctboard[31] == cnctboard[33] && cnctboard[31] == cnctboard[34]){
		cnctgameover = cnctboard[31];
		return
	}
	else if (cnctboard[36] == cnctboard[37] && cnctboard[36] == cnctboard[38] && cnctboard[36] == cnctboard[39]){
		cnctgameover = cnctboard[36];
		return
	}
	else if (cnctboard[37] == cnctboard[38] && cnctboard[37] == cnctboard[39] && cnctboard[37] == cnctboard[40]){
		cnctgameover = cnctboard[37];
		return
	}
	else if (cnctboard[38] == cnctboard[39] && cnctboard[38] == cnctboard[40] && cnctboard[38] == cnctboard[41]){
		cnctgameover = cnctboard[38];
		return
	}
	else if (cnctboard[43] == cnctboard[44] && cnctboard[43] == cnctboard[45] && cnctboard[43] == cnctboard[46]){
		cnctgameover = cnctboard[43];
		return
	}
	else if (cnctboard[44] == cnctboard[45] && cnctboard[44] == cnctboard[46] && cnctboard[44] == cnctboard[47]){
		cnctgameover = cnctboard[44];
		return
	}
	else if (cnctboard[45] == cnctboard[46] && cnctboard[45] == cnctboard[47] && cnctboard[47] == cnctboard[48]){
		cnctgameover = cnctboard[45];
		return
	}
	else if (cnctboard[1] == cnctboard[8] && cnctboard[1] == cnctboard[15] && cnctboard[1] == cnctboard[22]){
		cnctgameover = cnctboard[1];
		return
	}
	else if (cnctboard[2] == cnctboard[9] && cnctboard[2] == cnctboard[16] && cnctboard[2] == cnctboard[23]){
		cnctgameover = cnctboard[2];
		return
	}
	else if (cnctboard[3] == cnctboard[10] && cnctboard[3] == cnctboard[17] && cnctboard[3] == cnctboard[24]){
		cnctgameover = cnctboard[3];
		return
	}
	else if (cnctboard[4] == cnctboard[11] && cnctboard[4] == cnctboard[18] && cnctboard[4] == cnctboard[25]){
		cnctgameover = cnctboard[4];
		return
	}

	else if (cnctboard[5] == cnctboard[12] && cnctboard[5] == cnctboard[19] && cnctboard[5] == cnctboard[26]){
		cnctgameover = cnctboard[5];
		return
	}
	else if (cnctboard[6] == cnctboard[13] && cnctboard[6] == cnctboard[20] && cnctboard[6] == cnctboard[27]){
		cnctgameover = cnctboard[6];
		return
	}
	else if (cnctboard[8] == cnctboard[15] && cnctboard[8] == cnctboard[22] && cnctboard[8] == cnctboard[29]){
		cnctgameover = cnctboard[8];
		return
	}
	else if (cnctboard[9] == cnctboard[16] && cnctboard[9] == cnctboard[23] && cnctboard[9] == cnctboard[30]){
		cnctgameover = cnctboard[9];
		return
	}
	else if (cnctboard[10] == cnctboard[17] && cnctboard[10] == cnctboard[24] && cnctboard[10] == cnctboard[31]){
		cnctgameover = cnctboard[10];
		return
	}
	else if (cnctboard[11] == cnctboard[18] && cnctboard[11] == cnctboard[25] && cnctboard[11] == cnctboard[32]){
		cnctgameover = cnctboard[11];
		return
	}
	else if (cnctboard[12] == cnctboard[19] && cnctboard[12] == cnctboard[26] && cnctboard[12] == cnctboard[33]){
		cnctgameover = cnctboard[12];
		return
	}
	else if (cnctboard[13] == cnctboard[20] && cnctboard[13] == cnctboard[27] && cnctboard[13] == cnctboard[34]){
		cnctgameover = cnctboard[13];
		return
	}
	else if (cnctboard[15] == cnctboard[22] && cnctboard[15] == cnctboard[29] && cnctboard[15] == cnctboard[36]){
		cnctgameover = cnctboard[15];
		return
	}
	else if (cnctboard[16] == cnctboard[23] && cnctboard[16] == cnctboard[30] && cnctboard[16] == cnctboard[37]){
		cnctgameover = cnctboard[16];
		return
	}
	else if (cnctboard[17] == cnctboard[24] && cnctboard[17] == cnctboard[31] && cnctboard[17] == cnctboard[38]){
		cnctgameover = cnctboard[17];
		return
	}
	else if (cnctboard[18] == cnctboard[25] && cnctboard[18] == cnctboard[32] && cnctboard[18] == cnctboard[39]){
		cnctgameover = cnctboard[18];
		return
	}
	else if (cnctboard[19] == cnctboard[26] && cnctboard[19] == cnctboard[33] && cnctboard[19] == cnctboard[40]){
		cnctgameover = cnctboard[19];
		return
	}
	else if (cnctboard[20] == cnctboard[27] && cnctboard[20] == cnctboard[34] && cnctboard[20] == cnctboard[41]){
		cnctgameover = cnctboard[20];
		return
	}
	else if (cnctboard[22] == cnctboard[29] && cnctboard[22] == cnctboard[36] && cnctboard[22] == cnctboard[43]){
		cnctgameover = cnctboard[22];
		return
	}
	else if (cnctboard[23] == cnctboard[30] && cnctboard[23] == cnctboard[37] && cnctboard[23] == cnctboard[44]){
		cnctgameover = cnctboard[23];
		return
	}
	else if (cnctboard[24] == cnctboard[31] && cnctboard[24] == cnctboard[38] && cnctboard[24] == cnctboard[45]){
		cnctgameover = cnctboard[24];
		return
	}
	else if (cnctboard[25] == cnctboard[32] && cnctboard[25] == cnctboard[39] && cnctboard[25] == cnctboard[46]){
		cnctgameover = cnctboard[25];
		return
	}
	else if (cnctboard[26] == cnctboard[33] && cnctboard[26] == cnctboard[40] && cnctboard[26] == cnctboard[47]){
		cnctgameover = cnctboard[26];
		return
	}
	else if (cnctboard[27] == cnctboard[34] && cnctboard[27] == cnctboard[41] && cnctboard[27] == cnctboard[48]){
		cnctgameover = cnctboard[27];
		return
	}
	else{
		return
	}
}

function cnctwon(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'cnctw';
	drawr(ary, fyle, indy);
	batoner('*DAB*','*DAB*','GET','REKT','LOOSER','*DAB', '*DAB*')
}

function cnctlost(){
	var ary = billyvars;
	var fyle = 'picss/das/billy';
	var indy = 'cnctl';
	drawr(ary, fyle, indy);	
	batoner('SHUT','UP','BILLY','I','FUCKED','YOUR','MOM')
}

function mathintro(){
	var fyle = 'picss/das/math';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function mathone(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'one';
	drawr(ary, fyle, indy);
	batoner('I','F','M','L','V','X','C')
}

function mathtwo(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'two';
	drawr(ary, fyle, indy);
	batoner('VI','X','VII','M','L','IV','XI')
}

function maththree(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'three';
	drawr(ary, fyle, indy);
	batoner('IXIX','IXIX','XCIX','XCIX','IC','XIVIX','XIVIX')
}

function mathnotright(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'notright';
	drawr(ary, fyle, indy);
	batoner('DARN','IT','STUPID','STUPID','STUPID','DARN','IT')
}

function maththatsright(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'thatsright';
	drawr(ary, fyle, indy);
	batoner('*DAB*','LOOK','WHO\'S','SMART','NOW','BILLY','*DAB*')
}

function threerightanswers(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'threeright';
	drawr(ary, fyle, indy);
	batoner('SOUNDS','LIKE','I\'M','PRETTY','GOOD','AT','MATH')
}


function tworightanswers(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'tworight';
	drawr(ary, fyle, indy);
	batoner('STUPID','BILLY','ALWAYS','MAKING','ME','LOOK','BAD')
}

function onerightanswer(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'oneright';
	drawr(ary, fyle, indy);
	batoner('WHY','ARE','THERE','LETTERS','IN','THE','MATH?')
}

function norightanswers(){
	var ary = billyvars;
	var fyle = 'picss/das/math';
	var indy = 'non';
	drawr(ary, fyle, indy);
	batoner('EXCUSE','ME','FOR','ONLY','KNOWING','NUMBER','MATH')
}

function skool7(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy =  'm';
	drawr(ary, fyle, indy);
	batoner('HOW','COME','I\'M','NEVER','THE','LINE','LEADER?')
}

function lunchtime(){
	var fyle = 'picss/das/lunch';
	skrener(fyle);
	batoner('BILLY','BILLY','STACY','STACY','ALONE','ALONE','ALONE')
}

function blunch(){
	var fyle = 'picss/das/blunch';
	skrener(fyle);
	batoner('YEAH','BILLY','WHO','DOESN\'T','LOVE','PIZZA','DAY?')
}

function foodfight(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'ffight';
	drawr(ary, fyle, indy);
	batoner('START','FOOD','FIGHT','\"HEY','BILLY','WHAT\'S','UP\"')
}

function billylunchchat(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'chat';
	drawr(ary, fyle, indy);
	batoner('YEAH','IDK','I','COULD','NOT','PAY','ATTENTION')
}

function playstay(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'play';
	drawr(ary, fyle, indy);
	batoner('SURE','SURE','SURE','NAH','NAH','NO!','NO!')
}

function playstayya(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'playya';
	drawr(ary, fyle, indy);
	batoner('OK','BILLY','YOUR','MOM','MAKES','GREAT','SNACKS')
}

function playstaynah(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'playnah';
	drawr(ary, fyle, indy);
	batoner('SHUT','UP','BILLY','I','FUCKED','YOUR','MOM')
}

function playstayno(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'playno';
	drawr(ary, fyle, indy);
	batoner('I','NEVER','GET','TO','DO','ANYTHING','FUN')
}

function blshow(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'show'
	drawr(ary, fyle, indy);
	batoner('I WAS','GONNA','SHOW','FORGOT','FORGOT','DEEZ','NUTS')
}

function blunchpoke(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'poke'
	drawr(ary, fyle, indy);
	batoner('WOW','REALLY','THANKS','BILLY','THAT\'D','BE','COOL')
}

function blunchcard(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'cards'
	drawr(ary, fyle, indy);
	batoner('WOW','REALLY','THANKS','BILLY','THAT\'D','BE','COOL')
}

function billylol(){
	var ary = billyvars;
	var fyle = 'picss/das/blunch';
	var indy = 'lol'
	drawr(ary, fyle, indy);
	batoner('YEAH','I\'M','SERIOUS','JUST','WAIT','AND','SEE')
}

function foodfighter(){
	var fyle = 'picss/das/ffot';
	skrener(fyle);
	batoner('FUCK','YOU','BILLY','UH-OH','HERE','COMES','TEACHER')
}

function lunchdetent(){
	var ary = skoolvars;
	var fyle = 'picss/das/ffot';
	var indy = 'd';
	drawr(ary, fyle, indy);
	batoner('BUT','BILLY','STARTED','IT','THIS','IS','UNFAIR')
}

function lunchup(){
	var fyle = 'picss/das/lunchup';
	skrener(fyle);
	batoner('I','LIKED','THE','PIZZA','NOT','THE','CARROTS')
}

function lonelunch(){
	var fyle = 'picss/das/lonlun';
	skrener(fyle);
	batoner('NO','ONE','KNOWS','WHAT','IT','FEELS','LIKE')
}

function lstare(){
	var fyle = 'picss/das/lonb';
	skrener(fyle);
	batoner('BUT','THEY','ARE\'N','EVEN','COOL','JUST','LUCKY')
}

function lstaretwo(){
	var fyle = 'picss/das/lons';
	skrener(fyle);
	batoner('THEY','ALL','THINK','THAT','THEY\'RE','SO','COOL')
}

function lstarethree(){
	var ary = billyvars;
	var fyle = 'picss/das/lons';
	var indy = 't';
	drawr(ary, fyle, indy);
	batoner('SHE','PROBABLY','DOESN\'T','EVEN','KNOW','MY','NAME')
}

function slunch(){
	var fyle = 'picss/das/slun';
	skrener(fyle);
	batoner('THE','PIZZA','TODAY','IS','PRETTY','GOOD','HUH?')
}

function stacyb1(){
	var ary = billyvars;
	var fyle = 'picss/das/slun';
	var indy = 'bone';
	drawr(ary, fyle, indy);
	batoner('THAT\'S','NOT','VERY','NICE','OF','YOU','STACY')
}

function stacyb2(){
	var ary = billyvars;
	var fyle = 'picss/das/slun';
	var indy = 'btwo';
	drawr(ary, fyle, indy);
	batoner('THAT\'S','SUCH','A','MEAN','THING','TO','SAY')
}

function stacyb3(){
	var ary = billyvars;
	var fyle = 'picss/das/slun';
	var indy = 'bthree';
	drawr(ary, fyle, indy);
	batoner('STACY','BETTY','PLEASE','STOP','I\'M','GONNA','CRY')
}

function stacyb4(){
	var ary = billyvars;
	var fyle = 'picss/das/slun';
	var indy = 'bfour';
	drawr(ary, fyle, indy);
	batoner('*SOB*','OH','MY','GOD','STACY','STOP','*SOB*')
}

function stacyc1(){
	var ary = billyvars;
	var fyle = 'picss/das/slun';
	var indy = 'cone';
	drawr(ary, fyle, indy);
	batoner('WELL','I','JUST','THOUGHT','THAT','SINCE','...')
}

function stacyc2(){
	var ary = billyvars;
	var fyle = 'picss/das/slun';
	var indy = 'ctwo';
	drawr(ary, fyle, indy);
	batoner('I','WASN\'T','STARING','I','WAS','JUST','ADMIRING')
}

function stacyc3(){
	var ary = billyvars;
	var fyle = 'picss/das/slun';
	var indy = 'cthree';
	drawr(ary, fyle, indy);
	batoner('OK','STACY','OK','BETTY','I\'LL','LEAVE','SORRY')
}

function stacyc4(){
	var ary = billyvars;
	var fyle = 'picss/das/lons';
	var indy = 'tb';
	drawr(ary, fyle, indy);
	batoner('I','WISH','SOMEONE','WOULD','BE','MY','FRIEND')
}

function skool8(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'n';
	drawr(ary, fyle, indy);
	batoner('WE','HAD','PIZZA','AND','IT','WAS','GOOD')
}

function skool9(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'o';
	drawr(ary, fyle, indy);
	if (billypokemon > 0){
		batoner('GOOD','THING','BILLY','LENT','ME','HIS','POKEMON')
	}
	else if (billycard > 0){
		batoner('GOOD','THING','BILLY','LENT','ME','HIS','CARD',)
	}
	else{
		batoner('UH-OH','I','FORGOT','ABOUT','SHOW','AND','TELL')
	}
}

function sntdick(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'sntdi';
	drawr(ary, fyle, indy);
	batoner('FORGOT','FORGOT','FORGOT','DEEZ','NUTS','DEEZ','NUTS')
}

function sntcard(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'sntca';
	drawr(ary, fyle, indy);
	batoner('FORGOT','FORGOT','FORGOT','TAROT','CARD','TAROT','CARD')
}

function sntpoke(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'sntpo';
	drawr(ary, fyle, indy);
	batoner('FORGOT','FORGOT','FORGOT','POKEOMON','POKEMON','POKEMON','POKEMON')
}

function billysnt(){
	var fyle = 'picss/das/billybill';
	skrener(fyle)
	batoner('BILLY','IS','SUCH','A','SPOILED','RICH','KID')
}

function stacysnt(){
	var fyle = 'picss/das/stacysnt';
	skrener(fyle)
	batoner('STACY','AND','HER','SHOES','ARE','SO','ANNOYING')
}

function pokesnt(){
	var fyle = 'picss/das/sntpoke';
	skrener(fyle);
	batoner('HE','EVOLVES','FROM','DRAGONAIR','AT','LEVEL','55')
}

function cardsnt(){
	carta = Math.floor((Math.random() * 3) +1);
	if (carta == 1){
		var fyle = 'picss/das/thefool';
	}
	else if (carta == 2){
		var fyle = 'picss/das/thehermit';
	}
	else {
		var fyle = 'picss/das/thesword';
	}
	skrener(fyle);
	batoner('IT','ISN\'T','YUGIOH','OR','MAGIC','OR','POKEMON')
}

function sntdetent(){
	var fyle = 'picss/das/sntdetent';
	skrener(fyle);
	batoner('YEAH','WHATEVER.','YOU','LIKED','THAT','HUH','STACY?')
}

function sntcool(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'cool';
	drawr(ary, fyle, indy);
	batoner('AT','LEAST','I','HAD','SOMETHING','TO','SHOW')
}

function sntprep(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'prep';
	drawr(ary, fyle, indy);
	batoner('BUT','SHOW','AND','TELL','ISN\'T','EVEN','IMPORTANT!')
}

function sntfail(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'fail';
	drawr(ary, fyle, indy);
	batoner('BUT','ALL','STACY','SHOWED','WAS','HER','SHOES!')
}

function skool10(){
	var ary = skoolvars;
	var fyle = 'picss/das/skool';
	var indy = 'p';
	drawr(ary, fyle, indy);
	batoner('THANK','GOD','I','THOUGHT','IT\'D','NEVER','END')
}

function bletsgo(){
	var ary = billyvars; 
	var fyle = 'picss/das/billy';
	var indy = 'lg';
	drawr(ary, fyle, indy);
	batoner('LAST','ONE','THERE','IS','A','ROTTEN','EGG')
}

function bmomout(){
	var fyle = 'picss/das/momout';
	skrener(fyle);
	batoner('YEAH','LET\'S','GO!','YOU','STILL','MAKING','SNACKS?')
}

function kitchen(){
	var fyle = 'picss/das/kitchen';
	skrener(fyle);
	batoner('OK','I','LIKE','WHERE','THIS','IS','GOING')
}

function backrub(){
	var ary = billyvars;
	var fyle = 'picss/das/kitchen';
	var indy = 'b';
	drawr(ary, fyle, indy);
	batoner('SURE','SURE','SURE','NO','NO','NO','NO')
}

function bedroom(){
	var ary = billyvars;
	var fyle = 'picss/das/kitchen';
	var indy = 'c';
	drawr(ary, fyle, indy);
	batoner('OH','MY','GOD','IS','THIS','REALLY','HAPPENING?')
}

function bilhome(){
	var fyle = 'picss/das/bhome';
	skrener(fyle);
	batoner('WHATEVER','YOU','SAY','BILLY','IT\'S','YOUR','HOUSE')
}

function snacks(){
	var fyle = 'picss/das/sn';
	skrener(fyle);
	batoner('OH','YEAH','THANKS','A LOT','MRS.','BILLY\'S','MOM')
}

function snhelp(){
	var ary = billyvars;
	var fyle = 'picss/das/sn';
	var indy = 'ackshelp';
	drawr(ary, fyle, indy);
	batoner('SURE','SURE','SURE','NO WAY','NO WAY','NO WAY','NO WAY')
}

function letsplay(){
	var fyle = 'picss/das/bflp';
	skrener(fyle);
	batoner('YEAH','WHATEVER','BILLY','I\'LL','BE','BATTLE','DROIDS')
}

function bfone(){
	var fyle = 'picss/das/bfone';
	skrener(fyle);
	batoner('SUPER','SUPER','DROIDEKA','DROIDEDKA','GONK','GONK','GONK')
}

function bftwob(){
	var fyle = 'picss/das/bftb';
	skrener(fyle);
	batoner('WATCH','OUT','BILLY','I','HAVE','WRIST','ROCKETS')
}

function bftwod(){
	var fyle = 'picss/das/bftd';
	skrener(fyle);
	batoner('WATCH', 'OUT','BILLY','I','HAVE','A','SHIELD')
}

function bftwog(){
	var fyle = 'picss/das/bftg';
	skrener(fyle);
	batoner('WATCH','OUT','BILLY','I\'M','THE','GONK','DROID')
}

function bfthreeb(){
	boutcome = Math.floor((Math.random() * 1) + 0);
	if (boutcome < 1){
		bfbwin = 1;
		var fyle = 'picss/das/bfthw';
		skrener(fyle);
		batoner('SUCK','IT','BILLY','YOU','JUST','GOT','WRECKED')
	}
	else{
		var fyle = 'picss/das/bfthl';
		skrener(fyle);
		batoner('WAIT','NO','FAIR','HOW\'D','YOU','DO','THAT?')
	}
}

function bfwinb(){
	var fyle = 'picss/das/bfwinb';
	skrener(fyle);
	batoner('*DAB*','*DAB*','GET','REKT','LOOSER','*DAB', '*DAB*')
}

function bfthreed(){
	var fyle = 'picss/das/bfthd';
	skrener(fyle);
	batoner('OH','SHIT','LOOKS','LIKE','I\'M','GONNA','WIN')
}

function bfwind(){
	var fyle = 'picss/das/bfwd';
	skrener(fyle);
	batoner('*DAB*','*DAB*','GET','REKT','LOOSER','*DAB', '*DAB*')
}

function bfthreeg(){
	var fyle = 'picss/das/bfthg';
	skrener(fyle);
	batoner('WAIT','NO','FAIR','HOW\'D','YOU','DO','THAT?')
}

function bflooseg(){
	var fyle = 'picss/das/bflg';
	skrener(fyle);
	batoner('SHUT','UP','BILLY','I','FUCKED','YOUR','MOM')
}

function bflooseb(){
	var fyle = 'picss/das/bflb';
	skrener(fyle);
	batoner('SHUT','UP','BILLY','I','FUCKED','YOUR','MOM')
}

function nofair(){
	var ary = billyvars;
	var fyle = 'picss/das/bhome';
	var indy = 'nf';
	drawr(ary, fyle, indy);
	batoner('SHUT','UP','BILLY','I','FUCKED','YOUR','MOM')
}

function suckit(){
	var ary = billyvars;
	var fyle = 'picss/das/bhome';
	var indy = 'si';
	drawr(ary, fyle, indy);
	batoner('YOU','GAVE','ME','THE','SHIT','CONTROLLER','BILLY')
}

function seeya(){
	var ary = billyvars;
	var fyle = 'picss/das/bhome';
	var indy = 'sy';
	drawr(ary, fyle, indy);
	batoner('BYE','BILLY','SEE','YOU','IN','THE','MORNING')
}

function dadhomeone(){
	var fyle = 'picss/das/dhome';
	skrener(fyle);
	batoner('DAD','PLEASE','STOP','YELLING','YOU\'RE','SCARING','ME')
}

function dadsdrinkin(){
	var ary = billyvars;
	var fyle = 'picss/das/dhome';
	var indy = 'drinkin';
	drawr(ary, fyle, indy);
	batoner('I','HOPE','HE','DOESN\'T','THROW','UP','AGAIN')
}

function dadhometwo(){
	var ary = billyvars;
	var fyle = 'picss/das/dhome';
	var indy = 'r';
	drawr(ary, fyle, indy);
	batoner('SHUTUP','SHUTUP','NOTHING','NOTHING','NOTHING','A BEER','A BEER')
}

function beer(){
	var ary = billyvars;
	var fyle = 'picss/das/dhome';
	var indy = 'beer';
	drawr(ary, fyle, indy);
	batoner('THANKS','I\'LL','GO','DRINK','IN','MY','ROOM')
}

function room(){
	var fyle = 'picss/das/room';
	skrener(fyle);
	batoner('FINALLY','I','GET','SOME','PEACE','AND','QUIET')
}

function roomr(){
	var fyle = 'picss/das/roomr';
	skrener(fyle)
	batoner('*YAWN*','*YAWN*','*YAWN*','*YAWN*','*YAWN*','*YAWN*','*YAWN*')
}

function beerr(){
	var fyle = 'picss/das/roomb';
	skrener(fyle);
	batoner('*YAWN*','*YAWN*','*YAWN*','*YAWN*','*YAWN*','*YAWN*','*YAWN*')
}

function assbeat(){
	var ary = billyvars;
	var fyle = 'picss/das/dhome';
	var indy = 'ass';
	drawr(ary, fyle, indy);
	batoner('RUN','TO','YOUR','BEDROOM!','CLOSE','THE','DOOR!')
}

function assbeatr(){
	var ary = billyvars;
	var fyle = 'picss/das/room';
	var indy = 'ass';
	drawr(ary, fyle, indy);
	batoner('UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH','UH-OH')
}

function dhome(){
	var fyle = 'picss/das/hayason';
	skrener(fyle);
	batoner('HEY','DAD','SCHOOL','WAS','OKAY','I','GUESS')
}

function bra(){
	var fyle = 'picss/das/bra';
	skrener(fyle);
	batoner('WOW','I\'M','STARTING','TO','FEEL','KINDA','FUNNY')
}

function nobra(){
	var fyle = 'picss/das/nobra';
	skrener(fyle);
	batoner('OH','MY','GOD','WHAT','EVER','YOU','SAY')
}

function billysmom(){
	var ary = billyvars;
	var fyle = 'picss/das/nobra';
	var indy = 'bm';
	drawr(ary, fyle, indy);
	batoner('OH','MY','GOD','I\'M','GOING','TO','CUM')
}

function billysmomtwo(){
	var fyle = 'picss/das/cumd';
	skrener(fyle);
	batoner('*PANT*','DID','WE','REALLY','JUST','DO','THAT?')
}

function billysmomthree(){
	var ary = billyvars;
	var fyle = 'picss/das/cumd';
	var indy = 'b';
	drawr(ary, fyle, indy);
	batoner('I','ACTUALLY','FUCKED','BILLY\'S','MOM!','FUCK','YEAH!')
}

function detentx(){
	var ary = billyvars;
	var fyle = 'picss/das/detent';
	var indy = 'x';
	drawr(ary, fyle, indy);
	batoner('OKAY','BUT','WHAT','DOES','AD','NAUSEUM','MEAN?')
}

function detentwriter(){
	if(detentskar == 0){
		var fyle = 'picss/das/writer';
		skrener(fyle);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else if(detentskar == 1){
		var ary = detentlinea;
		var fyle = 'picss/das/writer';
		var indy = 'd';
		drawr(ary, fyle, indy);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else if(detentskar == 2){
		var ary = detentlineb;
		var fyle = 'picss/das/writer';
		var indy = 'd';
		drawr(ary, fyle, indy);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else if(detentskar == 3){
		var ary = detentlinec;
		var fyle = 'picss/das/writer';
		var indy = 'd';
		drawr(ary, fyle, indy);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else if(detentskar == 4){
		var ary = detentlined;
		var fyle = 'picss/das/writer';
		var indy = 'd';
		drawr(ary, fyle, indy);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else if(detentskar == 5){
		var ary = detentlinee;
		var fyle = 'picss/das/writer';
		var indy = 'd';
		drawr(ary, fyle, indy);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else if(detentskar == 6){
		var ary = detentlinef;
		var fyle = 'picss/das/writer';
		var indy = 'd';
		drawr(ary, fyle, indy);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else if(detentskar == 7){
		var ary = detentlineg;
		var fyle = 'picss/das/writer';
		var indy = 'd';
		drawr(ary, fyle, indy);
		batoner('I','WILL','NOT','CAUSE','PROBLEMS','IN','CLASS')
		detentskar = detentskar +1;
		return
	}
	else{
		var fyle = 'picss/das/writerd';
		skrener(fyle);
		batoner('OKAY','OKAY','OKAY','OKAY','OKAY','OKAY','OKAY')
		detentskar = 0;
		return
	}
}

function detentdad(){
	var ary = billyvars;
	var fyle = 'picss/das/detent';
	var indy = 'dad';
	drawr(ary, fyle, indy);
	batoner('YEAH','WHATEVER','SMELL','YA','LATER','OLD','MAN')
}

function autarda(){
	var fyle = 'picss/das/autone';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function autardb(){
	var ary = billyvars;
	var fyle = 'picss/das/autone';
	var indy = 'b';
	drawr(ary, fyle, indy);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function autardc(){
	var fyle = 'picss/das/auttwo';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function autardd(){
	var fyle = 'picss/das/autthree';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function autarde(){
	var ary = billyvars;
	var fyle = 'picss/das/autone';
	var indy = 'c';
	drawr(ary, fyle, indy);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function autardf(){
	var fyle = 'picss/das/autfour';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function autardg(){
	var fyle = 'picss/das/autfive';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function autardh(){
	var fyle = 'picss/das/autsix';
	skrener(fyle);
	batoner('OK','OK','OK','OK','OK','OK','OK')
}

function fin(){
	var fyle = 'picss/das/fina';
	skrener(fyle);
	batoner('***','***','***','***','***','***','***')
}

function fintwo(){
	var fyle = 'picss/das/finb';
	skrener(fyle);
	batoner('***','***','***','***','***','***','***')
}

function finthree(){
	var fyle = 'picss/das/finc';
	skrener(fyle);
	batoner('***','***','***','***','***','***','***')
}

function finfour(){
	var fyle = 'picss/das/find';
	skrener(fyle);
	batoner('***','***','***','***','***','***','***')
}

function joke(){
	var fyle = 'picss/das/joke';
	skrener(fyle);
	batoner('HAHA','HAHA','HAHA','HAHA','HAHA','HAHA','HAHA')
}




function clickers(val) {
	if (turn < 1) {
		welcome();
		turn = turn + 1;
		return
	}
	else if (turn < 2) {
		dayskool();
		turn = turn + 1;
		return
	}
	else if (turn < 3) {
		if (helperskreen > 0){
			dayskool();
			helperskreen = helperskreen - 1;
			return
		}
		else if (val < 4) {
			skool1();
			turn = turn +1;
			return
		}
		else if (val > 4) {
			helpers();
			helperskreen = helperskreen + 1;
			return
		}
		else {
			joke();
			helperskreen = helperskreen +1;
			return
		}
	}
	else if (turn < 4) {
		if (val < 3) {
			gbp = gbp +1;
			billy1();
			turn = turn +1;
			return
		}
		else if (val < 5) {
			billy1();
			turn = turn +1;
			return
		}
		else if (val < 7) {
			gbp = gbp - 1;
			billy1();
			turn = turn +1;
			return
		}
		else {
			aut = aut +1;
			billy1();
			turn = turn +1;
			return
		}
	}
	else if (turn < 5) {
		billy1a();
		turn = turn +1;
		return
	}
	else if (turn < 6) {
		if (val < 3){
			rival = rival -1;
			skool2();
			gbp = gbp +1;
			turn = turn +1;
			return
		}
		else if (val < 5) {
			skool2();
			turn = turn +1;
			rival = rival +1;
			return
		}
		else if (val < 7) {
			rival = rival +2;
			skool2();
			turn = turn +1;
			return
		}
		else {
			aut = aut +1;
			turn = turn +1;
			skool2();
			return
		}
	}
	else if (turn < 7) {
		if (autw > 0){
			flag3();
			turn = turn +1;
			return
		}
		else if (aut > 1 && autw < 1) {
			autwarn();
			autw = autw +1;
			return
		}
		else if (val < 3) {
			flag1();
			gbp = gbp +1;
			turn = turn +1;
			return
		}
		else if (val < 5) {
			flag2();
			gbp = gbp -1;
			turn = turn +1;
			return
		}
		else if (val < 7) {
			flag3();
			gbp = gbp -1;
			rival = rival +1;
			turn = turn +1;
			return
		}
		else {
			flag3();
			aut = aut +1;
			turn = turn +1;
			return
		}
	}

	else if (turn < 8) {
		if (gbpw > 0) {
			skool3();
			turn = turn +1;
			return
		}
		else if (aut > 1 && autw < 1) {
			autwarn();	
			autw = autw +1;
			return
		}
		else if (aut > 2 && autw > 0) {
			autard();
			turn = 69;
			return
		}	
		else if (gbp < 2) {
			gbpwarn();
			return 
		}
		else  {
			skool3();
			turn = turn +1;
			return 
		}
	}

	else if (turn < 9) {
		skool4();
		turn = turn +1;
		return }
	else if (turn < 10) {
		if (val < 3){
			billy2();
			rpsloop = rpsloop + 1;
			turn = turn +1;
			return
		}
		else if (val < 5){
			art();
			artloop = artloop +1;
			turn = turn +1;
			return
		}
		else if (val < 7){
			follow();
			outside = outside + 1;
			turn = turn +1;
			return
		}
		else { 
			stare1();
			starin = starin +1;
			aut = aut +1;
			turn = turn +1;
			return
		}
	}
	else if (turn < 11) {
		if (rpsloop > 0) {
			if (rpsintrov < 1) {
				rpsintro();
				rpsintrov = rpsintrov + 1;
				return
			}
			else if (rpsgameover > 0 && rpsfin < 1) {
				if (rpswin > 0){
					rpswiner();
					rpsfin = rpsfin + 1;
					turn = turn +1;
					return
				}
				else {
					rpsloose();
					rival = rival +1;
					rpsfin = 1;
					turn = turn +1;
					return
				}
			}
			else if (rpsgameover > 0 && rpsfin > 0){
				turn = turn +1;
				return
			}
			else {
				if (val < 3) {
					rpseval('r');
					return
				}
				else if (val < 5) {
					rpseval('p');
					return
				}
				else if (val < 7) {
					rpseval('s');
					return
				}
				else {
					return
				}
			}
		}
		else if (artloop > 0){
			if (picturedone > 0) {
				batoner('1','2','3','4','5','6','7');
				turn = turn +1;
				return
			}
			else{
				if (val < 3){
					picture1();
					picturedone = picturedone +1;
					turn = turn +1;
					return
				}
				else if (val < 5){
					picture2();
					picturedone = picturedone +1;
					turn = turn +1;
					return
				}
				else if (val < 7){
					picture3();
					picturedone = picturedone +1;
					turn = turn +1;
					return
				}
				else {
					picture4();
					picturedone = picturedone +1;
					turn = turn +1;
					return
				}
			}

		}
		else if (outside > 0){
			if (outsidepass > 0){
				if (aut > 2 && autw > 0){
					autard();
					turn = 69;
					return
				}
				else if (gbp < 1 && gbpw > 0){
					detentgo();
					turn = 50;
					return
				}
				else if (aut > 1 && autw < 1){
					autwarn();
					autw = autw +1;
					return
				}
				else if (gbp < 2 && gbpw < 1){
					gbpwarn();
		
					return
				}
				else{
					skool5();
					turn = turn +2;
					return
				}

			}
			else if (val < 3){
				if (aut > 2 && autw > 0){
					autard();
					turn = 69;
					return
				}
				else if (gbp < 1 && gbpw > 0){
					detentgo();
					turn = 50;
					return
				}
				else if (aut > 1 && autw < 1){
					autwarn();
					autw = autw +1;
					return
				}
				else if (gbp < 2 && gbpw < 1){
					gbpwarn();
		
					return
				}
				else{
					skool5();
					turn = turn +2;
					return
				}
			}
			else if (val < 5){
				teachsmoke();
				outsidepass = outsidepass  +1;
				return
			}
			else if (val < 7) {
				gbp = gbp -1;
				if (gbpw > 0){
					outdetent();
					outsidepass = outsidepass +1;
					return
				}
				else if (gbp < 2) {
					outwarn();
					outsidepass = outsidepass +1;
					return
				}
				else{
					lectcha();
					outsidepass = outsidepass +1;
					return
				}
			}
			else{
				aut = aut +1;
				if (autw > 0){
					outautard();
					turn = turn + 1;
					return

				}
				else if (aut == 2){
					outautwarn();
					autw = autw + 1;
					outsidepass = outsidepass +1;
					return
				}
				else {
					outstare();
					outsidepass = outsidepass +1;
					return
				}
			}
		}
		else {
			if (starevar > 1){
				turn = turn +1;
				return
			}
			else if (starevar > 0){
				stare3();
				starevar = starevar +1;
				turn = turn +1;
				return
			}
			else{
				stare2();
				starevar = starevar +1;
				return
			}
		}
	}
	else if (turn < 12){
		//check aut and gbp
		if (aut > 2 && autw > 0){
			autard();
			turn = 69;
			return
		}
		else if (gbp < 1 && gbpw > 0){
			detentgo();
			turn = 50;
			return
		}
		else if (aut > 1 && autw < 1){
			autwarn();
			autw = autw +1;
			return
		}
		else if (gbp < 2 && gbpw < 1){
			gbpwarn();

			return
		}
		else{
			skool5();
			turn = turn +1;
			return
		}
	}
	else if (turn < 13){
		if (val < 3 && tttoeloop < 1){
			gbp = gbp +1;
			latin1();
			latinloop = latinloop +1;
			turn = turn +1;
			return
		}
		else if (val < 5 && tttoeloop < 1){
			latin1();
			latinloop = latinloop +1;
			turn = turn +1;
			return
		}
		else{
			gbp = gbp -1;
			tttoeloop = tttoeloop +1;
			if (rival > 2 && tttoerival < 1){
				billyfight();
				tttoerival = 1;
				return
			}
			else if (rival > 2 && tttoerival > 0){
				if (val < 4){
					afterfight();
					turn = 49;
					return
				}
				else{
					tttoeintro();
					tttoeintrov = tttoeintrov +1;
					turn = turn +1;
					return
				}
			}
			else{
				tttoeintro();
				tttoeintrov = tttoeintrov +1;
				turn = turn +1;
				return
			}
		}
	}
	else if (turn < 14){
		if (tttoeloop > 0){
			if (tttoeintrov < 1){
				tttoeintro();
				tttoeintrov = tttoeintrov +1;
				return
			}
			else if (tttoeintrotwo < 1){
				tttoeintroduo();
				tttoeintrotwo = 1;
				return

			}
			else if (tttoegameover > 0 && tttoefin > 0){
				turn = turn +1;
				return
			}
			else if (tttoegameover > 0 && tttoefin < 1){
				if (tttoewin > 0){
					tttoewiner();
					tttoefin = tttoefin +1;
					turn = turn +1;
					return
				}
				else if (tttoedraw > 0){
					tttoecatsgame();
					tttoefin = 1;
					turn = turn +1;
					return
				}
				else{
					tttoeloose();
					rival = rival +1;
					tttoefin = tttoefin +1;
					turn = turn +1;
					return
				}
			}
			else if (tttoeindraw < 1){
				tttoeboarddraw();
				batoner('1','1','2','2','3','3','---')
				tttoeindraw = 1;
				return
			}
			else{
				if (tttoecolchoose > 0){
					if (val < 3){
						tttoeeval(tttoerow, 'a');
						tttoecolchoose = 0;
						tttoerow = 0;
						if (tttoegameover < 1){
							batoner('1','1','2','2','3','3','---');
						}
						return
					}
					else if (val < 5){
						tttoeeval(tttoerow, 'b');
						tttoecolchoose = 0;
						tttoerow = 0;
						if (tttoegameover < 1){
							batoner('1','1','2','2','3','3','---');
						}
						return
					}
					else if (val < 7){
						tttoeeval(tttoerow, 'c');
						tttoecolchoose = 0;
						tttoerow = 0;
						if (tttoegameover < 1){
							batoner('1','1','2','2','3','3','---');
						}
						return
					}
					else{
						return
					}
				}
				else{
					if (tttoegameover < 1){
						batoner('1','1','2','2','3','3','---');
					}
					if (val < 3){
						tttoerow = 1;
						tttoecolchoose = 1;
						tttoecolchooser(1)
						return
					}
					else if (val < 5){
						tttoerow = 2;
						tttoecolchoose = 1;
						tttoecolchooser(2)
						return
					}
					else if (val < 7){
						tttoerow = 3;
						tttoecolchoose = 1;
						tttoecolchooser(3)
						return
					}
					else{
						helpers();
						return
					}
				}
			}
		}
		else{
			if (romaitalia > 0){
				romainitalia();
				latinfin = 1;
				turn = turn +1;
				return
			}
			else if (latinreaction > 0){
				latinalpha();
				romaitalia = 1;
				return
			}
			else if (latinstory > 0){
				if (latinstory == 1){
					bigfootreact();
					latinreaction = 1;
					return
				}
				else if (latinstory == 2){
					dressreact();
					latinreaction = 1;
					return
				}
				else{
					spartreact();
					latinreaction = 1;
					return
				}
			}
			else if (latinintrod > 0){
				if (val < 3){
					bigfootstory();
					latinstory = 1;
					return
				}
				else if (val < 5){
					dressstory();
					latinstory = 2;
					return
				}
				else{
					spartstory();
					latinstory = 3;
					return
				}
			}
			else{
				latinintro();
				latinintrod = 1;
				return
			}
		}
	}
	else if (turn < 15){
		if (aut > 2 && autw > 0){
			autard();
			turn = 69;
			return
		}
		else if (gbp < 1 && gbpw > 0){
			detentgo();
			turn = 50;
			return
		}
		else if (aut > 1 && autw < 1){
			autwarn();
			autw = autw +1;
			return
		}
		else if (gbp < 2 && gbpw < 1){
			gbpwarn();
			return
		}
		else{
			skool6();
			turn = turn +1;
			return
		}
	}
	else if (turn < 16){
		if (val < 3){
			gbp = gbp +1;
			mathintro();
			turn = turn +1;
			return
		}
		else if (val < 5){
			mathintro();
			turn = turn +1;
			return
		}
		else{
			gbp = gbp -1;
			connectfourloop = 1;
			if (rival > 2 && cnctrival < 1){
				billyfight();
				cnctrival = 1;
				return
			}
			else if (rival > 2){
				if (val < 4){
					afterfight();
					turn = 49;
					return
				}
				else{
					cnctintro();
					turn = turn +1;
					return
				}
			}
			else{
				cnctintro();
				turn = turn +1;
				return
			}
		}
	}
	else if (turn < 17){
		if (connectfourloop > 0){
			if (cnctfin > 0){
				if (cnctgameover == 'y'){
					cnctwon();
					turn = turn +1;
					return
				}
				else{
					cnctlost();
					rival = rival +1;
					turn = turn +1;
					return
				}
			}
			else if (cnctintrov < 1){
				cnctintrob();
				cnctintrov = 1;
				return
			}
			else{
				cncteval(val,'y');
				return
			}
		}
		else{
			if (math3r > 0){
				if (mathcorrect > 2){
					threerightanswers();
					gbp = gbp +1;
					turn = turn +1;
					return
				}
				else if (mathcorrect > 1){
					tworightanswers();
					turn = turn +1;
					return
				}
				else if (mathcorrect > 0){
					onerightanswer();
					turn = turn +1;
					return
				}
				else{
					norightanswers();
					aut = aut +1;
					turn = turn +1;
					return
				}
			}
			else if (math3 > 0){
				if (val < 5 && val >2){
					mathcorrect = mathcorrect +1;
					maththatsright();
					math3r = 1;
					return
				}
				else{
					mathnotright();
					math3r = 1;
					return
				}
			}
			else if (math2r > 0){
				maththree();
				math3 = 1;
				return
			}
			else if (math2 > 0){
				if (val == 1){
					mathcorrect = mathcorrect +1;
					maththatsright();
					math2r = 1;
					return
				}
				else{
					mathnotright();
					math2r = 1;
					return
				}
			}
			else if (math1r > 0){
				mathtwo();
				math2 = 1;
				return
			}
			else if (math1 > 0){
				if (val == 5){
					mathcorrect = mathcorrect +1;
					maththatsright();
					math1r = 1;
					return
				}
				else{
					mathnotright();
					math1r = 1;
					return
				}
			}
			else{
				mathone();
				math1 = 1;
				return
			}
		}
	}
	else if (turn < 18){
		if (aut > 2 && autw > 0){
			autard();
			turn = 69;
			return
		}
		else if (gbp < 1 && gbpw > 0){
			detentgo();
			turn = 50;
			return
		}
		else if (aut > 1 && autw < 1){
			autwarn();
			autw = autw +1;
			return
		}
		else if (gbp < 2 && gbpw < 1){
			gbpwarn();
			return
		}
		else{
			skool7();
			turn = turn +1;
			return
		}
	}
	else if (turn < 19){
		if (lunchfin > 0){
			skool8();
			turn = turn +1;
			return
		}
		else if (lunchseat > 0){
			if (billylunch > 0){
				if (ffot > 0){
					lunchdetent()
					turn = 50;
					return
				}
				else if (sntchose > 0){
					lunchup();
					lunchfin = 1;
					return
				}

				else if (blshown > 0){
					if (val < 4){
						billypokemon = 1;
						blunchpoke();
						sntchose = 1;
						return
					}
					else if (val < 6){
						billycard = 1;
						blunchcard();
						sntchose = 1;
						return
					}
					else{
						billylol();
						sntchose = 1;
						return
					}
				}
				else if (blsnt > 0){
					blshow();
					blshown = 1;
					return
				}
				else if (blplay > 0){
					if (val < 4){
						billyhouse = 1;
						playstayya();
						blsnt = 1;
						return
					}
					else if (val < 6){
						playstaynah();
						blsnt = 1;
						return
					}
					else{
						playstayno();
						blsnt = 1;
						return
					}
				}
				else if (blchat = 1){
					playstay();
					blplay = 1;
					return
				}
				else if (ffight > 0){
					if (val < 4){
						foodfighter();
						ffot = 1;
						return}

					else{
						billylunchchat();
						blchat = 1;
						return
					}
				}
				else{
					billylunchchat();
					blchat = 1;
					return
				}
			}
			else if (stacylunch > 0){
				if(starin > 0){
					if (stacycreep > 3){
						lunchup();
						lunchfin = 1;
						return
					}
					else if (stacycreep > 2){
						stacyc4();
						stacycreep = stacycreep +1;
						return
					}


					else if (stacycreep > 1){
						stacyc3();
						stacycreep = stacycreep +1;
						return
					}

					else if (stacycreep > 0){
						stacyc2();
						stacycreep = stacycreep +1;
						return
					}
					else{
						stacyc1();
						stacycreep = stacycreep +1;
						return
					}
				}
				else{

					if (stacyb > 4){
						lunchup();
						lunchfin = 1;
						return
					}
					else if (stacyb > 3){
						stacyc4();
						stacyb = stacyb +1;
						return
					}	
					else if (stacyb > 2){
						stacyc3();
						stacyb = stacyb +1;
						return
					}
					else if (stacyb > 2){
						stacyb4();
						stacyb = stacyb +1;
						return
					}
					else if (stacyb > 1){
						stacyb3();
						stacyb = stacyb +1;
						return
					}
					else if (stacyb > 0){
						stacyb2();
						stacyb = stacyb + 1;
						return
					}
					else{
						stacyb1(); 
						stacyb = stacyb +1;
						return
					}
				}
			}
			else{
				if (lunchst > 2){
					lunchup();
					lunchfin = 1;
					return
				}
				else if (lunchst > 1){
					lstarethree();
					lunchst = lunchst +1;
					return
				}
				else if (lunchst > 0){
					lstaretwo();
					lunchst = lunchst +1;
					return
				}
				else{
					lstare();
					lunchst = lunchst +1;
					return
				}
			}
		}
		else if(lunchvar > 0){
			if (val < 3){
				lunchseat = 1;
				billylunch = 1;
				if (rival > 2){
					foodfight();
					ffight = 1;
					return
				}
				else{
					blunch();
					return
				}
			}
			else if(val < 5){
				lunchseat = 1;
				stacylunch = 1;
				slunch();
				return
			}
			else{
				lunchseat = 1;
				lonelunch();
				return
			}
		}
		else{
			lunchtime();
			lunchvar = 1;
			return
		}

	}
	else if(turn < 20){
		skool9();
		turn = turn +1;
		return
	}
	else if (turn < 21){
		billysnt();
		turn = turn +1;
		return
	}
	else if (turn < 22){
		stacysnt();
		turn = turn +1;
		return
	}
	else if (turn < 23){
		if (billypokemon > 0){
			sntpoke();
			snvc = 1;
			turn = turn +1;
			return
		}
		else if (billycard > 0){
			sntcard();
			snvc = 1;
			turn = turn +1;
			return
		}
		else{
			sntdick();
			turn = turn +1;
			return
		}
	}
	else if(turn < 24){
		if(snvc > 0){
			if(billycard > 0 && val > 3){
				cardsnt();
				turn = turn +1;
				return
			}
			else if(val > 3){
				pokesnt();
				turn = turn +1;
				return
			}
			else{
				sntprep();
				sntp = 1;
				turn = turn +1;
				return
			}
		}
		else{
			if(val < 4){
				sntprep();
				sntp = 1;
				turn = turn +1;
				return
			}
			else {
				sntdetent();
				turn = 50;
				return
			}
		}
	}
	else if(turn < 25){
		if(sntp < 1){
			sntcool();
			turn = turn +1;
			return
		}
		else{
			sntfail()
			turn = turn +1;
			return
		}
	}
	else if (turn < 26){
		skool10();
		turn = turn +1;
		return
	}
	else if (turn < 27){
		if(billyhouse > 0){
			bletsgo();
			turn = 34;
			return
		}
		else{
			dhome();
			turn = 99;
			return
		}
	}
	else if (turn == 33){
		bletsgo();
		turn = turn +1;
		return
	}
	else if (turn == 34){
		bmomout();
		turn = turn +1;
		return
	}
	else if (turn == 35){
		bilhome();
		turn = turn +1;
		return
	}
	else if (turn == 36){
		snacks();
		turn = turn +1;
		return
	}
	else if (turn == 37){
		snhelp();
		turn = turn +1;
		return
	}
	else if (turn == 38){
		if (val < 4){
			kitchen();
			turn = 123;
			return
		}
		else{
			letsplay();
			turn = turn +1;
			return
		}
	}
	else if (turn == 39){
		bfone();
		turn = turn +1;
		return
	}
	else if (turn == 40){
		if (val < 3){
			bftwob();
			bfchar = 'b';
			turn = turn +1;
			return
		}
		else if (val < 5){
			bftwod();
			bfchar = 'd';
			turn = turn +1;
			return
		}
		else{
			bftwog();
			bfchar = 'g';
			turn = turn +1;
			return
		}
	}
	else if (turn == 41){
		if(bfchar == 'b'){
			bfthreeb();
			turn = turn +1;
			return
		}
		else if (bfchar == 'd'){
			bfthreed();
			turn = turn +1;
			return
		}
		else{
			bfthreeg();
			turn = turn +1;
			return
		}
	}
	else if (turn == 42){
		if(bfchar == 'b'){
			if(bfbwin > 0){
				bfwinb();
				bfwon = 1;
				turn = turn +1;
				return
			}
			else{
				bflooseb();
				turn = turn +1;
				return
			}
		}
		else if (bfchar == 'd'){
			bfwind();
			bfwon = 1;
			turn = turn +1;
			return
		}
		else{
			bflooseg();
			turn = turn +1;
			return
		}
	}
	else if (turn == 43){
		if (bfwon > 0){
			nofair();
			turn = turn +1;
			return
		}
		else{
			suckit();
			turn = turn +1;
			return
		}
	}
	else if (turn == 44){
		seeya();
		turn = turn +1;
		return
	}
	else if (turn == 45){
		dadsdrinkin();
		turn = 99;
		return
	}
	else if (turn == 49){
		teacherfight();
		turn = turn +1;
		return
	}
	else if (turn == 50){
		detenttime();
		turn = turn +1;
		return
	
	}
	else if (turn == 51){
		detentx();
		turn = turn +1;
		return
	}
	else if (turn == 52){
		if (detentvar < 26){
			detentwriter();
			detentvar = detentvar +1;
			return
		}
		else{
			detentdad();
			turn = turn +1;
			return
		}
	}
	else if (turn == 53){
		dhome();
		turn = 99;
		return
	}
	else if (turn == 69){
		autarda();
		turn = turn +1;
		return
	}
	else if (turn == 70){
		autardb();
		turn = turn +1;
		return
	}
	else if (turn == 71) {
		autardc();
		turn = turn +1;
		return
	}
	else if (turn == 72) {
		autardd();
		turn = turn +1;
		return
	}
	else if (turn == 73) {
		autarde();
		turn = turn +1;
		return
	}
	else if (turn == 74) {
		autardf();
		turn = turn +1;
		return
	}
	else if (turn == 75) {
		autardg();
		turn = turn +1;
		return
	}
	else if (turn == 76) {
		autardh();
		turn = 420;
		return
	}
	else if (turn == 99){
		dadhomeone();
		turn = turn +1;
		return
	}
	else if (turn == 100){
		dadhometwo();
		turn = turn +1;
		return
	}
	else if (turn == 101){
		if(val < 3){
			assbeat();
			dreact = 'a';
			turn = turn +1;
			return
		}
		else if (val < 6){
			room();
			dreact = 'r';
			turn = turn +1;
			return
		}
		else{
			beer();
			dreact = 'b';
			turn = turn + 1;
			return
		}
	}
	else if (turn == 102){
		if (dreact == 'a'){
			assbeatr();
			turn = 420;
			return
		}
		else if (dreact == 'b'){
			beerr();
			turn = 420;
			return
		}
		else{
			roomr();
			turn = 420;
			return
		}
	}
	else if (turn == 123){
		backrub();
		turn = turn +1;
		return
	}
	else if (turn == 124){
		if(val < 4){
			bedroom();
			turn = turn +1;
			return
		}
		else{
			turn = 39;
			letsplay();
			return
		}
	}
	else if(turn == 125){
		bra();
		turn = turn +1;
		return
	}
	else if (turn == 126){
		nobra();
		turn = turn +1;
		return
	}
	else if (turn == 127){
		billysmom();
		turn = turn +1;
		return
	}
	else if (turn == 128){
		billysmomtwo();
		turn = turn +1;
		return
	}
	else if (turn == 129){
		billysmomthree();
		turn = 45;
		return
	}
	else if (turn == 420){
		fin();
		turn = turn +1;
		return
	}
	else if (turn == 421){
		fintwo();
		turn = turn +1;
		return
	}
	else if (turn == 422){
		finthree();
		turn = turn +1;
		return
	}
	else if (turn == 423){
		finfour();
		turn = turn +1;
		return
	}
	else if (turn == 424){
		batoner('PRESS','ANY','BUTTON','TO','PLAY','ANOTHER','DAY')
		turn = 0;
		helperskreen = 0;
		gbp = 3;
		gbpw = 0;
		rival = 0;
		aut = 0;
		autw = 0;
		rpsloop = 0;
		rpsintrov = 0;
		rpswin = 0;
		rpsfin = 0;
		rpsgameover = 0;
		artloop = 0;
		picturedone = 0;
		picturechose = 0;
		outside = 0;
		outsidepass = 0;
		starin = 0;
		starevar = 0;
		tttoeloop = 0;
		latinloop = 0;
		tttoeintrov = 0;
		tttoeintrotwo = 0;
		tttoegameover = 0;
		tttoeindraw = 0;
		tttoerival = 0;
		tttoecolchoose = 0;
		tttoerow = 0;
		tttoecol = 'x';
		tttoken = '?';
		tttoefin = 0;
		tttoedraw = 0;
		tttoetestfail = 0;
		latinfin = 0;
		latinfin = 0;
		romaitalia = 0;
		latinreaction = 0;
		latinstory = 0;
		latinintrod = 0;
		yellow = 'picss/das/cncty.png';
		red = 'picss/das/cnctr.png';
		connectfourloop = 0;
		cnctfin = 0;
		cnctintrov = 0;
		cnctboard = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,35,45,55,65,75,85,95,115,125,135,145,155,165,225,335,445,555,665,775,885,995,1235,12345,1122335];
		cnctcol1 = 0;
		cnctcol2 = 0;
		cnctcol3 = 0;
		cnctcol4 = 0;
		cnctcol5 = 0;
		cnctcol6 = 0;
		cnctcol7 = 0;
		cnctgameover = 'x';
		math1 = 0;
		math2 = 0;
		math3 = 0;
		math1r = 0;
		math2r = 0;
		math3r = 0;
		mathcorrect = 0;
		tttoemovestaken = [];
		billyvars = [6,7,13,14,20,21,27,28,34,35,41,42,48,49];
		lunchvar = 0;
		lunchseat = 0;
		stacylunch = 0;
		ffight = 0;
		billylunch = 0;
		lunchst = 0;
		lunchfin = 0;
		stacyb = 0;
		stacycreep = 0;
		blchat = 0;
		ffot = 0;
		blplay = 0;
		blsnt = 0;
		billyhouse = 0;
		blshown = 0;
		sntchose = 0;
		billycard = 0;
		billypokemon = 0;
		snvc = 0;
		sntp = 0;
		dreact = 0;
		bfchar = 'x';
		bfbwin = 0;
		bfwon = 0;
		dentvar = 0;
		cnctrival = 0;
		detentvar = 0;
		detentskar = 0;
		tttoeboard = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i']
		return

	}
	else {
		batoner('START', 'START','START','START','START','START','START');
		var i;
		var skyl = 'picss/nbbg.png';
		for(i = 1; i < 50; i++) {
			var scrn = 'dis'+i;
			document.getElementById(scrn).src=skyl;
		}

	}
}



function welcome() {
	var fyle = 'picss/das/welco';
	skrener(fyle);
	batoner('START', 'START','START','START','START','START','START');
};
	

import random
import time

###The idea here is to tie together all of my apps (rps, ttt, cards, connectfour, roman numerals, piglatin) and try to tell a coherent story of a day in school make it lighthearted and all that.

#First in class you can go between playing games with Billy or pay attention to class with Ms. teacher. Lets say there's five opprotunities to interact with Billy or Ms. Teacher ie you can play rps 5 times or play rps ttt cards connectfour and piglatin. After 5 turns its lunch time and recess OR you could be put into detention if you play with Billy too many times or use a curse word in piglatin. Lunch time should have some kind of game (2nd level for you!) and detention should also have some 'game' but much more tedious or something (write ten times blah?) After lunch should be a different lesson(Write your name in connect the dots?) and maybe a fight opprotunity with Billy. Different endings should be available for different choices.

curses = ['fuck', 'shit', 'piss', 'trump', 'retard', 'fag', 'gay']

affirm = ['y', 'yes', 'ok', 'ys', 'sure', 'fine', 'good', 'hella', 'aye', 'yea', 'yeah']
negate = ['n', 'no', 'nope', 'nah', 'naw', 'na', 'never', 'nay', 'bad']

numwrk = []
good_input = ['I', 'V', 'X', 'L', 'C', 'D', 'M']
digit_counter = 0
rd_counter = 0
dgtwrk = 0

naughty = 0
nums_converted = 0
class_period = 0
player_name = '?'

helpscreen = 'Whats up! Welcome to the help screen. I wrote the damn bill so until it\'s finished I dont have an exuse to read this...'

teacher_intro = 'Teacher:  Good morning class! Today we\'re going to talk about ancient Rome. Rome, or Roma as the Roman\'s called it, was a great city in Italy where the rich owned horses and slaves, and the poor were treated like horses, or slaves. Does anyone know anything about Roma?'

numclass_intro = 'The Romans used many different letters to represent different numbers. For example I means one and V means five. They wrote the number ten using X and one hundred is C. Instead of using one thousand I\'s to represent one thousand they had a letter for that too. So to answer your ahem question Billy one thousand was just one letter and that letter was M'




def help():
	help_response = input('\nDo you already know how to play?\n')
	if help_response in affirm:
		print('Loading Game\n')
		time.sleep(1)
		gaym()
	else:
		print('Heres the help screen!\n')
		time.sleep(1)
		print(helpscreen)
		donzo = input('Press enter to exit\n')
		help()
	

def gaym():
	print('Its class you wanna chill with [B]ill or [T]eacher?\n')
	b_or_t = input('Enter B or T\n')
	if b_or_t.upper() == 'B':
		billy()
	elif b_or_t.upper() =='T':
		teacher()

def billy():
	print('Billy: What\s up ' + player_name)
	time.sleep(1)
	response = input('Say something [N]ice or [M]ean\n')
	if response.upper() == 'N':
		print('Billy, its so good to see you again\n')
		billy_loop()
	elif response.upper() == 'M':
		print('Billy I fuckin hate you\n')
		time.sleep(1)
		print('Billy: Aight fuck off ' + player_name)
		teacher()
	else:
		print('You drool a little bit from your mouth\n')
		billy_loop()

def teacher():
	print('Ok lets see what the dumb teacher is talking about\n')
	time.sleep(1)
	print(teacher_intro)
	raise_hand = input('Raise your hand? [y] or [n]\n')
	if raise_hand.lower() in affirm:
		print('Teacher:  Yes '+player_name+'?\n')
		time.sleep(1)
		resp = input('[A]sk a question, [M]ake something up, talk about the [S]partacus movie your dad showed you or tell a [J]oke\n')
		response = resp.upper()
		if response != 'A' and response != 'M' and response != 'S' and response != 'J':
			print('You drool a little bit\n')
			time.sleep(1)
			print('Teacher: '+player_name+' , please, try to pay attention\n')
		elif response == 'A':
			print('\'Why didnt the Romans just fight the Civil War like us?\'\n')
			time.sleep(1)
			print('Teacher:  Thats a stupid question '+player_name+'.\n')
		elif response == 'M':
			print('\'When I went to Rome with my family we saw a biiiiig hairy man and he was bigfoot and we asked bigfoot to take a picture with us and he stole my daddy\'s money\'\n')
			time.sleep(1)
			print('Teacher:  Bigfoot doesnt exist '+player_name+'.\n')
		elif response == 'S':
			print('\'Last week my daddy showed me Spartacus and all the big fires scared me and at the end everyone was Jesus\'\n')
			time.sleep(1)
			print('Teacher:  Yes '+player_name+'. Thats how the Romans treated their slaves. They were very cruel people.\n')
		elif response == 'J':
			print('\'Look I know how the Romans used to Dance!\'\n')
			time.sleep(1)
			print('You have jumped out of your chair and started to dance like an egyptian. Billy is laughing hysterically. The teacher is staring at you with fire in her eyes, she looks absolutely furious. Sally has started dancing with you\n')
			time.sleep(1)
			print('Teacher: '+player_name.upper()+'! Stop that right now!\n')
			time.sleep(1)
			print(player_name.upper()+'!!!\n')
			time.sleep(1)
			print('You sit back down\n')	
		classer()	

	else:
		print('silence overtakes the room\n')
		time.sleep(1)
		classer()

def piglatin_translator(piglatin_input):
	banned = ['a','e','i','o','u']
	english_word = piglatin_input
	if english_word.isalpha() and english_word[0] not in banned:
		print(piglatin_input +' in Latin is: ' + english_word[1:] + english_word[0] + 'ay\n')
	else:
		print('ERROR!\n')
		lanclass()


def lanclass():
	print('The Romans had a very complex language system they used call \'Latin\'\n')
	time.sleep(1)
	piglatin_input = input('Enter a word to learn the Latin equivalent!\n')
	piglatin_translator(piglatin_input)

def  numclass():
	global naughty
	print('The Romans had numbers but they didnt look like ours! Instead of 1, 2, and 3 the Romans used letters I, II, and III.\n')
	time.sleep(1)
	print('Billy: So does that mean instead of one thousand they said \"IIIIIIIIIIIIIIIIIIIIIIIIIII....\n')
	time.sleep(1)
	print('...IIIIIIIIIIIIIIIIIIIIII...\n')
	time.sleep(1)
	print('Teacher: BILLY!\n')
	say_something = input('[S]ay something or stay [Q]uiet?\n')
	response = say_something.lower()
	if response in affirm or response == 's':
		print('I\'m IIIIIIII years old!\n')
		time.sleep(1)
		naughty += 1
		print('Teacher: Please be quiet '+player_name)
		time.sleep(1)
		print('...IIIIIIIIIIIII\n')
		time.sleep(1)
		print('BILLY!\n')
	numdirect()


def numrom():
	numeral_list = []
	wrkdgt = 0
	raw_digit = input('Please enter a digit:\n                     \n')
	try:		
		wrkdgt = int(raw_digit)
	except ValueError:
		print('That\'s not a digit!')
		numrom()
	while wrkdgt > 0:
		if wrkdgt >= 1000:
			numeral_list.append('M')
			wrkdgt -= 1000
		elif 900 <= wrkdgt <= 999:
			numeral_list.append('C')
			numeral_list.append('M')
			wrkdgt -= 900
		elif 500 <= wrkdgt:
			numeral_list.append('D')
			wrkdgt -= 500
		elif 400 <= wrkdgt <= 499:
			numeral_list.append('C')
			numeral_list.append('D')
			wrkdgt -= 400
		elif wrkdgt >= 100:
			numeral_list.append('C')
			wrkdgt -= 100
		elif 90 <= wrkdgt <= 99:
			numeral_list.append('X')
			numeral_list.append('C')
			wrkdgt -= 90
		elif wrkdgt >= 50:
			numeral_list.append('L')
			wrkdgt -= 50
		elif 40 <= wrkdgt <= 49:
			numeral_list.append('X')
			numeral_list.append('L')
			wrkdgt -= 40
		elif wrkdgt >= 10:
			numeral_list.append('X')
			wrkdgt -= 10
		elif wrkdgt == 9:
			numeral_list.append('I')
			numeral_list.append('X')
			wrkdgt -= 9
		elif wrkdgt >= 5:
			numeral_list.append('V')
			wrkdgt -= 5
		elif wrkdgt == 4:
			numeral_list.append('I')
			numeral_list.append('V')
			wrkdgt -=14
		else:
			numeral_list.append('I')
			wrkdgt -= 1
	rng = len(numeral_list)
	krn = 0
	numeral_final = ''
	while krn < rng :
		numeral_final = (numeral_final + numeral_list[krn])
		krn += 1	

	print(raw_digit + ' as a roman numeral is: ' + numeral_final+'\n')



def numdirect():
	global nums_converted
	nums_converted += 1
	print(numclass_intro)
	time.sleep(1)
	print('Now lets practice converting our numbers to Roman numbers!\n')
	while nums_converted < 6:
		if nums_converted == 0:
			print('Let\'s give it a try!')
		nums_converted += 1
		numrom()
		print("Lets do another!")
	print('OK class looks like you\'ve got the hang of it. Try telling me some roman numerals now!')
	time.sleep(1)
	romnum()


###I think the romnum function should be cleaned up. numrom is all one function and this is a collection of like four different ones. I guess it works but idk...


def romnum():
	global digit_counter
	digit_counter = 0
	global rd_counter
	rd_counter = 0
	global dgtwrk
	dgtwrk = 0
	global wrk_counter
	wrk_counter = 0
	print('Remember, I=1 V=5 X=10 L=50 X=100 D=500 and M=1000')
	get_input()
	print('Your Digit Is: ' + str(dgtwrk))
	while wrk_counter < len(numwrk):
		#print(numwrk[wrk_counter])
		wrk_counter += 1

	print('FIN')


def get_input():
	global digit_counter
	raw_num = input('Enter a roman numeral: ')
	num = raw_num.upper()
	num_length = len(num)
	while digit_counter < num_length:
		dc = num[digit_counter]
		print(dc)
		numwrk.append(dc)
		if dc not in good_input:
			print('WRONG INPUT NOT RECOGNIZED AS NUMERAL \nDID NOT MATCH good_input')
			get_input()
		digit_counter += 1
	if num_length > 1:
		reader()
	else:
		print("one digit")
		pass

def reader():
	global rd_counter
	global dgtwrk
	if rd_counter > (len(numwrk) - 1):
		print("DONZO BRO")
		return
	focus = numwrk[rd_counter]
	compare = numwrk[rd_counter + 1]
	noom = focus
	if focus == 'C' and compare == 'M':
		subbit(noom)
	elif focus == 'C' and compare == 'D':
		subbit(noom)
	elif focus == 'X' and compare == 'C':
		subbit(noom)
	elif focus == 'X' and compare == 'L':
		subbit(noom)
	elif focus == 'I' and compare == 'X':
		subbit(noom)
	elif focus == 'I' and compare == 'V':
		subbit(noom)
	else:
		 addit(noom)
	rd_counter += 1
	if rd_counter >= (len(numwrk) - 1):
		addit(numwrk[rd_counter])
		print('Reader Maxed OUT!')
		print('YER DIGIT IS: ' + str(dgtwrk))
		return
	else:
		reader()
	
def subbit(noom):
	global dgtwrk
	if noom == 'C':
		dgtwrk -= 100
	elif noom == 'X':
		dgtwrk -= 10
	elif noom == 'I':
		dgtwrk -= 1
	else:
		print('ERROR subbit() got a non CXI input')

def addit(noom):
	global dgtwrk
	if noom == 'M':
		dgtwrk += 1000
	elif noom == 'D':
		dgtwrk += 500
	elif noom == 'C':
		dgtwrk += 100
	elif noom == 'L':
		dgtwrk += 50
	elif noom == 'X':
		dgtwrk += 10
	elif noom == 'V':
		dgtwrk += 5
	elif noom == 'I':
		dgtwrk += 1
	else:
		print('ERROR addit() got a bad input')

	

def classer():
	print('Would you like to learn about Roman numbers or Roman language?\n')
	resp = input('[N]umbers or [L]anguage?\n')
	response = resp.upper()
	if response == 'N':
		numclass()
	elif response == 'L':
		lanclass()


def billy_loop():
	print('Billy spins in a loop\n')

def start():
	global naughty
	global player_name
	welcome = 'WELCOME'
	print('WELCOME\n')
	time.sleep(1)
	welcome = (welcome + ' TO\n')
	print(welcome)
	time.sleep(1)
	print('xxxxxxxxxxxx\n')
	time.sleep(1)
	print('DAY AT SCHOOL\n')
	time.sleep(1)
	print('xxxxxxxxxxxx\n')
	enter = input('Press ENTER to begin\n')
	print('What is your name?\n')
	name_raw = input('Enter a name:	\n')
	name = name_raw.lower()
	player_name = name_raw
	if name in curses:
		naughty += 1
		print('NAUGHTY!\n')
	elif name == 'test':
		numdirect()
	help()
###The structure is set up mostly. I need to import all the different apps and link them into the framework but its seriously almost done, phase one anyways still needs detenttioin, Lunch, and second class period

##OK so Ive added the piglatin function. Clearly everything needs to be worked on but the idea is working in general. Few thoughts: need more spaces, longer pauses on longer output and capitalize player_name[0] also check for curses in more places. Really should be universal. Also using a curse should naughty += 1 and when naughty > 4 it should trigger detention() which I still havnt scripted but I think im gonna make it repeat some line ten times and then drop you off in the next period whether Lunch or class 2 idk.

##naughty is a global variable...every different function that modifies it need a global naughty

##numrom needs to except value error. Probably more places where this happens. Entering a string will fuck it up.

start()
	

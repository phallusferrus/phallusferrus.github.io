import random

#import time

###I want the computer to anticipate victory and act on it
###if b_r_1[0] == b_r_1[2] and "2" in a_m:
###        move = 2
###should be roughly 16 different emminent victory conditions twice as many victory conditions...weird math dude...

b_r_1 = ["1", "2", "3"]
b_r_2 = ["4", "5", "6"]
b_r_3 = ["7", "8", "9"]
a_m = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
oturns = ["0", "2", "4", "6", "8"]
xturns = ["1", "3", "5", "7", "9"]
move = 0
player_token = "?"
turn = 1

def start():
	global player_token
	print("START")
	player_token_raw = input("X or O?:\n")
	player_token = player_token_raw.upper()
	print("You are: "+player_token)
	if player_token == "X" or player_token == "O":
		looper()
	else:
		print("BAD INPUT!:\n")
		start()

def logic(move):
	global turn
	if str(turn) in xturns:
		current_token = "X"
	elif str(turn) in oturns:
		current_token = "O"
	if move in a_m:
		a_m.remove(move)
		if move == "1":
			b_r_1[0] = current_token
		elif move == "2":
			b_r_1[1] = current_token
		elif move == "3":
			b_r_1[2] = current_token
		elif move == "4":
			b_r_2[0] = current_token
		elif move == "5":
			b_r_2[1] = current_token
		elif move == "6":
			b_r_2[2] = current_token
		elif move == "7":
			b_r_3[0] = current_token
		elif move == "8":
			b_r_3[1] = current_token
		elif move == "9":
			b_r_3[2] = current_token
		else:
			print("ERROR: logic() did get a good imput")
	else:
		print("\nBAD MOVE!\n\nTRY AGAIN\n\n")
		print("This is a real error idk what to do...line 69")
		pass
				

def get_player_move():
		print("Your turn!")
		move = input("Take a move:\n            ")
		if str(move) in a_m:
			logic(move)		
		else:
			print("BAD INPUT!\n")
			get_player_move()

def draw():
	print("\n\n***************\n###############\n---------------")
	print(b_r_1)
	print(b_r_2)
	print(b_r_3)
	print("\n\n***************\n###############\n---------------")

def xmove():
	global player_token
	if player_token == "X":
		get_player_move()
	else:
		get_computer_move()

def omove():
	global player_token
	if player_token == "O":
		get_player_move()
	else:
		get_computer_move()

def get_computer_move():
	#first horizontal checks
	if b_r_1[0] == b_r_1[1] and "3" in a_m:
		move = "3"
	elif b_r_1[0] == b_r_1[2] and "2" in a_m:
		move = "2"
	elif b_r_1[1] == b_r_1[2] and "1" in a_m:
		move = "1"
	elif b_r_2[0] == b_r_2[1] and "6" in a_m:
		move = "6"
	elif b_r_2[0] == b_r_2[2] and "5" in a_m:
		move = "5"
	elif b_r_2[1] == b_r_2[2] and "4" in a_m:
		move = "4"
	elif b_r_3[0] == b_r_3[1] and "9" in a_m:
		move = "9"
	elif b_r_3[0] == b_r_3[2] and "8" in a_m:
		move = "8"
	elif b_r_3[1] == b_r_3[2] and "7" in a_m:
		move = "7"
	#Vertical checks
	elif b_r_1[0] == b_r_2[0] and "7" in a_m:
		move = "7"
	elif b_r_1[0] == b_r_3[0] and "4" in a_m:
		move = "4"
	elif b_r_2[0] == b_r_3[0] and "1" in a_m:
		move = "1"
	elif b_r_1[1] == b_r_2[1] and "8" in a_m:
		move = "8"
	elif b_r_1[1] == b_r_3[1] and "5" in a_m:
		move = "5"
	elif b_r_2[1] == b_r_3[1] and "2" in a_m:
		move = "2"
	elif b_r_1[2] == b_r_2[2] and "9" in a_m:
		move = "9"
	elif b_r_1[2] == b_r_3[2] and "6" in a_m:
		move = "6"
	elif b_r_2[2] == b_r_3[2] and "3" in a_m:
		move = "3"
	#Diagonal checks
	elif b_r_1[0] == b_r_3[2] and "5" in a_m:
		move = "5"
	elif b_r_2[1] == b_r_3[2] and "1" in a_m:
		move = "1"
	elif b_r_1[0] == b_r_2[1] and "9" in a_m:
		move = "9"
	elif b_r_3[0] == b_r_1[2] and "5" in a_m:
		move = "5"
	elif b_r_3[0] == b_r_2[1] and "3" in a_m:
		move = "3"
	elif b_r_2[1] == b_r_1[2] and "7" in a_m:
		move = "7"
	#Else pick center

	elif b_r_2[1] == "5":
		move = "5"
	#Else pick random
	else:
		print("\nRANDOM CPU MOVE!!\n")
		move = random.choice(a_m)
	logic(move)
	
def win():
	global turn
	turn += 1
	if turn > 9:
		print("CATSGAME")
		return True
	elif b_r_1[0] == b_r_1[1] and b_r_1[0] == b_r_1[2]:
		return True
	elif b_r_2[0] == b_r_2[1] and b_r_2[0] == b_r_2[2]:
		return True
	elif b_r_3[0] == b_r_3[1] and b_r_3[0] == b_r_3[2]:
		return True
	elif b_r_3[0] == b_r_2[1] and b_r_3[0] == b_r_1[2]:
		return True
	elif b_r_1[0] == b_r_2[1] and b_r_1[0] == b_r_3[2]:
		return True
	elif b_r_3[0] == b_r_2[0] and b_r_3[0] == b_r_1[0]:
		return True
	elif b_r_3[1] == b_r_2[1] and b_r_3[1] == b_r_1[1]:
		return True
	elif b_r_3[2] == b_r_2[2] and b_r_3[2] == b_r_1[2]:
		return True
	else:
		return False
	
				

def looper():
	global turn
	draw()
	print("Turn "+str(turn)+"\nX GO")
	xmove()
	draw()
	if win():
		print("X Wins")
		print("Game Over")
		return
	else:
		print("Turn "+str(turn)+"\nO GO")
		omove()
		draw()
		if win():
			print("O Wins")
			print("Game Over")
			return
		else:
			looper()


print("Welcome to Tic Tac Toe")
enter = input("Press enter to begin:")
start()	


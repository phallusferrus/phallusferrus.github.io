
#WIP. It plays turns now and recognizes victory. computer_move() is BAD!
#I saved it and it def is broken af rn

b_r_1 = ["1","2","3"]
b_r_2 = ["4","5","6"]
b_r_3 = ["7","8","9"]
taken = []
av_mv = ["1","2","3","4","5","6","7","8","9"]
pc = "playerteam"
cc = "computerteam"
side_moves = ["2","4","6","8"]
corner_moves = ["1","3","7","9"]
turn_counter = 2
move = "Current move"
import random

def draw():
	print(b_r_1)
	print(b_r_2)
	print(b_r_3)
	global turn_counter
	if victory():
		end_game()
	elif turn_counter > 11:
		print("CRAPGAME")
	else:
		if pc == "X" and int(turn_counter)%2 == 0:
			get_move()
		elif pc == "O" and int(turn_counter)%2 == 0:
			computer_move()
		elif pc == "X" and int(turn_counter)%2 != 0:
			computer_move()
		elif pc == "O" and int(turn_counter)%2 != 0:
			get_move()
		else:
			print("DRAW ERROR")

def get_move():
	global b_r_1
	global b_r_2
	global b_r_3
	global taken
	global move
	
	move = input(pc+"! Please make your move: ") 
	if int(move) < 10:
		if move in av_mv:
			taken.append(move)
			av_mv.remove(move)
			b_update()
		else:
			print("Error move is taken!")
			get_move()
			
	else:
		print("ERROR wrong input.")
		get_move()	

def show_taken():
	global taken
	for item in taken:
		print(item)

def b_update():
	global move
	global b_r_1
	global b_r_2
	global b_r_3
	global turn_counter
	turn_counter += 1
	show_taken()
	print("Turn: "+str(turn_counter))
	if int(turn_counter)%2 == 0:
		mark = "O"
	else:
		mark = "X"
	movei = int(move)
	if movei == 1:
		b_r_1[0] = mark
	elif movei == 2:
		b_r_1[1] = mark
	elif movei == 3:
		b_r_1[2] = mark
	elif movei == 4:
		b_r_2[0] = mark
	elif movei == 5:
		b_r_2[1] = mark
	elif movei == 6:
		b_r_2[2] = mark
	elif movei == 7:
		b_r_3[0] = mark
	elif movei == 8:
		b_r_3[1] = mark
	elif movei == 9:
		b_r_3[2] = mark
	else:
		print("Something wrong with input to board_update func.")
	draw()
	
def victory():
	global b_r_1
	global b_r_2
	global b_r_3
	if ((b_r_1[0])==(b_r_1[1])==(b_r_1[2])):
		return True
	elif ((b_r_2[0])==(b_r_2[1])==(b_r_2[2])):
		return True
	elif ((b_r_3[0])==(b_r_3[1])==(b_r_3[2])):
		return True
	elif ((b_r_1[0])==(b_r_2[0])==(b_r_3[0])):
		return True
	elif ((b_r_1[1])==(b_r_2[1])==(b_r_3[1])):
		return True
	elif ((b_r_1[2])==(b_r_2[2])==(b_r_3[2])):
		return True
	elif ((b_r_1[0])==(b_r_2[1])==(b_r_3[2])):
		return True
	elif ((b_r_1[2])==(b_r_2[1])==(b_r_3[0])):
		return True
	else:
		return False

def end_game():
	print("SOMEBODY WON")

def start():
	global pc
	global cc
	pc_input = input("Choose X or O: ")
	if pc_input.upper() == "X":
		pc = "X"
		cc = "O"
		draw()
	elif pc_input.upper() == "O":
		pc = "O"
		cc = "X"
		computer_move()
	else:
		print("Try again\n")
		start()

def computer_move():
	global move
	global taken
	global av_mv

	#THis whole thing is bad what it should do:
	###check if it can win, check if I might win, take center,
	###take corner, take 
	cm = "get"
	if "5" in av_mv:
		cm = 5
		move = str(cm)
		taken.append(move)
		av_mv.remove(move)
		b_update()

	if "5" not in taken:
		cm = "5"
		move = cm	
		taken.append(move)
		b_update()
	elif "1" and "3" and "7" and "9" not in taken:
		cm = random.choice(side_moves)
		move = cm
		taken.append(move)
		b_update()
			
	else:
		cm = random.choice(corner_moves)
		move = cm
		taken.append(move)
		b_update()	
		
		

print("Welcome to Tic Tac Toe!\n")
enter = input("Press enter to begin: ")
start()


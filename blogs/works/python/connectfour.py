import random
import time



welcome = "CONNECT FOUR!\nWELCOME TO THE GAME\nPRESS ENTER TO BEGIN:"

player_1_token = "[#]"
player_2_token = "[0]"
gdmv = ["1", "2", "3", "4", "5", "6", "7"]
player_team = 69
player_teem = "?"
turn = 0

br1 = ["[ ]","[ ]", "[ ]", "[ ]", "[ ]", "[ ]", "[ ]"]
br2 = ["[ ]","[ ]", "[ ]", "[ ]", "[ ]", "[ ]", "[ ]"]
br3 = ["[ ]","[ ]", "[ ]", "[ ]", "[ ]", "[ ]", "[ ]"]
br4 = ["[ ]","[ ]", "[ ]", "[ ]", "[ ]", "[ ]", "[ ]"]
br5 = ["[ ]","[ ]", "[ ]", "[ ]", "[ ]", "[ ]", "[ ]"]
br6 = ["[ ]","[ ]", "[ ]", "[ ]", "[ ]", "[ ]", "[ ]"]
bot = ["[1]","[2]", "[3]", "[4]", "[5]", "[6]", "[7]"]

def draw():
	d_r_1 = br1[0]+br1[1]+br1[2]+br1[3]+br1[4]+br1[5]+br1[6]
	d_r_2 = br2[0]+br2[1]+br2[2]+br2[3]+br2[4]+br2[5]+br2[6]
	d_r_3 = br3[0]+br3[1]+br3[2]+br3[3]+br3[4]+br3[5]+br3[6]
	d_r_4 = br4[0]+br4[1]+br4[2]+br4[3]+br4[4]+br4[5]+br4[6]
	d_r_5 = br5[0]+br5[1]+br5[2]+br5[3]+br5[4]+br5[5]+br5[6]
	d_r_6 = br6[0]+br6[1]+br6[2]+br6[3]+br6[4]+br6[5]+br6[6]
	d_r_7 = bot[0]+bot[1]+bot[2]+bot[3]+bot[4]+bot[5]+bot[6]
	print(d_r_1)
	print(d_r_2)
	print(d_r_3)
	print(d_r_4)
	print(d_r_5)
	print(d_r_6)
	print("---------------------")
	print(d_r_7)
	
	

def turner():
	if (turn % 2) == 0:
		return False
	else:
		return True

def drop(move):
	if turner():
		token = player_1_token
	else:
		token = player_2_token
	if move not in gdmv:
		print("ERROR drop got a bad move input")
	elif move == "1":
		if br6[0] == "[ ]":
			br6[0] = token
			
		elif br5[0] == "[ ]":
			br5[0] = token
		elif br4[0] == "[ ]":
			br4[0] = token
			
		elif br3[0] == "[ ]":
			br3[0] = token
		elif br2[0] == "[ ]":
			br2[0] = token
			
		elif br1[0] == "[ ]":
			gdmv.remove("1")
			br1[0] = token
		else:
			print("SLOT FULL TRY AGAIN!")
			get_player_move()
	elif move == "2":
		if br6[1] == "[ ]":
			br6[1] = token
			
		elif br5[1] == "[ ]":
			br5[1] = token
		elif br4[1] == "[ ]":
			br4[1] = token
			
		elif br3[1] == "[ ]":
			br3[1] = token
		elif br2[1] == "[ ]":
			br2[1] = token
			
		elif br1[1] == "[ ]":
			gdmv.remove("2")
			br1[1] = token
		else:
			print("SLOT FULL TRY AGAIN!")
			get_player_move()
	elif move == "3":
		if br6[2] == "[ ]":
			br6[2] = token
			
		elif br5[2] == "[ ]":
			br5[2] = token
		elif br4[2] == "[ ]":
			br4[2] = token
			
		elif br3[2] == "[ ]":
			br3[2] = token
		elif br2[2] == "[ ]":
			br2[2] = token
			
		elif br1[2] == "[ ]":
			gdmv.remove("3")
			br1[2] = token
		else:
			print("SLOT FULL TRY AGAIN!")
			get_player_move()
	elif move == "4":
		if br6[3] == "[ ]":
			br6[3] = token
			
		elif br5[3] == "[ ]":
			br5[3] = token
		elif br4[3] == "[ ]":
			br4[3] = token
			
		elif br3[3] == "[ ]":
			br3[3] = token
		elif br2[3] == "[ ]":
			br2[3] = token
			
		elif br1[3] == "[ ]":
			gdmv.remove("4")
			br1[3] = token
		else:
			print("SLOT FULL TRY AGAIN!")
			get_player_move()
	elif move == "5":
		if br6[4] == "[ ]":
			br6[4] = token
			
		elif br5[4] == "[ ]":
			br5[4] = token
		elif br4[4] == "[ ]":
			br4[4] = token
			
		elif br3[4] == "[ ]":
			br3[4] = token
		elif br2[4] == "[ ]":
			br2[4] = token
			
		elif br1[4] == "[ ]":
			gdmv.remove("5")
			br1[4] = token
		else:
			print("SLOT FULL TRY AGAIN!")
			get_player_move()
	elif move == "6":
		if br6[5] == "[ ]":
			br6[5] = token
			
		elif br5[5] == "[ ]":
			br5[5] = token
		elif br4[5] == "[ ]":
			br4[5] = token
			
		elif br3[5] == "[ ]":
			br3[5] = token
		elif br2[5] == "[ ]":
			br2[5] = token
			
		elif br1[5] == "[ ]":
			gdmv.remove("6")
			br1[5] = token
		else:
			print("SLOT FULL TRY AGAIN!")
			get_player_move()
	elif move == "7":
		if br6[6] == "[ ]":
			br6[6] = token
			
		elif br5[6] == "[ ]":
			br5[6] = token
		elif br4[6] == "[ ]":
			br4[6] = token
			
		elif br3[6] == "[ ]":
			br3[6] = token
		elif br2[6] == "[ ]":
			br2[6] = token
			
		elif br1[6] == "[ ]":
			gdmv.remove("7")
			br1[6] = token
		else:
			print("SLOT FULL TRY AGAIN!")
			get_player_move()
	else:
		print("drop() couldnt do the move... idk wasnt equal to 1 2 3 4 5 6 or 7 I suppose...")




def get_computer_move():
	move = random.choice(gdmv)
	drop(move)





def get_player_move():
	move = input("What collumn you choose? (1-7)")
	if move in gdmv:
		drop(move)
	else:
		print("BAD MOVE TRY AGAIN")
		draw()
		get_player_move()


def start():
	global player_team
	global player_teem
	print(welcome)
	enter = input("")
	while player_team != 1 and player_team != 2:
		player_teem = input("Would you like to go [1]st or [2]nd?\n")
		player_team = int(player_teem)
		print("WRONG INPUT TRY AGAIN (1) or (2)")
	if player_team == 1:
		looper()
	elif player_team == 2:
		looper()
	
def looper():
	global turn
	draw()
	turn += 1
	print("Turn "+str(turn))
	player_one()
	draw()
	if win():
		print("Player One Wins!")
		print("Game Over")
		return
	else:
		turn += 1
		print("Turn "+str(turn))
		player_two()
		draw()
		if win():
			print("Player Two Wins!")
			print("Game Over")
			return
		else:
			looper()

def player_one():
	if player_teem == "1":
		get_player_move()
	else:
		get_computer_move()

def player_two():
	if player_teem == "2":
		get_player_move()
	else:
		get_computer_move()

def win():
	#Jeeez this is gonna be tedious... Roughly 73 different win combinations that I will need to test manually...damn
	#Ya its horizontal(4*6=24) + vertical(3*7=21) + diagonal(28? hard to count tbh...)
	#right now I have described one...
	if br6[0] == br6[1] and br6[0] == br6[2] and br6[0] == br6[3] and br6[0] != "[ ]":
		return True
	elif br6[1] == br6[2] and br6[1] == br6[3] and br6[1] == br6[4] and br6[1] != "[ ]":
		return True
	elif br6[2] == br6[3] and br6[2] == br6[4] and br6[2] == br6[5] and br6[2] != "[ ]":
		return True
	elif br6[3] == br6[4] and br6[3] == br6[5] and br6[3] == br6[6] and br6[3] != "[ ]":
		return True
	elif br5[0] == br5[1] and br5[0] == br5[2] and br5[0] == br5[3] and br5[0] != "[ ]":
		return True
	elif br5[1] == br5[2] and br5[1] == br5[3] and br5[1] == br5[4] and br5[1] != "[ ]":
		return True
	elif br5[2] == br5[3] and br5[2] == br5[4] and br5[2] == br5[5] and br5[2] != "[ ]":
		return True
	elif br5[3] == br5[4] and br5[3] == br5[5] and br5[3] == br5[6] and br5[3] != "[ ]":
		return True
	elif br4[0] == br4[1] and br4[0] == br4[2] and br4[0] == br4[3] and br4[0] != "[ ]":
		return True
	elif br4[1] == br4[2] and br4[1] == br4[3] and br4[1] == br4[4] and br4[1] != "[ ]":
		return True
	elif br4[2] == br4[3] and br4[2] == br4[4] and br4[2] == br4[5] and br4[2] != "[ ]":
		return True
	elif br4[3] == br4[4] and br4[3] == br4[5] and br4[3] == br4[6] and br4[3] != "[ ]":
		return True
	elif br3[0] == br3[1] and br3[0] == br3[2] and br3[0] == br3[3] and br3[0] != "[ ]":
		return True
	elif br3[1] == br3[2] and br3[1] == br3[3] and br3[1] == br3[4] and br3[1] != "[ ]":
		return True
	elif br3[2] == br3[3] and br3[2] == br3[4] and br3[2] == br3[5] and br3[2] != "[ ]":
		return True
	elif br3[3] == br3[4] and br3[3] == br3[5] and br3[3] == br3[6] and br3[3] != "[ ]":
		return True	
	elif br3[0] == br3[1] and br3[0] == br3[2] and br3[0] == br3[3] and br3[0] != "[ ]":
		return True
	elif br3[1] == br3[2] and br3[1] == br3[3] and br3[1] == br3[4] and br3[1] != "[ ]":
		return True
	elif br3[2] == br3[3] and br3[2] == br3[4] and br3[2] == br3[5] and br3[2] != "[ ]":
		return True
	elif br3[3] == br3[4] and br3[3] == br3[5] and br3[3] == br3[6] and br3[3] != "[ ]":
		return True
	elif br2[0] == br2[1] and br2[0] == br2[2] and br2[0] == br2[3] and br2[0] != "[ ]":
		return True
	elif br2[1] == br2[2] and br2[1] == br2[3] and br2[1] == br2[4] and br2[1] != "[ ]":
		return True
	elif br2[2] == br2[3] and br2[2] == br2[4] and br2[2] == br2[5] and br2[2] != "[ ]":
		return True
	elif br2[3] == br2[4] and br2[3] == br2[5] and br2[3] == br2[6] and br2[3] != "[ ]":
		return True
	elif br1[0] == br1[1] and br1[0] == br1[2] and br1[0] == br1[3] and br1[0] != "[ ]":
		return True
	elif br1[1] == br1[2] and br1[1] == br1[3] and br1[1] == br1[4] and br1[1] != "[ ]":
		return True
	elif br1[2] == br1[3] and br1[2] == br1[4] and br1[2] == br1[5] and br1[2] != "[ ]":
		return True
	elif br1[3] == br1[4] and br1[3] == br1[5] and br1[3] == br1[6] and br1[3] != "[ ]":
		return True
	#Thats all horizontal win conditions. Next up is vertical win conditions
	elif br1[0] == br2[0] and br1[0] == br3[0] and br1[0] == br4[0] and br1[0] != "[ ]":
		return True
	elif br2[0] == br3[0] and br2[0] == br4[0] and br2[0] == br5[0] and br2[0] != "[ ]":
		return True
	elif br3[0] == br4[0] and br3[0] == br5[0] and br3[0] == br6[0] and br3[0] != "[ ]":
		return True
	elif br1[1] == br2[1] and br1[1] == br3[1] and br1[1] == br4[1] and br1[1] != "[ ]":
		return True
	elif br2[1] == br3[1] and br2[1] == br4[1] and br2[1] == br5[1] and br2[1] != "[ ]":
		return True
	elif br3[1] == br4[1] and br3[1] == br5[1] and br3[1] == br6[1] and br3[1] != "[ ]":
		return True
	elif br1[2] == br2[2] and br1[2] == br3[2] and br1[2] == br4[2] and br1[2] != "[ ]":
		return True
	elif br2[2] == br3[2] and br2[2] == br4[2] and br2[2] == br5[2] and br2[2] != "[ ]":
		return True
	elif br3[2] == br4[2] and br3[2] == br5[2] and br3[2] == br6[2] and br3[2] != "[ ]":
		return True
	elif br1[3] == br2[3] and br1[3] == br3[3] and br1[3] == br4[3] and br1[3] != "[ ]":
		return True
	elif br2[3] == br3[3] and br2[3] == br4[3] and br2[3] == br5[3] and br2[3] != "[ ]":
		return True
	elif br3[3] == br4[3] and br3[3] == br5[3] and br3[3] == br6[3] and br3[3] != "[ ]":
		return True
	elif br1[4] == br2[4] and br1[4] == br3[4] and br1[4] == br4[4] and br1[4] != "[ ]":
		return True
	elif br2[4] == br3[4] and br2[4] == br4[4] and br2[4] == br5[4] and br2[4] != "[ ]":
		return True
	elif br3[4] == br4[4] and br3[4] == br5[4] and br3[4] == br6[4] and br3[4] != "[ ]":
		return True
	elif br1[5] == br2[5] and br1[5] == br3[5] and br1[5] == br4[5] and br1[5] != "[ ]":
		return True
	elif br2[5] == br3[5] and br2[5] == br4[5] and br2[5] == br5[5] and br2[5] != "[ ]":
		return True
	elif br3[5] == br4[5] and br3[5] == br5[5] and br3[5] == br6[5] and br3[5] != "[ ]":
		return True
	elif br1[6] == br2[6] and br1[6] == br3[6] and br1[6] == br4[6] and br1[6] != "[ ]":
		return True
	elif br2[6] == br3[6] and br2[6] == br4[6] and br2[6] == br5[6] and br2[6] != "[ ]":
		return True
	elif br3[6] == br4[6] and br3[6] == br5[6] and br3[6] == br6[6] and br3[6] != "[ ]":
		return True
	#Just needs diagonals now...
	elif br4[0] == br3[1] and br4[0] == br2[2] and br4[0] == br1[3] and br4[0] != "[ ]":
		return True
	elif br5[0] == br4[1] and br5[0] == br3[2] and br5[0] == br2[3] and br5[0] != "[ ]":
		return True
	elif br6[0] == br5[1] and br6[0] == br4[2] and br6[0] == br3[3] and br6[0] != "[ ]":
		return True
	elif br4[1] == br3[2] and br4[1] == br2[3] and br4[1] == br1[4] and br4[1] != "[ ]":
		return True
	elif br5[1] == br4[2] and br5[1] == br3[3] and br5[1] == br2[4] and br5[1] != "[ ]":
		return True
	elif br6[1] == br5[2] and br6[1] == br4[3] and br6[1] == br3[4] and br6[1] != "[ ]":
		return True
	elif br4[2] == br3[3] and br4[2] == br2[4] and br4[2] == br1[5] and br4[2] != "[ ]":
		return True
	elif br5[2] == br4[3] and br5[2] == br3[4] and br5[2] == br2[5] and br5[2] != "[ ]":
		return True
	elif br6[2] == br5[3] and br6[2] == br4[4] and br6[2] == br3[5] and br6[2] != "[ ]":
		return True
	elif br4[3] == br3[4] and br4[3] == br2[5] and br4[3] == br1[6] and br4[3] != "[ ]":
		return True
	elif br5[3] == br4[4] and br5[3] == br3[5] and br5[3] == br2[6] and br5[3] != "[ ]":
		return True
	elif br6[3] == br5[4] and br6[3] == br4[5] and br6[3] == br3[6] and br6[3] != "[ ]":
		return True
	#OK that's half the diagonals...
	elif br1[0] == br2[1] and br1[0] == br3[2] and br1[0] == br4[3] and br1[0] != "[ ]":
		return True
	elif br2[0] == br3[1] and br2[0] == br4[2] and br2[0] == br5[3] and br2[0] != "[ ]":
		return True
	elif br3[0] == br4[1] and br3[0] == br5[2] and br3[0] == br6[3] and br3[0] != "[ ]":
		return True
	elif br1[1] == br2[2] and br1[1] == br3[3] and br1[1] == br4[4] and br1[1] != "[ ]":
		return True
	elif br2[1] == br3[2] and br2[1] == br4[3] and br2[1] == br5[4] and br2[1] != "[ ]":
		return True
	elif br3[1] == br4[2] and br3[1] == br5[3] and br3[1] == br6[4] and br3[1] != "[ ]":
		return True
	elif br1[2] == br2[3] and br1[2] == br3[4] and br1[2] == br4[5] and br1[2] != "[ ]":
		return True
	elif br2[2] == br3[3] and br2[2] == br4[4] and br2[2] == br5[5] and br2[2] != "[ ]":
		return True
	elif br3[2] == br4[3] and br3[2] == br5[4] and br3[2] == br6[5] and br3[2] != "[ ]":
		return True
	elif br1[3] == br2[4] and br1[3] == br3[5] and br1[3] == br4[6] and br1[3] != "[ ]":
		return True
	elif br2[3] == br3[4] and br2[3] == br4[5] and br2[3] == br5[6] and br2[3] != "[ ]":
		return True
	elif br3[3] == br4[4] and br3[3] == br5[5] and br3[3] == br6[6] and br3[3] != "[ ]":
		return True
	else:
		return False
while turn < 42 and not win():
	start()

print("FIN - FIN - FIN")

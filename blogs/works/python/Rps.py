#Works doesnt check for alt.input no game loop or score

v_i = ['r', 'p', 's']
import random
player_move = "get the move!"

print("RPS!")

def get_input():
	global player_move
	player_move = input("Throw: \n")
	if player_move.lower() in v_i:
		judgement()
	else:
		print("Bad input")
		get_input()

def judgement():
		global player_move
		computer_move = random.choice(v_i)
		print('player picked ' + player_move)
		print('computer picked ' + computer_move)
		if computer_move == player_move:
			print('tie')
		elif computer_move == 'r' and player_move == 'p':
			print('you win p beats r')
		elif computer_move == 'r' and player_move == 's':
			print('you loose r beat s')
		elif computer_move == 'p' and player_move == 'r':
			print('you loose p beat r')
		elif computer_move == 'p' and player_move == 's':
			print('you win s beat p')
		elif computer_move == 's' and player_move == 'r':
			print('you win r beat s')
		elif computer_move == 's' and player_move == 'p':
			print('you loose s beat p')


get_input()





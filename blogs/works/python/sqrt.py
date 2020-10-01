def sqrter(guess, x):
	if goodguess(guess, x):
		print(guess)
		return guess
	else:
		improve(guess, x)

def goodguess(guess, x):
	if abs( (x/guess) - guess) < 0.0005:
		return True
	else:
		return False

def improve(guess, x):
	avgguessed = ( (guess + (x/guess)) / 2)
	sqrter(avgguessed, x)


guess = 1

ximp = input("Enter radicand: ")

x = int(ximp)

sqrter(guess, x)





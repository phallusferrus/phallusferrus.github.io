import random

print("Welcome to CardDraw")
deck = input("Please enter (s)tandard or (t)arot:")

if deck.lower() == "s":
	suits = ["Spades", "Hearts", "Clubs", "Diamonds"]
	ranks = ["Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"]

	my_suit = random.choice(suits)
	my_rank = random.choice(ranks)
	my_draw = (my_rank+" of "+my_suit)
	print(my_draw)

elif deck.lower() == "t":
	suits = ["Wands", "Cups", "Swords", "Coins"]
	ranks = ["Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Page", "Knight", "Queen", "King"]
	majors = ["The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor", "The Hierophant", "The Lovers", "The Chariot", "Justice", "The Hermit", "The Wheel of Fortune", "Strenght", "The Hanged Man", "Death", "Temperance", "The Devil", "The Tower", "The Star", "The Moon", "The Sun", "Judgement", "The World"]
	randint = random.randint(1,78)
	if randint >= 23:
		my_suit = random.choice(suits)
		my_rank = random.choice(ranks)
		my_draw = (my_rank+" of "+my_suit)
		print(my_draw)
	else:
		my_draw = random.choice(majors)
		print(my_draw)
	

else:
	deck = input("Please enter (s)tandard or (t)arot:")

#Python
#Just fuckin around

import random
agreement_words = ["y", "yes", "sure"]
advice_list = ["go walk outside", "read", "watch more cp vids on youtube",
	"literally just do NOTHING", "play guitar", "bike ride", "...?"]
print("hello world")
start_game = input("type anything stupid\n\n###")
print("\n\ncool")
advice = input("you want some advice?")
if advice in agreement_words:
	print("damn thats crazy gl tho")
	print(random.choice(advice_list))
else:
	print("whateva")

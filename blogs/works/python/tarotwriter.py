card = 10
file = open("tarotslate.txt", "w")
while card <= 79:
	file.write("\"picss/tarot/"+str(card)+".png\", ")
	#print("convert "+str(card)+".jpg "+str(card)+".png")
	card += 1
file.close()

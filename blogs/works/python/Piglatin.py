#Now does translate and will CHECK FOR ALPHA ONLY NO VOWELS IN POSITION 1

banned = ['a','e','i','o','u']
word_list = []
print("Piglatin Translator:")
english_word = input("Please enter a word:")
if english_word.isalpha() and english_word[0] not in banned:
	print(english_word[1:] + english_word[0] + "ay")
else:
	print("ERROR!")
	


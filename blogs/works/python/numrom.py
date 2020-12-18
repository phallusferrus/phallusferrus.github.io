

numeral_list = []
wrkdgt = 0

raw_digit = input('Please enter a digit:\n                     ')

wrkdgt = int(raw_digit)

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
	elif wrkdgt > 10:
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





print(numeral_list)
rng = len(numeral_list)
krn = 0
numeral_final = ''
while krn < rng :
	numeral_final = (numeral_final + numeral_list[krn])
	krn += 1	

print(raw_digit + ' as a roman numeral is: ' + numeral_final)

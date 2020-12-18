
numwrk = []
good_input = ['I', 'V', 'X', 'L', 'C', 'D', 'M']
digit_counter = 0
wrk_counter = 0
dgtwrk = 0
rd_counter = 0


def get_input():
	global digit_counter
	raw_num = input('Enter a roman numeral: ')
	num = raw_num.upper()
	num_length = len(num)
	while digit_counter < num_length:
		dc = num[digit_counter]
		print(dc)
		numwrk.append(dc)
		if dc not in good_input:
			print('WRONG INPUT NOT RECOGNIZED AS NUMERAL \nDID NOT MATCH good_input')
			get_input()
		digit_counter += 1
	if num_length > 1:
		reader()
	else:
		print("one digit")
		pass

def reader():
	global rd_counter
	global dgtwrk
	if rd_counter > (len(numwrk) - 1):
		print("DONZO BRO")
		return
	focus = numwrk[rd_counter]
	compare = numwrk[rd_counter + 1]
	noom = focus
	if focus == 'C' and compare == 'M':
		subbit(noom)
	elif focus == 'C' and compare == 'D':
		subbit(noom)
	elif focus == 'X' and compare == 'C':
		subbit(noom)
	elif focus == 'X' and compare == 'L':
		subbit(noom)
	elif focus == 'I' and compare == 'X':
		subbit(noom)
	elif focus == 'I' and compare == 'V':
		subbit(noom)
	else:
		 addit(noom)
	rd_counter += 1
	if rd_counter >= (len(numwrk) - 1):
		addit(numwrk[rd_counter])
		print('Reader Maxed OUT!')
		print('YER DIGIT IS: ' + str(dgtwrk))
		return
	else:
		reader()
	
def subbit(noom):
	global dgtwrk
	if noom == 'C':
		dgtwrk -= 100
	elif noom == 'X':
		dgtwrk -= 10
	elif noom == 'I':
		dgtwrk -= 1
	else:
		print('ERROR subbit() got a non CXI input')

def addit(noom):
	global dgtwrk
	if noom == 'M':
		dgtwrk += 1000
	elif noom == 'D':
		dgtwrk += 500
	elif noom == 'C':
		dgtwrk += 100
	elif noom == 'L':
		dgtwrk += 50
	elif noom == 'X':
		dgtwrk += 10
	elif noom == 'V':
		dgtwrk += 5
	elif noom == 'I':
		dgtwrk += 1
	else:
		print('ERROR addit() got a bad input')


print(numwrk)
print(len(numwrk))

get_input()
print('Your Digit Is: ' + str(dgtwrk))

while wrk_counter < len(numwrk):
	print(numwrk[wrk_counter])
	wrk_counter += 1

print('FIN')



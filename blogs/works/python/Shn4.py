#Goal is to make a UI where I can plug in any show and it should work.

#This now is missing like a disc change function...
#Redundant input but it does work
#Add 3 (or more!) disc support!
td2 = 0
td3 = 0
td4 = 0
td5 = 0
print("Welcome to SHN to Flac converter\n\nPlease make sure not to spell anything wrong :)\n\n")
enter = input("Press enter to begin!")
prefix_input = input("Please enter the prefix(filename),\nFormat: \'gdYR-MT-DYd\' ending with the letter \"d\"\n")
prefix = ("ffmpeg -i " + prefix_input)
d_n_input = input("Please enter the number of discs (or sets):\n")
d_n = int(d_n_input)
d_v = 1
t_v = 1
show_name = (prefix_input[:10] + "-")
mids = (".shn " + str(show_name))
td1 = input("How many tracks on disc 1?\n")
if d_n > 1:
	td2 = input("How many tracks on disc 2?\n")
if d_n > 2:
	td3 = input("How many tracks on disc 3?\n")
if d_n > 3:
	td4 = input("How many tracks on disc 4?\n")
if d_n > 4:
	td5 = input("How many tracks on disc 5?\n")
nt_v = 1
file = open("slate4.txt", "w")

def ntvtrack():
	global t_v
	global nt_v
	global d_v
	if nt_v < 10:
		tracks()
	else:
		trackx()
#Adds leading zero
def tracks():
	global t_v
	global nt_v
	file.write("\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
	t_v += 1
	nt_v += 1
#No leading zero
def trackx():
	global t_v
	global nt_v
	if t_v < 10:
		file.write("\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + str(nt_v) +".flac"+"\n")
	else:
		file.write("\n" + prefix + str(d_v) + "t" + str(t_v) + mids + str(nt_v) +".flac\n")
	t_v +=1
	nt_v +=1

while d_v <= d_n:
	while t_v <= int(td1):
		if d_v == 1:
			ntvtrack()
	d_v = 2
	t_v = 1
	while t_v <= int(td2):
		if d_v == 2:
			ntvtrack()
	d_v = 3
	t_v = 1
	while t_v <= int(td3):
		if d_v == 3:
			ntvtrack()
	d_v = 4
	t_v = 1
	while t_v <= int(td4):
		if d_v == 4:
			ntvtrack()
	d_v = 5
	t_v = 1
	while t_v <= int(td5):
		if d_v == 5:
			ntvtrack()
	d_v = 6969
	t_v = 6060
	print("DONZO")

file.close()

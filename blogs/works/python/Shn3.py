#Goal is to make a UI where I can plug in any show and it should work.

#This now is missing like a disc change function...
#Redundant input but it does work
#Add 3 (or more!) disc support!


print("Welcome to SHN to Flac converter\n\nPlease make sure not to spell anything wrong :)\n\n")
enter = input("Press enter to begin!")
prefix_input = input("Please enter the prefix(filename),\nFormat: \'gdYR-MT-DYd\' ending with the letter \"d\"\n")
prefix = ("ffmpeg -i " + prefix_input)
d_v = 1
t_v = 1
show_name = input("please enter the show date: gdYR-MT-\n")
mids = (".shn " + str(show_name))
td1 = input("How many tracks on disc 1?\n")
td2 = input("Home many tracks on disc 2?\n")
nt_v = 1
file = open("slate3.txt", "w")

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
	file.write("\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + str(nt_v) +".flac"+"\n")
	t_v +=1
	nt_v +=1
	

while t_v <= int(td1):
	ntvtrack()
d_v = 2
t_v = 1
while t_v <= int(td2):
	ntvtrack()

file.close()

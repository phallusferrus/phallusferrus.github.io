#Worked 


prefix = "ffmpeg -i gd691108d"
d_v = 1
t_v = 1
mids = ".shn gd69-11-08-"
nt_v = 1
file = open("slate2.txt", "w")

def tracks():
	global t_v
	global nt_v
	file.write("\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
	t_v += 1
	nt_v += 1

def trackx():
	global t_v
	global nt_v
	file.write("\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + str(nt_v) +".flac"+"\n")
	t_v +=1
	nt_v +=1
	

while t_v < 8:
	tracks()
d_v = 2
t_v = 1
file.write("\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write("\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
while t_v < 9:
	trackx()
file.close()

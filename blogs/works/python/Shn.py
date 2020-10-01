#Goal is literally just to ammend the name and re-print to save me from it


#Extremely redundant code. But ya this hardcoded shit works... for one show.

prefix = "ffmpeg -i gd68-06-19d"
d_v = 1
t_v = 1
mids = ".shn gd68-06-19-"
nt_v = 1
file = open("slate.txt", "w")

file.write("\n\n" + prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
d_v += 1
t_v = 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
t_v += 1
nt_v += 1
file.write(prefix + str(d_v) + "t0" + str(t_v) + mids + "0" + str(nt_v)+".flac"+"\n")
file.close()


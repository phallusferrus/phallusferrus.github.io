import time
import vlc
import random


song_choice = "/home/sequoia/Desktop/Kalen-Music/nrps1969-08-07.sbd.unk.sirmick.flac16/nrps1969-08-07t13.flac"
executed = 0

hour = input("Hour: ")
miduet = input("Min: ")

while executed == 0:
	dt = list(time.localtime())
	time.sleep(1)
	if str(dt[3]) == hour and str(dt[4]) == miduet:
		print("it's time!!!")
		tone = vlc.MediaPlayer(song_choice)
		tone.play()
		executed += 1
		break
	else:
		dt = list(time.localtime())
		print("Time is: " + str(dt[3]) + ":" + str(dt[4]) + ":" + str(dt[5]))
		time.sleep(1)
		print("Waiting for " + hour + ":" + miduet + ":00")
	
endd = input("Type anything to end alarm!")
tone.stop()

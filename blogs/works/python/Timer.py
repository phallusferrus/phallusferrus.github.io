#Python
#Just fuckin around
#Control ^ C will auto-end :)


import time
import vlc
import random

###this is more of a timer where the time in seconds
### (defined in the while line) counts down and then plays a short jgb song

#A list of songs to choose from
song_list = ["/home/sequoia/Downloads/jgb1977-11-27.early.sony.minkin.miller.clugston.flac16/jgb77-11-27 early t05 Don't Let Go.flac",
	"/home/sequoia/Downloads/gd70-05-02sbd48k/03 I Know You Rider.flac"]
dt = list(time.localtime())

#Selects a song at random from the list above
song_choice = random.choice(song_list)
#defines the beggining of the countdown here
place_holder = 0
#defines an instance of vlc media player named "p"
p = vlc.MediaPlayer(song_choice)
print(dt)
#this loop will wait (5) seconds and then move on to the print statement
while place_holder < 5:
	#prints time in float number value
	print("Time is:" + str(dt[3]) + ":" + str(dt[4]) + ":" +str(dt[5]) + " AKA  " + str(time.time()))
	#Updates time and waits one second (to let cpu chill)
	dt = list(time.localtime())
	time.sleep(1)
	#Increases the number on our placeholder
	place_holder += 1
#this is when you have left the loop	
print("hello world! You have left the loop!")
#Begins instance of Media Player
p.play()
#Waits (plays) for 10 seconds
time.sleep(10)
#Stops!
p.stop()


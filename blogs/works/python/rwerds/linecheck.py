





contents = []


rawline = open("linebuffer.txt", "r")

for line in rawline:
    contents.append(line)
rawline.close()
if (contents[0] == 'U' && contents[1] == 'n' && contents[2] == 'k'):
    next_step = open("lined.txt", 'w')
    next_step.write(". rbrain.txt")
    next_step.close()
else:
    message_final = open("sinai.txt", 'a')




    message_final.close()





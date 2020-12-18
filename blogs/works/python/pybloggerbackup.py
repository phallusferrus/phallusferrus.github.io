



#OLD

import os

path = "/home/sequoia/Desktop/glasshand/glasshand.github.io/blogs"

allfiles = os.listdir(path)
nhtml = allfiles
number_of_blogs = len(allfiles)
blogs = []
blogintro = ["<!DOCTYPE html>\n",
	"<head>\n",
	"<style>\n",
	"body {\n",
	"    background-color: white;\n",
	"    color: black;\n",
	"    text-align: center;\n",
	"}\n",
	"p {\n",
	"    font: \"Times New Roman\";\n",
	"    }\n",
	"</style>\n",
	"<title>+"nhtml+"</title>\n",
	"</head>\n",
	"<body>\n",
	"<h1>"+nhtml+"</h1>\n"]
introz=["<!DOCTYPE html>\n",
	"<head>\n",
	"<style>\n",
	"body {\n",
	"    background-color: white;\n",
	"    color: black;\n",
	"    text-align: center;\n",
	"}\n",
	"p {\n",
	"    font: \"Times New Roman\";\n",
	"    }\n",
	"</style>\n",
	"<title>MY DIARY!</title>\n",
	"</head>\n",
	"<body>\n",
	"<h1>DEAR DIARY...</h1>\n"]
outroz=["</body>\n",
	"</html>\n"]

def scriptor(iny):
	print(iny)
	file.write("<a href=\"blogs/"+iny+"\">"+str(iny)+"</a>\n")
	
file = open("writings.html", "w")

introz_read = 0

while introz_read < len(introz):
	file.write(introz[introz_read])
	introz_read += 1

while number_of_blogs > 0:
	imp = str(number_of_blogs)
	iny = (imp+".html")
	scriptor(iny)
	number_of_blogs -= 1
	pass

outroz_read = 0

while outroz_read < len(outroz):
	file.write(outroz[outroz_read])
	outroz_read += 1

file.close()

#Next I need to generate n.html

def generate(nhtml):
	file = open("/home/sequoia/Desktop/glasshand/glasshand.github.io/blogs/"+nhtml)
	blogintro_read = 0
	while blogintro_read < len(blogintro):
		file.write(blogintro[blogintro_read])
		blogintro_read += 1
	file.write("<p>"+blah+"</p")
	file.write(outroz)
	file.close
	pass

while n_html > 0:
	nhtml = (str(n_html)+".html"
	generate(nhtml)
	nhtml -= 1
	pass

print("FIN")

### NEEDS TO save .txt as a variable named "blah" or change to whatevs



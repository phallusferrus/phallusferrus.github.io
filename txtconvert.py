
introz = ["<!DOCTYPE html>\n",
	"<head>\n",
	"<style>\n",
	"body {\n",
		"text-align: center;\n",
                "background-image: url('../picss/fractalbg.jpg');\nfont-weight:bold;\n}\n",
        
        "img {\n",
        	"margin-left: auto;\n",
        	"margin-right: auto;\n",
        	"width: 50%;\n",
        	"display: block;\n",
	
        "}",

        "#navbar {\n",
        	"color: #0066ff;",
        	"width: 80%;\n",
        	"background-color: white;\n",
        	"text-align: center;\n",
                "font-weight: normal;\n}\n\n",
        'h1 {\n',
                'width: 80%;\n',
                'text-align: center;\n',
                'border: 2px solid black;\n',
                '\n}\n\n',
                "</style>\n",
                "<title>BLOG</title>",
                "</head>",
                "<body>",
                "       <table align=center  id=\"navbar\">\n",
"	<tr>\n",
"	<td><a href='../index.html'>HOME</a></td>\n",
"	<td>*</td>\n",
"		<td><a href='../blog.html'>BLOG</a></td><td>*</td>\n",
"		<td><a href='../dead.html'>GRATEFULDEAD</a></td><td>*</td>\n",
"		<td><a href='../tarot.html'>TAROT</a></td><td>*</td>\n",
"		<td><a href='../game.html'>GAME</a></td><td>*</td>\n",
"		<td><a href='../contact.html'>CONTACT</a></td>\n",
"	</tr>\n",
"</table><br><br><br><br>"]

outroz = "\n</body>\n</html>"

introz_read = 0

print('Enter full name and path to .txt file INCLUDING blogs/raw/ AND .txt')
txtname = input('txt file path/name:\n                   ')

print('Enter name for the .html file. Does NOT need path or.html \nNO CAPS! NO SPECIAL CHARACTERS!')
htmlnamer = input('name your html file:\n                    ')
htmlname = htmlnamer.lower()

contents = open(txtname, 'r')

with open('blogs/'+str(htmlname)+'.html', 'w') as e:
	while introz_read < len(introz):
		e.write(introz[introz_read])
		introz_read += 1
	for lines in contents.readlines():
    		e.write(lines + '<br><br><br>\n')
	e.write(outroz)


contents.close()




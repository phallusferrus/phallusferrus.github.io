
affirm = ['y', 'yes', 'ok', 'ys', 'sure', 'fine', 'good', 'hella', 'aye', 'yea', 'yeah']

negate = ['n', 'no', 'nope', 'nah', 'naw', 'na', 'never', 'nay', 'bad']

topics = ['thoughts', 'gaym', 'dev', 'dead']



starter = 0
blogs = []
varies = []
obs = []


midz = [
	'<table align=center  id="navbar">\n',
	'<tr>\n',
	'<td><a href=\'index.html\'>HOME</a></td>\n',
	'<td>*</td>\n',
	'<td><a href=\'blog.html\'>BLOG</a></td><td>*</td>\n',
	'<td><a href=\'dead.html\'>GRATEFULDEAD</a></td><td>*</td>\n',
	'<td><a href=\'tarot.html\'>TAROT</a></td><td>*</td>\n',
	'<td><a href=\'game.html\'>GAME</a></td><td>*</td>\n',
	'<td><a href=\'contact.html\'>CONTACT</a></td>\n',
	'</tr>\n',
        '</table>\n<br><br><br>\n']




introz = ['<!DOCTYPE html>\n',
    '<html>\n'
    '<head>\n',
    '<style>\n\n',
    'body {\n',
    'background-image: url(\'picss/fractalbg.jpg\');\n}\n\n\n',
    'h1 { \n    text-decoration: underline;\n}\n\n\n',
    '#navbar {\n',
    'color: #0066ff;\n',
    'width: 80%;\n',
    'background-color: white;\n',
    'text-align: center;\n\n}\n\n',
    '#blogtable {\n',
    'width: 80%;\n',
    'text-align: center;\n',
    'border: 2px solid black;\n',
    '\n}\n\n',
    '</style>\n\n\n',
    '<title>BLOG</title>\n',
    '<script language=\"JavaScript\">\n\n'
    ]



def pyvars():
    if starter == 1:
        return
    print("What is the location of this file?\nEnter the file location!\nEX: blogs/test.html")
    loc = input(":  ")
    print(topics[:])
    toppy = '69'
    kron = 420
    pubg = 710
    while toppy.lower() not in topics:
        toppie = input("Topic:\n:    ")
        if type(toppie) is str:
            toppy = toppie
        else:
            print('ahem, STR')
            return
    while toppy.lower() in topics and starter == 0:
        while 99999 >= int(kron) or int(kron) >= 1000000:
            kroner = input("6 digit time:\n      ")
            krone = int(kroner)
            if type(krone) is int:
                kron = krone
            else:
                print('INT only please')
                return
        while 999999999 >= int(pubg) or int(pubg) >= 10000000000:
            puber = input("10 digit time:\n     ")
            if type(krone) is int:
                pubg = puber

            else:
                print('INT only please')
                return
            pywriter(loc, toppy, kron, pubg)
            break


def pywriter(loc, toppy, kron, pubg):
    global titles
    gud = input("Enter a short blurb - BEWARE quotation marks must be preceded by \:\n     ")
    global starter
    naym = input("Title you blog. Do NOT use spaces or special characters.\nPlease name your blog:\n  ")
    name = naym.upper()
    obies = open('blogs/objlist.txt', 'r+')
    obiescontent = obies.read()
    obies.seek(0,0)
    obies.write(name+' \n'+obiescontent)
    listloc = open('blogs/localist.txt', 'r+')
    loccontent = listloc.read()
    listloc.seek(0,0)
    listloc.write(loc +' \n'+loccontent)
    pyvar = open('blogs/blogvars.txt', 'r+')
    pyvarcontent = pyvar.read()
    pyvar.seek(0,0)
    pyvar.write('var '+ name + ' = {')
    pyvar.write('   title: \''+name+'\',\n')
    pyvar.write('   locat: \''+loc+'\',\n')
    pyvar.write('   topic: \''+toppy+'\',\n')
    pyvar.write('   chron: '+str(kron)+',\n')
    pyvar.write('   pub:    '+str(pubg)+',\n')
    pyvar.write('   blurb: \'' + gud + '...\',\n')
    pyvar.write('};\n\n'+pyvarcontent)
    obies.close()
    pyvar.close()
    listloc.close()
    starter = 1
    return







def start():
    global starter
    if starter == 1:
        return
    print('-pyblog 200501-')
    enter = input('Press ENTER TO BEGIN')
    entry = 'xanadu'
    while entry.lower() not in affirm and entry.lower() not in negate:
        entry = input('Do you have a new post?')

    if entry.lower() in affirm:
        pyvars()
        return

    else: 
        starter = 1
        return

    



while starter == 0:
    start()

print('started up')
bloghtml = open('blog.html', 'w')
bloglist = open('blogs/localist.txt', 'r')
objs = open('blogs/objlist.txt', 'r')

introz_read = 0
varcounter = 0
midz_read = 0

while introz_read < len(introz):
	bloghtml.write(introz[introz_read])
	introz_read += 1

varyy = open('blogs/blogvars.txt', 'r')

for line in varyy:
    bloghtml.write(line)


        
for line in bloglist:
    n = 1
    blogs.append(line.strip())
    n += 1

for line in objs:
    obs.append(line.strip())
    

bloghtml.write('\n\n'+bloglist.readline())

bloghtml.write('var indicies = [')
varlen = len(blogs)

while varlen > varcounter:
    bloghtml.write("\"" + blogs[varcounter] + "\"" + ',') 
    varcounter += 1

bloghtml.write('];\n')

obiesread = 0
bloghtml.write('var obies = [')
while obiesread < len(obs):
    bloghtml.write(obs[obiesread]+',')
    obiesread += 1

bloghtml.write('];\n')

bloghtml.write('var titleindex = [')

titleread = 0

while titleread < len(blogs):
    bloghtml.write('\'title'+str(titleread)+'\',')
    titleread += 1

bloghtml.write('];\n\n')

bloghtml.write('function display() {\n')
bloghtml.write('\n')
bloghtml.write('	var i;\n')
bloghtml.write('\n')
bloghtml.write('	for (i = 0; i < indicies.length; i++) {\n')
bloghtml.write('\n')
bloghtml.write('		var intex = indicies[i];\n')
bloghtml.write('                var title = titleindex[i];\n')
bloghtml.write('                var objecto = obies[i];\n')
bloghtml.write('		document.getElementById(intex).innerHTML = objecto.blurb;\n')
bloghtml.write('                document.getElementById(\'date\'+title).innerHTML = objecto.chron.toString();\n')
bloghtml.write('                document.getElementById(title).innerHTML = objecto.title};\n}\n')



bloghtml.write('\n</script>\n')
bloghtml.write('</head>\n\n')
bloghtml.write('<body onload=\'display();\'>\n')


while midz_read < len(midz):
    bloghtml.write(midz[midz_read])
    midz_read += 1

blogsread = 0
bloghtml.write('<table align=center id=\'blogtable\'>\n')
bloghtml.write('<tr><td><h1>TITLE</h1></td><td><h1>-</h1></td><td><h1>DATE</h1></td><td><h1>-</h1></td><td><h1>BLURB</h1></td></tr>\n')
while blogsread < len(blogs):
    currentblog = blogs[blogsread]
    bloghtml.write('<tr>\n<td><a id=\'title'+str(blogsread)+'\'href=\''+currentblog.lower() +'\'>'+ currentblog.upper() +'</a></td><td>-</td> <td><p id=\'datetitle'+str(blogsread)+'\'>XXXXXX XXXXXX</p></td><td>-</td><td><p id=\''+ currentblog.lower() +'\'>XXXXXX XXXXXX</p></td>\n</tr>')
    blogsread += 1

bloghtml.write('</table>\n</body>\n</html>')

bloglist.close()
bloghtml.close()
varyy.close()
objs.close()


import datetime

file = open("timeone.txt", "r")
timeonels=file.read().splitlines()
timeone=timeonels[0]
file.close()
#print(timeone)
file = open("timetwo.txt", "r")
timetwols=file.read().splitlines()
timetwo=timetwols[0]
file.close()
#print(timetwo)
file = open("timethree.txt", "r")
timethreels=file.read().splitlines()
timethree=timethreels[0]
file.close()
#print(timethree)
#print("okay?")


#date=str(datetime.date.today())
#time=str(datetime.datetime.now().time())
#datetime=(date+"-"+time)
file=open("snoop.html", "w")
file.write("<!DOCTYPE html>\n")
file.write("<html>\n")
file.write("<head>\n")
file.write("<style>\n")
file.write("table {\n")
file.write("  border: 3px solid black;\n")
file.write("  padding: 15px;\n")
file.write("  text-align: center;\n")
file.write("  width: 80%;\n")
file.write("  margin-left: auto;\n")
file.write("  margin-right: auto;\n")
file.write("  vertical-align: top;\n")
file.write("}\n")
file.write("th {\n")
file.write("  height: 50px;\n")
file.write("}\n")
file.write("td {\n")
file.write("  height: 250px;\n")
file.write("}\n")
file.write("img {\n")
file.write("  max-height: 250px;\n")
file.write("  height: 70%;\n")
file.write("  width: auto;\n")
file.write("}\n")
file.write("</style>\n")
file.write("<title>snoop</title>\n")
file.write("</head>\n")
file.write("<body>\n")
file.write("<h1>\n")
file.write("This outta be up top!\n")
file.write("</h1>\n")
file.write("<table>\n")
file.write("  <tr>\n")
file.write("    <th>Time</th>\n")
file.write("    <th>@SparkTwain</th>\n")
file.write("    <th>@asmrisacommunity</th>\n")
file.write("    <th>@fromstarbucks</th>\n")
file.write("  </tr>\n")
file.write("  <tr>\n")
file.write("    <td>"+timeone+"</td>\n")
file.write("    <td><img src=\"picss/snaps/st1\"></td>\n")
file.write("    <td><img src=\"picss/snaps/as1\"></td>\n")
file.write("    <td><img src=\"picss/snaps/fs1\"></td>\n")
file.write("  </tr>\n")
file.write("  <tr>\n")
file.write("    <td>"+timetwo+"</td>\n")
file.write("    <td><img src=\"picss/snaps/st2\"></td>\n")
file.write("    <td><img src=\"picss/snaps/as2\"></td>\n")
file.write("    <td><img src=\"picss/snaps/fs2\"></td>\n")
file.write("  </tr>\n")
file.write("  <tr>\n")
file.write("    <td>"+timethree+"</td>\n")
file.write("    <td><img src=\"picss/snaps/st3\"></td>\n")
file.write("    <td><img src=\"picss/snaps/as3\"></td>\n")
file.write("    <td><img src=\"picss/snaps/fs3\"></td>\n")
file.write("  </tr>\n")
file.write("<table>\n")
file.write("</body>\n")
file.write("</html>\n")

file.close()


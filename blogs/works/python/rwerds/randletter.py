
import random


books = ['gen', 'exo', 'lev', 'num', 'deu', 'josh', 'jdgs', 'ruth', '1sm', '2sm', '1ki', '2ki', '1chr', '2chr', 'ezra', 'neh', 'est', 'job', 'psa', 'prv', 'eccl', 'ssol', 'isa', 'jer', 'lam', 'eze', 'dan' ,'hos', 'joel', 'amos', 'obad', 'jonah', 'mic', 'nahum', 'hab', 'zep', 'hag', 'zec', 'mal' ,'tob', 'jdt', 'wis', 'sir', 'bar', 'azar', 'sus', 'bel', '1mac', '2mac', '1esd', 'man', 'esd', 'mat', 'mark', 'luke', 'john', 'acts', 'rom', '1cor', '2cor', 'gal', 'eph', 'phi', 'col', '1th', '2th', '1tim', '2tim', 'titus', 'phmn', 'heb', 'jas', '1pet', '2pet', '1jn', '2jn', '3jn', 'jude', 'rev']

letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

random_letter = '$'
#
#random_word = ['s', 'e', 'x']
#
#book = 'idk'
#
#bibliar = random.randint(1,9)
#biblia = str(bibliar)
#contents = []
#
#print(biblia+"\n")
#
#
digies = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ':', ';']
#this_book = ("biblia"+biblia+".txt")
#
#open_book = open(this_book, 'r')
#
#
#for line in open_book:
#    contents.append(line)
#
#open_book.close()
#
#list_len = len(contents)
#
#print(str(list_len)+"\n")
#
#r_pos = random.randint(0, list_len)
#print("RANDOM POS:  "+ str(r_pos))
#
#this_line = contents[r_pos]
final = ""
#good_input = ""
#
#print(this_line)
#
#for char in this_line:
#    if char not in digies:
#        print(char)
#        final.append(char)
#        good_input = good_input + char
#
#
#for werd in final:
#    print(werd)
#
#random_letter = random.choice(letters)
#print(random_letter)
#i = 0
#
#while good_input[i].lower() != random_letter:
#    if i >= (len(good_input) + 1):
#        r_pos = random.randint(0, list_len)
#        this_line = contents[r_pos]
#        good_input = ""
#        for char in this_line:
#            if char not in digies:
#                final.append(char)
#                good_input = good_input + char
#
#        i = 0
#
#    else :
#        i += 1
#
#
#
#
#
#print(good_input[i])
#print(i)

tries = 0
oroll = 100
current_word = "XXX"
ender = 0


def end():
    global ender
    ender += 1
    ende = str(ender)
    print("THIS IS THE END  "+ende+"\n")


def new_word() :
    global oroll
    reroll = random.randint(0,100)
    if oroll == 100:
        oroll -= 10
        get_first_word()
    elif reroll > oroll:
        print("nonewword")
        print(final)
        end()
        print("IDKFUCKNDN")
    else:
        oroll -= 10
        get_word()

def get_first_word():
    global final
    global current_word
    current_word = ""
    bibliar = random.randint(1,9)
    biblia = str(bibliar)
    contents = []
    this_book = ("biblia"+biblia+".txt")
    open_book = open(this_book, 'r')
    for line in open_book:
        contents.append(line)
    open_book.close()
    list_len = len(contents)
    r_pos = random.randint(0, list_len)
    this_line = contents[r_pos]
    good_input = ""
    for char in this_line:
        if char not in digies:
            good_input = good_input + char
    #print(good_input)
    random_letter = random.choice(letters)
    i = 0
    while i < len(good_input):
        if (good_input[i] == random_letter) and (good_input[i-1] == ' ') and (i+1 <= len(good_input)):
            final = final + good_input[i]
            current_word = current_word + good_input[i]
            while (i+1) < len(good_input) and good_input[i+1] != ' ':
                final = final + good_input[i+1]
                current_word = current_word + good_input[i]
                if (i+1) < len(good_input):
                    i += 1
                else:
                    get_first_word()
            final = final + ' '
            i = i + len(good_input)
            new_word()
        else:
            i += 1

    get_first_word()

def get_word():
    global tries
    global final
    global current_word
    bibliar = random.randint(1,9)
    biblia = str(bibliar)
    contents = []
    this_book = ("biblia"+biblia+".txt")
    open_book = open(this_book, 'r')
    for line in open_book:
        contents.append(line)
    open_book.close()
    list_len = len(contents)
    r_pos = random.randint(0, list_len)
    this_line = contents[r_pos]
    good_input = ""
    for char in this_line:
        if char not in digies:
            good_input = good_input + char
    #print(good_input)
    random_letter = random.choice(letters)
    i = 0
    ci = 0
    dawerd = ''
    increment = 0
    wl = len(current_word)
    while i < len(good_input) and (i + len(current_word) + 1) < len(good_input):
        ci = 0
        while ci < len(current_word):
            if (good_input[i] == current_word[0] and good_input[i-1] == ' ' and ci == 0):
                dawerd = dawerd + good_input[i]
                ci += 1
            elif good_input[i + (len(current_word) - (len(current_word) - ci))] == current_word[len(current_word) - (len(current_word) - ci)]:
                dawerd = dawerd + good_input[i + (len(current_word) - (len(current_word) - ci))]
                ci += 1
            else:
                i += 1
                ci = ci + len(current_word)


        if (((i+len(current_word) + 1) < len(good_input)) and dawerd == current_word and good_input[i+len(current_word) + 1] == ' '):
            increment = 2
            while (i + len(current_word) + increment) < len(good_input) and good_input[i + len(current_word) + increment] != ' ':
                final = final + good_input[i + len(current_word) + increment]
                increment += 1
            final = final + ' '
            new_word()

        else:
            tries += 1
            i += 1


    if increment > 0:
        new_word()

    elif tries > 50:
        print("HIGHTRY\n")
        get_first_word()


    else:
        print(final)
        get_word()






new_word()

printf("FIN")

#book = random.choice(books)
#chapp = random.randint(0,50)
#
#chap = str(chapp)
#
#
#shell_script = open("rwerdone.txt", 'w')
#shell_script.write("echo $(kjv "+book+chap+"/ "+random_letter+") > linebuffer.txt\n")
#
#
#
#
#shell_script.close()
#
#
#print(good_input)
#print("0\n")

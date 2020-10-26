import random
import sys



current_line = ''

bibliar = random.randint(1,9)
biblia = str(bibliar)
contents = []
this_book = ('biblia'+biblia+'.txt')
open_book = open(this_book, 'r')
for line in open_book:
    contents.append(line)
open_book.close()
list_len = len(contents)
r_pos = random.randint(0, list_len)
this_line = contents[r_pos]
print(biblia)
print(str(r_pos))
print('\n')
print(this_line)


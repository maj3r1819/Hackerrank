n = int(input())
mylist = []
s = ''
for i in range(n):
    s = input()
    text = s.split()
    if text[0] == 'insert':
        mylist.insert(int(text[1]), int(text[2]))

    if text[0] == 'remove':
        mylist.remove(int(text[1]))

    if text[0] == 'append':
        mylist.append(int(text[1]))

    if text[0] == 'sort':
        mylist.sort()

    if text[0] == 'reverse':
        mylist.reverse()

    if text[0] == 'print':
        print(mylist)

    if text[0] == 'pop':
        mylist.pop()







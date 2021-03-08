def gradingStudents(grades):
    mylist = []
    for i in grades:
        if i >= 38 and i % 5 != 0:
            rem = i % 5
            if rem >= 3:
                i = 5 - rem + i
                mylist.append(i)

            elif rem < 3:
                mylist.append(i)
        else:
            mylist.append(i)

    return mylist

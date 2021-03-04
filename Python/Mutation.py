def mutate_string(string, position, character):
    mylist = list(string)
    mylist[position] = character
    string = "".join(mylist)
    return string


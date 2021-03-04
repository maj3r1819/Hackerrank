def swap_case(s):
    finalstr = ''
    for let in s:
        if let == let.upper():
            finalstr += let.lower()
        elif let == let.lower():
            finalstr += let.upper()

    return finalstr



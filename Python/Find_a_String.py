def count_substring(string, sub_string):
    len1 = len(string)
    len2 = len(sub_string)
    count = 0
    for i in range(0, len1):

        if sub_string == string[i:len2 + i]:
            count += 1
    return count


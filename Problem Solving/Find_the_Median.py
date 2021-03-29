def findMedian(arr):
    myarr = sorted(arr)
    leng = int(len(myarr))
    if leng % 2 == 1:
        return myarr[leng // 2]

    else:
        return myarr[leng // 2] + myarr[(leng + 1) // 2]
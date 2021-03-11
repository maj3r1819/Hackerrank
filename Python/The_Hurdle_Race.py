def hurdleRace(k, height):
    height_sorted = list(sorted(height, reverse = True))
    if height_sorted[0]>k:
        return (height_sorted[0]-k)
    else:
        return 0
n ,ranked = int(input()),list(map(int, input().split()))
m,player =int(input()), list(map(int, input().split()))
ranked1 = sorted(set(ranked), reverse= True)
for i in range(m):
    ranked1.append(player[i])
    sorted_new = sorted(set(ranked1), reverse= True)
    for j in range(len(sorted_new)):
        if player[i]==sorted_new[j]:
            print(j+1)

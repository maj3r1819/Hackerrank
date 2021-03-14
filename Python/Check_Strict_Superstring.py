# Enter your code here. Read input from STDIN. Print output to STDOUT
A = set(map(int, input().split()))
boollist= []
for i in range(int(input())):
    B = set(map(int, input().split()))
    X = A.issuperset(B)
    X= str(X)
    boollist.append(X)
count = 9
for i in range(len(boollist)):
    if boollist[i] == 'True':
        count+=1

if(len(set(boollist))==1):
  print(True)
else:
  print(False)

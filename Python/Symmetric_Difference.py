_ , A = input(), set(map(int, input().split()))
_ , B= input(), set(map(int, input().split()))
C = A.difference(B)
D = B.difference(A)
E = C.union(D)
F= sorted(E)
for i in F:
    print(i)

for _ in range(int(input())):
    m, A =int(input()), set(map(int, input().split()))
    n, B = int(input()), set(map(int, input().split()))
    print(A.issubset(B))

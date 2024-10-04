def fib_series(n):
    l=[1,1]
    s=l[-1]+l[-2]
    es=0
    while s<n:
        l.append(s)
        if s%2==0:
            es+=s
        s=l[-1]+l[-2]
    return es

for _ in range(int(input())):
    n=int(input())
    print(fib_series(n))
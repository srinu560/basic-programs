

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    s=0
    for i in range(2,n):
        for j in range(2,int(i**0.5)+1):
            if i%j==0:
                break
        else:
            s+=i
    print(s)
            
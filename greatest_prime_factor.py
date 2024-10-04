#!/bin/python3

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    for i in range(n,int(n**0.5)+1,-1):
        for j in range(2,int(i**0.5)+1):
            if i%j==0:
                break
        else:
            if n%i==0:
                print(i)
                break
            

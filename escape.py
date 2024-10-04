a=['1','2','3','-','4','5','6','-','4','5','pikachu','3','4','6','-','0']
inp='pikachu'
left=0
right=0
i=0
while i<len(a):
    if a[i]=='-':
        right=0
    else:
        if a[i]==inp:
            left=right
            right=0
            break
        right+=1
    i+=1
i+=1
while a[i]!='-':
    right+=1
    i+=1
print(i,left,right,len(a))

for i in range(int(input())):
    lst=[0,0,0]
    a=list(input())
    for i in range(len(a)):
        if a[i]=='A':
            lst[0]+=1
        elif a[i]=='B':
            lst[1]+=1
        else:
            lst[2]+=1
    if lst[1]==lst[0]+lst[2]:
        print('YES')
    else:
        print('NO')
    

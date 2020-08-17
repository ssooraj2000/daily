i=230000000
n=0

while i>0:
    flag=0
    for j in range(1, 21):
        if(i%j==0):
            continue
        else:
            flag=1
            break
    if(flag==0):
        n=i
        break
    i=i+1



print(n)
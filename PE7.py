
a=0
i=2
while a<10001:
    print(a)
    count=0
    for j in range(1, i+1, 1):
        if (i%j==0):
            count=count+1
    if count==2:
        a=a+1
    i=i+1

print(i-1)    

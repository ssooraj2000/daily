n=0
for a in range(999, 99, -1):
    for b in range(a, 99, -1):
        num=a*b
        if(num>n):
            s=str(num)
            if s == s[::-1]:
                n=num

print(n)
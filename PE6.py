
sum_of_squares=0
total_sum=0
for i in range(1, 101):
    sum_of_squares+=i*i
    total_sum+=i

ans=sum_of_squares-total_sum*total_sum
if(ans<0):
    print(-1*ans)
else:
    print(ans)
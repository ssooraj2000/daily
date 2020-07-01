//Given N candies and K people. In the first turn, the first person gets 1 candy, the second gets 2 candies, and so on till K people. In the next turn, the first person gets K+1 candies, the second person gets k+2 candies and so on. If the number of candies is less than the required number of candies at every turn, then the person receives the remaining number of candies.
#include <bits/stdc++.h> 
using namespace std;

void solve(int n, int k){
    int i=0;
    int count=0, mul=0;
    int* arr=(int*)malloc(sizeof(int)*k);
    memset(arr, 0, k);
    while(1){
        if(count==k){
            mul++;
            count=0;
        }
        if(n>=(i+1)){
            arr[i-(mul)*k]+=(i+1);
            n=n-(i+1);
        }
        else
        {
            arr[i-(mul)*k]+=n;
            break;
        }
        i++;
        count++;
    }
    for(i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main() 
{   
    int n, k;
    cin>>n;
    cin>>k;
    solve(n, k);
} 


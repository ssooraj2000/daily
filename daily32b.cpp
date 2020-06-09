#include <bits/stdc++.h> 
//This problem was asked by Amazon.

// There exists a staircase with N steps, and you can climb up either 1 or 2 steps at a time. Given N, write a function that returns the number of unique ways you can climb the staircase. The order of the steps matters.


#include <time.h>
using namespace std;

int solve(int n){
    int count=0;
    int temp=n;
    
    int i;
    for(i=0;i<=n/2;i++){
        int* temp_arr=(int*)malloc(sizeof(int)*(n-i));
        int j;
        for(j=0;j<(n-i)-i;j++){
            temp_arr[j]=1;
        }
        for(;j<(n-i);j++){
            temp_arr[j]=2;
        }
        do{
            count++;
        }while(next_permutation(temp_arr, temp_arr+n-i));

        free(temp_arr);
    }
    return count;
}
int main() 
{  
    int n;
    cin>>n;
    cout<<solve(n)<<"\n";
    return 0;
} 

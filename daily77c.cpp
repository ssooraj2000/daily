#include<bits/stdc++.h>
using namespace std;

int solve(int* arr, int n){
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int sum_so_far=0;
    for(int i=0;i<n;i++){
        if(sum_so_far==total_sum-sum_so_far-arr[i]){
            return i+1;
        }
        sum_so_far+=arr[i];
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* arr=(int*)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr, n)<<"\n";
    }
}
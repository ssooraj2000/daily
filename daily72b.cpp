#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>arr){
    int i, sum=0;
    for(i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int n=arr.size()+1;
    int ori_sum=n*(n+1)/2;
    cout<<ori_sum-sum<<"\n";
}
int main(){
    int t, n;
    cin>>t;
    while(t-->0){
        cin>>n;
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        solve(arr);
    }
    return 0;
}
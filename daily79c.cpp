#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int m){
    sort(arr.begin(), arr.end());
    int diff=INT_MAX;
    for(int i=0;i+(m-1)<=arr.size()-1;i++){
        if(arr[i+(m-1)]-arr[i]<diff){
            diff=arr[i+(m-1)]-arr[i];
        }
    }
    return diff;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>m;
        cout<<solve(arr, m)<<endl;
    }
    return 0;
}
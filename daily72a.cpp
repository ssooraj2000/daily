#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>arr){
    int i, max_so_far=INT_MIN, max_ending_here=0;
    for(i=0;i<arr.size();i++){
        max_ending_here+=arr[i];
        if(max_ending_here>max_so_far){
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0){
            max_ending_here=0;
        }
    }
    cout<<max_so_far<<"\n";
}
int main(){
    int t, n;
    cin>>t;
    while(t-->0){
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr);
    }
    return 0;
}
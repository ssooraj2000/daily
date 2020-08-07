#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr){
    map<int, int>hash;
    so
    int ans=-1;
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size();j++){
            hash[arr[i]]--;
            if(hash[arr[j]-arr[i]]>=1){
                if(ans==-1){
                    ans=0;
                }
                ans++;
            }
            hash[arr[i]]++;
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t, n;
    cin>>t;
    while(t-->0){
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr1, vector<int> arr2){
    map<int, int> hash;
    for(int i=0;i<arr1.size();i++){
        hash[arr1[i]]++;
    }
    for(int i=0;i<arr2.size();i++){
        for(int j=0;j<hash[arr2[i]];j++){
            cout<<arr2[i]<<" ";
        }
        hash.erase(arr2[i]);
    }
    for(auto i=hash.begin();i!=hash.end();i++){
        for(int j=0;j<i->second;j++)
        cout<<i->first<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> arr1(n), arr2(m);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        solve(arr1, arr2);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k, set<int> s){
    int min=INT_MAX;
    int ans=-1;
    for(auto i=s.begin();i!=s.end();i++){
        int data=*i;
        if((k-data)%data==0 ){
            if((k-data)/data <min){
                min=(k-data)/data;
                ans=data;
            }
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        set<int> s;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            if(data<=k){
                s.insert(data);
            }
        }
        cout<<solve(n, k, s)<<"\n";
    }
    return 0;
}
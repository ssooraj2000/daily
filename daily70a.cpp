#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> q){
    int ans=0;
    for(int i=0;i<q.size();i++){
        if((q[i]-1-i)<=2 && (q[i]-1-i)>0){
            ans+=q[i]-1-i;
        }
        else if((q[i]-1-i)>2){
            cout<<"Too chaotic"<<"\n";
            return;
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t, n, i;
    cin>>t;
    while(t-- >0){
        cin>>n;
        vector<int> v(n);
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        solve(v);
    }
}
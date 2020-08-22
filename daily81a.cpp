#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> s, vector<int> f){
    set<pair<pair<int, int>, int>>sets;
    vector<int> ans;
    int n=s.size();
    for(int i=0;i<n;i++){
        sets.insert({{f[i], s[i]},i+1});
    }
    int flag=0;
    int f_time;
    for(auto i: sets){
        if(flag==0){
            flag=1;
            f_time=i.first.first;
            ans.push_back(i.second);
            continue;
        }
        if(i.first.second>=f_time){
            f_time=i.first.first;
            ans.push_back(i.second);
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> s(n);
        vector<int> f(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        vector<int> ans=solve(s, f);
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> start, vector<int> end){
    set<pair<int, int>>s;
    for(int i=0;i<start.size();i++){
        s.insert({end[i], start[i]});
    }
    int ans=1;
    int prev_end_time=(s.begin())->first;
    int first=0;
    for(auto i:s){
        if(!first){
            first=1;
            continue;
        }
        // cout<<i.second<<" "<<i.first<<endl;
        if(i.second>=prev_end_time){
            ans++;
            prev_end_time=i.first;
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
        vector<int> start(n);
        vector<int> end(n);
        for(int i=0;i<n;i++){
            cin>>start[i];
        }
        for(int i=0;i<n;i++){
            cin>>end[i];
        }
        cout<<solve(start, end)<<endl;
    }
}
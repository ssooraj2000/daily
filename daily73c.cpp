#include<bits/stdc++.h>
using namespace std;

map<int, int> solve(vector<int> g[], int n, map<int, int> hash, int temp){
    for(int i=0;i<g[temp].size();i++){
        if(hash[g[temp][i]]==0){
            hash[g[temp][i]]++;
            hash=solve(g, n, hash, g[temp][i]);
        }
        else{
            return hash;
        }
    }
    return hash;
}
bool dfs(vector<int> g[], int n){
    bool* visited=(bool*)malloc(sizeof(bool)*n);
    memset(visited, false, n);
    int i;
    for(i=0;i<n;i++){
        if(!visited[i]){
            visited[i]=true;
            map<int, int> hash;
            hash=solve(g, n, hash, i);
            if(hash[i]>=1){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int t, n, e, u, v;
    cin>>t;
    while(t--){
        cin>>n>>e;
        vector<int>g[n];
        for(int i=0;i<e;i++){
            cin>>u>>v;
            g[u].push_back(v);
        }
        cout<<dfs(g, n)<<"\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> g[], int n){
    vector<int> arr;
    queue<int> q;
    bool* visited=(bool*)malloc(sizeof(bool)*n);
    memset(visited, false, n);
    q.push(0);
    visited[0]=true;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        arr.push_back(temp);
        for(int i=0;i<g[temp].size();i++){
            if(!visited[g[temp][i]]){
                q.push(g[temp][i]);
                visited[g[temp][i]]=true;
            }
            
        }
    }
    return arr;
}
int main(){
    int t, n, e, u, v;
    cin>>t;
    while(t-->0){
        cin>>n>>e;
        vector<int>g[n];
        for(int i=0;i<e;i++){
            cin>>u>>v;
            g[u].push_back(v);
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<g[i].size();j++){
        //         cout<<g[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        vector<int> v=bfs(g, n);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

stack<int> solve(vector<int> g[], int n, stack<int> s, bool* visited, int temp){
    for(int i=0;i<g[temp].size();i++){
        if(!(visited[g[temp][i]])){
            visited[g[temp][i]]=true;
            s=solve(g, n, s, visited, g[temp][i]);
            s.push(g[temp][i]);
        }
        
    }
    return s;
}
vector<int> topoSort(vector<int> g[], int n){
    vector<int> arr;
    stack<int> s;
    bool* visited=(bool*)malloc(sizeof(bool)*n);
    memset(visited, false, n);
    int i;

    for(i=0;i<n;i++){
        if(!visited[i]){
            visited[i]=true;
            s=solve(g, n, s, visited, i);
            s.push(i);
        }
    }

    while(!s.empty()){
        arr.push_back(s.top());
        s.pop();
    }
    return arr;
}
int main(){
    int t, n, e, u, v;
    cin>>t;
    while(t--){
        cin>>n>>e;
        vector<int> g[n];
        for(int i=0;i<e;i++){
            cin>>u>>v;
            g[u].push_back(v);
        }
        
        vector<int> v=topoSort(g, n);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
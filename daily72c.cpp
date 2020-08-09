#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> g[], int n, vector<int> arr, bool* visited){
    if(arr.size()==n){
        return arr;
    }
    else if(arr.empty()){
        arr.push_back(0);
        visited[0]=true;
        return solve(g, n, arr, visited);
    }
    else{
        int v=arr[arr.size()-1];
        for(int i=0;i<g[v].size();i++){
            if(!visited[g[v][i]]){
                arr.push_back(g[v][i]);
                visited[g[v][i]]=true;
                arr=solve(g, n, arr, visited);
            }
        }
    }
    return arr;
}
vector<int> dfs(vector<int> g[], int n){
    vector<int>arr;
    bool* visited=(bool*)malloc(sizeof(bool)*n);
    return solve(g, n, arr, visited);
}
int main(){
    int t, n, e, u, v;
    cin>>t;
    while(t-->0){
        cin>>n>>e;
        vector<int> g[n];
        for(int i=0;i<e;i++){
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(int i=0;i<n;i++){
            cout<<i<<": ";
            for(int j=0;j<g[i].size();j++){
                cout<<g[i][j]<<" ";
            }
            cout<<"\n";
        }
        vector<int>arr=dfs(g, n);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
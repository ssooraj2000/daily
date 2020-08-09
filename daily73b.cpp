#include<bits/stdc++.h>
using namespace std;

bool isCyclic(vector<int> g[], int n){
    stack<int> s;
    bool* visited=(bool*)malloc(sizeof(bool)*n);
    memset(visited, false, n);

    s.push(0);
    visited[0]=true;
    int* prev=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        prev[i]=-2;
    }
    prev[0]=-1;
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        for(int i=0;i<g[temp].size();i++){
            if(!visited[g[temp][i]]){
                s.push(g[temp][i]);
                if(prev[g[temp][i]]==-2){
                    prev[g[temp][i]]=temp;
                }
                visited[g[temp][i]]=true;
            }
            else if(g[temp][i]!=prev[temp]){
                return true;
            }
        }
        if(s.empty()){
            for(int i=0;i<n;i++){
                if(!visited[i]){
                    s.push(i);
                }
            }
        }
    }
    return false;
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
            g[v].push_back(u);
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<g[i].size();j++){
        //         cout<<g[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        cout<<isCyclic(g, n)<<"\n";
    }
}

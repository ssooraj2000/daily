#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> g[], bool** visited, int n, int m, int i, int j){
    if(i-1>=0 && j-1>=0 && g[i-1][j-1] && !visited[i-1][j-1]){
        visited[i-1][j-1]=true;
        dfs(g, visited, n, m, i-1, j-1);
    }
    if(i-1>=0 && g[i-1][j] && !visited[i-1][j]){
        visited[i-1][j]=true;
        dfs(g, visited, n, m, i-1, j);
    }
    if(i-1>=0 && j+1<m && g[i-1][j+1] && !visited[i-1][j+1]){
        visited[i-1][j+1]=true;
        dfs(g, visited, n, m, i-1, j+1);
    }
    if(j+1<m && g[i][j+1] && !visited[i][j+1]){
        visited[i][j+1]=true;
        dfs(g, visited, n, m, i, j+1);

    }
    if(i+1<n && j+1<m && g[i+1][j+1] && !visited[i+1][j+1]){
        visited[i+1][j+1]=true;
        dfs(g, visited, n, m, i+1, j+1);
    }
    if(i+1<n && g[i+1][j] && !visited[i+1][j]){
        visited[i+1][j]=true;
        dfs(g, visited, n, m, i+1, j);

    }
    if(i+1<n && j-1>=0 && g[i+1][j-1] && !visited[i+1][j-1]){
        visited[i+1][j-1]=true;
        dfs(g, visited, n, m, i+1, j-1);
    }
    if(j-1>=0 && g[i][j-1] && !visited[i][j-1]){
        visited[i][j-1]=true;
        dfs(g, visited, n, m, i, j-1);
    }
}
int solve(vector<int> g[], int n, int m){
    int count_islands=0;
    bool** visited=(bool**)malloc(sizeof(bool*)*n);
    for(int i=0;i<n;i++){
        visited[i]=(bool*)malloc(sizeof(bool)*m);
        memset(visited[i], false, m);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j] && g[i][j]){
                visited[i][j]=true;
                dfs(g, visited,n, m, i, j);
                cout<<i<<" "<<j<<"\n";
                // cout<<visited[i][j+1]<<i<<j<<"\n";
                count_islands++;
            }
        }
    }
    return count_islands;
}
int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int> g[n];
        for(int i=0;i<n;i++){
            vector<int>temp(m);
            g[i]=temp;
            for(int j=0;j<m;j++){
                cin>>g[i][j];
            }
        }

        cout<<solve(g, n, m)<<"\n";
    }
}

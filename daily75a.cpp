#include<bits/stdc++.h>
using namespace std;

int findTotalWeight(vector<vector<int>> g, int* parent, int cur){
    if(parent[cur]==-1){
        return 0;
    }
    return g[parent[cur]][cur]+findTotalWeight(g, parent, parent[cur]);
}
bool notAncestor(int* parent, int ancestor, int cur){
    int count=0;
    while(parent[ancestor]!=-1){
        count++;
        // cout<<parent[ancestor]<<ancestor<<cur<<"\n";
        if(count==10){
            break;
        }
        if(ancestor==cur){
            return false;
        }
        ancestor=parent[ancestor];
    }
    return true;
}
vector<int> bfs(vector<vector<int>> g, int src, int v, int dest, vector<int> arr){
    queue<int> q;
    int min_weight_so_far=g[src][dest], sum;
    int* parent=(int*)malloc(sizeof(int)*v);
    memset(parent, 0, v);
    parent[src]=-1;

    for(int i=0;i<g[src].size();i++){
        if(i!=dest && i!=src && g[src][i]<g[src][dest] && g[src][i]>0){
            q.push(i);
            parent[i]=src;
            // cout<<i<<"\n";
        }
    }
    
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        if(temp==dest){
            sum=findTotalWeight(g, parent, temp);
            // cout<<sum<<"\n";
            if(sum<min_weight_so_far){
                min_weight_so_far=sum;
            }
            continue;
        }
        
        for(int i=0;i<g[temp].size();i++){
            if(g[temp][i]>0 && i!=src && notAncestor(parent, temp, i) && findTotalWeight(g, parent, temp)+g[temp][i]<min_weight_so_far){
                // cout<<temp<<" "<<i<<"\n";
                q.push(i);
                parent[i]=temp;
            }
        }
    }

    arr[dest]=min_weight_so_far;
    return arr;
}
vector<int> dijkstra(vector<vector<int>> g, int src, int v){
    vector<int> arr(v);
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(i==j){
                g[i][j]=0;
            }
        }
    }
    for(int i=0;i<g[src].size();i++){
        arr[i]=g[src][i];
        if(i!=src && g[src][i]>0){
            // cout<<i<<"hi\n";
            arr=bfs(g, src, v, i, arr);
        }
    }
    return arr;
}
int main(){
    int t, v, src;
    cin>>t;
    while(t--){
        cin>>v;
        vector<vector<int>> g(v);
        for(int i=0;i<v;i++){
            vector<int> temp(v);
            g[i]=temp;
        }
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cin>>g[i][j];
            }
        }
        cin>>src;
        vector<int> res=dijkstra(g, src, v);
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
//A Bipartite Graph is a graph whose vertices can be divided into two independent sets, U and V such that every edge (u, v) either connects a vertex from U to V or a vertex from V to U. In other words, for every edge (u, v), either u belongs to U and v to V, or u belongs to V and v to U. We can also say that there is no edge that connects vertices of same set.
#include <bits/stdc++.h> 
using namespace std;

bool solve1(int** arr, int n, int* color, int vertex){
    int i;
    for(i=0;i<n;i++){
        if(i!=vertex && arr[vertex][i]==1){
            if(color[vertex]==color[i]){
                return false;
            }
            else{
                if(color[i]==-1){
                    color[i]=!color[vertex];
                    return solve1(arr, n, color, i);
                }
            }   
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    
    int** arr=(int**)malloc(sizeof(int*)*n);

    int i;

    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*n);
    }

    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int* color=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        color[i]=-1;
    }
    color[0]=0;
    while(1)
    {
        if(solve1(arr, n, color, 0)){
            for(i=0;i<n;i++){
                if(color[i]==-1){
                    color[i]=0;
                    solve1(arr, n, color, i);
                }
                else
                {
                    cout<<"yes\n";
                    exit(0);
                }
            }
        }
        else{
            cout<<"no\n";
            break;
        }
    }
    
    
    return 0;
}
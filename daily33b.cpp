// Find a common element in all rows of a row wise sorted matrix.
#include <bits/stdc++.h> 
using namespace std;

void solve(int** arr, int n, int m){
    int i, j;
    map<int, int> hash;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(hash[arr[i][j]]==i){
                hash[arr[i][j]]++;
            }
        }
    }
    for(auto k=hash.begin();k!=hash.end();k++){
        if(k->second==n){
            cout<<k->first<<" ";
        }
    }
    cout<<"\n";
}
int main() 
{  
    int n;
    cin>>n;
    int m;
    cin>>m;
    int** arr=(int**)malloc(sizeof(int*)*n);
    int i;
    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*m);
    }
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    solve(arr, n, m);
    return 0;
} 

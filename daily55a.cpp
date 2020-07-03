//Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
#include <bits/stdc++.h> 
using namespace std;

void solve(int** arr, int n, int m){
    int i, j;
    map<int, int>hash;
    int min=INT_MAX;
    for(i=0;i<n;i++){
        min=INT_MAX;
        for(j=0;j<m;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
            
        }
        hash[min]++;
    }
    int max;
    for(i=0;i<m;i++){
        max=INT_MIN;
        for(j=0;j<n;j++){
            if(arr[j][i]>max){
                max=arr[j][i];
            }
            
        }
        if(hash[max]==1){
            hash[max]++;
        }
    }
    for(auto k=hash.begin();k!=hash.end();k++){
        if(k->second==2){
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

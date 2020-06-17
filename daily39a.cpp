//Print all elements in sorted order from row and column wise sorted matrix.
#include <bits/stdc++.h> 
using namespace std;

void solve(int** arr, int n, int m){
    int i, j;
    int* temp=(int*)malloc(sizeof(int)*n*m);
    int c=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            temp[c++]=arr[i][j];
        }
    } 
    sort(temp, temp+n*m);
    for(i=0;i<n*m;i++){
        cout<<temp[i]<<" ";
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


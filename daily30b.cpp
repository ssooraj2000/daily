// Maximum XOR Value of a complete row or a complete column.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int** arr, int n, int m){
    int max_xor=0,xoor;
    int i,j;
    for(i=0;i<n;i++){
        xoor=0;
        for(j=0;j<m;j++){
            xoor=xoor^arr[i][j];
        }
        if(xoor>max_xor){
            max_xor=xoor;
        }
    }
    for(j=0;j<m;j++){
        xoor=0;
        for(i=0;i<n;i++){
            xoor=xoor^arr[i][j];
        }
        if(xoor>max_xor){
            max_xor=xoor;
        }
    }

    return max_xor;
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
   

    cout<<solve(arr,n,m)<<"\n";
} 

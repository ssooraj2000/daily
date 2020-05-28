//Write a program to add two matrices.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int** arr1, int** arr2,int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr1[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    int m;
    cout<<"m:";
    cin>>m;
    int** arr1=(int**)malloc(sizeof(int*)*n);
    int** arr2=(int**)malloc(sizeof(int*)*n);

    int i;
    for(i=0;i<n;i++){
        arr1[i]=(int*)malloc(sizeof(int)*m);
        arr2[i]=(int*)malloc(sizeof(int)*m);

    }
    int j;
    int input=1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           cin>>arr1[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    solve(arr1, arr2,n,m);
  return 0;
} 


//Write a program to find transpose of a square matrix mat[][] of size N*N. Transpose of a matrix is obtained by changing rows to columns and columns to rows.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int** arr,int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]>=0){
                temp=arr[i][j];
                arr[i][j]=-1*arr[j][i];
                arr[j][i]=-1*temp;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<abs(arr[i][j])<<" ";
        }
        cout<<"\n";
    }
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    
    int i;
    int** arr=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*n);
    }
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    solve(arr, n);
	return 0; 
} 


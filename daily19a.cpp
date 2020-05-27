// Given a matrix A[][] of size N X N. The task is to calculate the absolute difference between the sums of its diagonal.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int** arr,int n){
    int i, j, diag1=0, diag2=0;
    for(i=0,j=0;i<n;i++,j++){
        diag1+=arr[i][j];
    }
    for(i=0, j=n-1;i<n;i++,j--){
        diag2+=arr[i][j];
    }
    // cout<<diag1<<" "<<diag2<<"\n";
    return abs(diag1-diag2); 
}

int main() 
{ 
    int n;
    cout<<"n:";
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
    cout<<"Ans: "<<solve(arr,n)<<"\n";
  return 0;
} 


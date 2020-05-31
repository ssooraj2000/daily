// Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int** arr, int n, int m){
    int i=0,j=0,max_1=0;
    while(i<n && j<n){
        if(arr[i][j]==1){
            max_1=i;
            break;
        }
        else if(arr[i][j]==0 && i==n-1){
            j++;
            i=0;
        }
        else{
            i++;
            continue;
        }
    }
    return max_1;
}

int main() 
{ 
    cout<<"n:";
    int n;
    cin>>n;

    cout<<"m:";
    int m;
    cin>>m;
    
    int** arr=(int**)malloc(sizeof(int*)*n);
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=(int*)malloc(sizeof(int)*m);
    }
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Ans: "<<solve(arr, n, m)<<"\n";
  
  return 0;
}
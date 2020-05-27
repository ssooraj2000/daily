Given a 2-D array of order NxN, swap the values of the triangle above the diagonal with the values of the triangle below it like a mirror image swap. Print the 2-D array obtained in matrix layout. Let the elements of the 2-D array be denoted by A[ i ][ j ], where i, j vary from 0 to N-1.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int** arr,int n){
    int i=0,j=1,temp;
    while(i<n && j<n){
        temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
        if(j+1<n){
            j++;
        }
        else{
            i++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
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
    solve(arr,n);
  return 0;
} 


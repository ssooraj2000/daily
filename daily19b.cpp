#include <bits/stdc++.h> 
using namespace std; 

void solve(int** arr,int n){
    int i,j;
    int* coil1=(int*)malloc(sizeof(int)*((n*n)/2));
    int* coil2=(int*)malloc(sizeof(int)*((n*n)/2));

  
    for(i=0;i<n*n/2;i++){
        cout<<coil1[i]<<" ";
    }
    cout<<"\n"; 

}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;

    n=n*4;
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


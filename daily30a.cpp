//Maximum sum of hour glass in a matrix

#include <bits/stdc++.h> 
using namespace std; 

int solve(int** arr, int n, int m){
    int sum, i,j,max_sum=0;
    i=0,j=0;
    while(i+2<n && j+2<m){
        sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        if(sum>max_sum){
            max_sum=sum;
        }
        if(j<m-3){
            j++;
        }
        else{
            i++;
            j=0;
        }
    }
    return max_sum;
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

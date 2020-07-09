//full referred to gfg

//Given a matrix of N * M. Find the maximum path sum in matrix. The maximum path is sum of all elements from first row to last row where you are allowed to move only down or diagonally to left or right. You can start from any element in first row.
#include <bits/stdc++.h> 
using namespace std;
int solve(int** arr, int n, int m){
    int i=0,j=0;
    int sum=INT_MIN;
    for(i=1;i<n;i++){
        for(j=0;j<m;j++){
            if(j>0 && j<m-1){
                arr[i][j]+=max(arr[i-1][j-1], max(arr[i-1][j], arr[i-1][j+1]));
            }
            else if(j>0){
                arr[i][j]+=max(arr[i-1][j-1], arr[i-1][j]);
            }
            else if(j<m-1){
                arr[i][j]+=max(arr[i-1][j], arr[i-1][j+1]);
            }
        }
    }
    for(j=0;j<m;j++){
        if(arr[n-1][j]>sum){
            sum=arr[n-1][j];
        }
    }
    return sum;
}
int main(){
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
    cout<<solve(arr, n, m);
    return 0;
}
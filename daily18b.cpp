//Given a N x N binary matrix A where each row and column of the matrix is sorted in ascending order , Your task is to complete the function  countZero which returns the count of  number of 0s present in it.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int** arr,int n){
    int i=n-1,j=0;
    int count=0;
    while(i>=0 && j<=n-1){
        if(arr[i][j]==0){
            count+=i+1;
            j++;
        }       
        else{
            i--;
        } 
    }
    return count;
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
    cout<<"Ans:"<<solve(arr, n)<<"\n";
	return 0; 
} 


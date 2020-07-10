//Given a matrix of odd order i.e(5*5). Task is to check if the center element of the matrix is equal to the individual sum of all the half diagonals.
#include <bits/stdc++.h> 
using namespace std;
bool solve(int** arr, int n){
    int i, j, center_index=n/2;
    int half_diag1=0, half_diag2=0, half_diag3=0, half_diag4=0;

    for(i=0;i<center_index;i++){
        half_diag1+=arr[i][i];
        half_diag2+=arr[i][n-1-i];
        half_diag3+=arr[n-1-i][i];
        half_diag4+=arr[n-1-i][n-1-i];
    }
    return half_diag1==half_diag2 && half_diag2==half_diag3 && half_diag3==half_diag4 && half_diag4==arr[center_index][center_index];
        
}

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"invalid size\n";
        return 0;
    }
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

    if(solve(arr, n)){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
    
    return 0;
}
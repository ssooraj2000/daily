//Given a matrix and the task is to check matrix is involutory matrix or not.
// Involutory Matrix: A matrix is said to be involutory matrix if matrix multiply by itself return the identity matrix. Involutory matrix is the matrix that is its own inverse. The matrix A is said to be involutory matrix if A * A = I. Where I is the identity matrix.
#include <bits/stdc++.h> 
using namespace std;
int solve(int** arr, int n){
    int i, j, k;
    int** res=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        res[i]=(int*)malloc(sizeof(int)*n);
        memset(res[i], 0, n);
    }    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                res[i][j]+=(arr[i][k]*arr[k][j]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j && res[i][j]==1){
                continue;
            }
            else if(i!=j && res[i][j]==0){
                continue;
            }
            else{
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n;
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
    if(solve(arr, n)){
        cout<<"involutory matrix\n";
    }
    else{
        cout<<"non involutory matrix\n";
    }
    return 0;
}
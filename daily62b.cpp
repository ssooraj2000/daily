//Given a square matrix mat[][] and a number k. The task is to shift first k elements of each row in the right of the matrix.

#include <bits/stdc++.h> 
using namespace std;
void solve(int** arr, int n, int k){
    int i, j, p;
    if(k>n){
        cout<<"cannot shift\n";
    }
    else{
        for(i=0;i<n;i++){
            p=0;
            while(p<k){
                int temp=arr[i][0];
                for(j=0;j<n-1;j++){
                    arr[i][j]=arr[i][j+1];
                }
                arr[i][n-1]=temp;
                p++;
            }
        }
    }

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
    int k;
    cin>>k;
    solve(arr, n, k);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
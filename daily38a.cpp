//Rotate the matrix by k times

#include <bits/stdc++.h> 
using namespace std;

void solve(int** arr, int n, int m, int k){
    int i;
    int* temp1=(int*)malloc(sizeof(int)*n);
    while(k-- > 0){
        for(i=0;i<n;i++){
            temp1[i]=arr[i][0];
        }
        int j;
        for(i=m-1;i>=1;i--){

            if(i==m-1){
                for(j=0;j<n;j++){
                arr[j][0]=arr[j][i];
                }
            }
            else{
                for(j=0;j<n;j++){
                arr[j][i+1]=arr[j][i];
                }
            }
        }
        for(i=0;i<n;i++){
            arr[i][1]=temp1[i];
        }
    }

}

int main() 
{  
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k;
    cin>>k;
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
    solve(arr, n, m, k);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
} 


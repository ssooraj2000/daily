#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<bool>arr[], int row, int col, int n){
    int i=row+1, j=col+1;
    while(i<n && j<n){
        if(arr[i][j]){
            return false;
        }
        i++;j++;
    }
    i=row-1, j=col-1;
    while(i>=0 && j>=0){
        if(arr[i][j]){
            return false;
        }
        i--;j--;
    }
    i=row-1, j=col+1;
    while(i>=0 && j<n){
        if(arr[i][j]){
            return false;
        }
        i--;j++;
    }
    i=row+1, j=col-1;
    while(i<n && j>=0){
        if(arr[i][j]){
            return false;
        }
        i++;j--;
    }
    i=row, j=col+1;
    while(j<n){
        if(arr[i][j]){
            return false;
        }
        j++;
    }
    i=row, j=col-1;
    while(j>=0){
        if(arr[i][j]){
            return false;
        }
        j--;
    }
    i=row+1, j=col;
    while(i<n){
        if(arr[i][j]){
            return false;
        }
        i++;
    }
    i=row-1, j=col;
    while(i>=0){
        if(arr[i][j]){
            return false;
        }
        i--;
    }
    return true;
}
bool queens(vector<bool> arr[], int row, int n){
    if(row==n){
        return true;
    }
    for(int i=0;i<n;i++){
        arr[row][i]=true;
        if(isSafe(arr, row, i, n) && queens(arr, row+1, n)){
            return true;
        }
        else{
            arr[row][i]=false;
            continue;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<bool> arr[n];
    for(int i=0;i<n;i++){
        vector<bool> temp(n);
        arr[i]=temp;
    }
    if(queens(arr, 0, n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"not possible\n";
    }
    return 0;

}
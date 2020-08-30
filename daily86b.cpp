#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<int> arr[], int row, int col){
    for(int i=0;i<9;i++){
        if(i!=row){
            if(arr[i][col]==arr[row][col]){
                return false;
            }
        }
    }
    if(row<3 && col<3){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<3 && col<6){
        for(int i=0;i<3;i++){
            for(int j=3;j<6;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<3 && col<9){
        for(int i=0;i<3;i++){
            for(int j=6;j<9;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<6 && col<3){
        for(int i=3;i<6;i++){
            for(int j=0;j<3;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<9 && col<3){
        for(int i=6;i<9;i++){
            for(int j=0;j<3;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<6 && col<6){
        for(int i=3;i<6;i++){
            for(int j=3;j<6;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<6 && col<9){
        for(int i=3;i<6;i++){
            for(int j=6;j<9;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<9 && col<6){
        for(int i=6;i<9;i++){
            for(int j=3;j<6;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
                
            }
        }
    }
    else if(row<9 && col<9){
        for(int i=6;i<9;i++){
            for(int j=6;j<9;j++){
                if(!(i==row && j==col)){
                    if(arr[i][j]==arr[row][col]){
                    return false;
                    }
                }
            }
        }
    }
    return true;
}
bool solve(vector<int> arr[], vector<bool> vis[], int row, int col){
    if(row==9){
        return true;
    }
    if(arr[row][col]==0){
        for(int i=0;i<9;i++){
            if(!vis[row][i]){
                arr[row][col]=i+1;
                vis[row][i]=true;
                if(col==8){
                    if(isSafe(arr, row, col) && solve(arr, vis, row+1, 0)){
                        return true;
                    }
                    else{
                        arr[row][col]=0;
                        vis[row][i]=false;
                    }
                }
                else{
                    if(isSafe(arr, row, col) && solve(arr, vis, row, col+1)){
                        return true;
                    }
                    else{
                        arr[row][col]=0;
                        vis[row][i]=false;
                    }
                }
            }
        }
    }
    else{
        if(col==8){
            return solve(arr, vis, row+1, 0);
        }
        else{
            return solve(arr, vis, row, col+1);
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> arr[9];
        vector<bool> vis[9];

        for(int i=0;i<9;i++){
            vector<int> temp(9);
            arr[i]=temp;
        }
        for(int i=0;i<9;i++){
            vector<bool> temp(9);
            vis[i]=temp;
        }

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>arr[i][j];
                if(arr[i][j]!=0){
                    vis[i][arr[i][j]-1]=true;
                }
            }
        }
        solve(arr, vis, 0, 0);
        for(vector<int> i : arr){
            for(int j : i){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define MAX 5
vector<string> findPath(int arr[5][5], int n, int row, int col, vector<string> s, string str){
    if(row==n-1 && col==n-1){
        s.push_back(str);
        return s;
    }
    arr[row][col]=0;

    if(row+1<n && arr[row+1][col]==1){
        s=findPath(arr, n, row+1, col, s, str+'D');
    }
    if(row-1>=0 && arr[row-1][col]==1){
        s=findPath(arr, n, row-1, col, s, str+'U');
    }
    if(col+1<n && arr[row][col+1]==1){
        s=findPath(arr, n, row, col+1, s, str+'R');        
    }
    if(col-1>=0 && arr[row][col-1]==1){
        s=findPath(arr, n, row, col-1, s, str+'L');
    }
    arr[row][col]=1;
    return s;
}
void solve(int arr[MAX][MAX], int n){
    vector<string> s;
    string str;
    s=findPath(arr, n, 0, 0, s, str);
    if(s.size()==0){
        cout<<"-1";
    }
    else{
        for(string i: s){
            cout<<i<<" ";
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[MAX][MAX];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        solve(arr, n);
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> arr){
    int i, j, max=INT_MIN, sum;
    for(i=0;i+2<arr.size();i++){
        for(j=0;j+2<arr[i].size();j++){
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>max){
                max=sum;
            }
        }
    }
    return max;
}
int main(){
    vector<vector<int>> arr;
    int n, m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<solve(arr)<<"\n";
}
#include<bits/stdc++.h>

using namespace std;

int solve(int n, int x){
    int ans=0;
    vector<vector<int>>arr(n);
    for(int i=0;i<n;i++){
        arr[i]=vector<int>(n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=(i+1)*(j+1);
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){69a
        for(int j=0;j<n;j++){
            if(arr[i][j]==x){
                ans+=1;
            }
        }
    }
    return ans;
}
int main(){
    int n, x;
    cin>>n>>x;
    cout<<solve(n, x)<<"\n";
    return 0;
}
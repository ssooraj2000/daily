#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int dp[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=INT_MAX;
    }
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=min(dp[i-1] + 1, dp[i/2]+1+i%2);
    }
    return dp[n];
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}
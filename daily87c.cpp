#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int n=arr.size();
    vector<int> dp(n);
    for(int i=0;i<n;i++){
        int max_so_far=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && dp[j]>max_so_far){
                max_so_far=dp[j];
            }
        }
        dp[i]=max_so_far+1;
    }
    int max_subsequence_len=0;
    for(int i=0;i<n;i++){
        if(dp[i]>max_subsequence_len){
            max_subsequence_len=dp[i];
        }
    }
    return max_subsequence_len;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<solve(arr)<<endl;
    }
    return 0;
}
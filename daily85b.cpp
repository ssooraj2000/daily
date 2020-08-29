#include<bits/stdc++.h>
using namespace std;

struct val{
    int first;
    int second;
};

bool check(struct val a, struct val b){
    if(a.first<b.first){
        return true;
    }
    return false;
}
int solve(struct val arr[], int n){
    sort(arr, arr+n,check);
    vector<int> dp(n);
    dp[0]=1;
    for(int i=1;i<n;i++){
        int max=0;
        for(int j=0;j<i;j++){
            if(dp[j]>max && arr[j].second<arr[i].first){
                max=dp[j];
            }
        }

        dp[i]=max+1;
    }
    int max_length=0;
    for(int i=0;i<n;i++){
        if(dp[i]>max_length){
            max_length=dp[i];
        }
    }
    return max_length;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n, a, b;
        cin>>n;
        struct val arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].first>>arr[i].second;
        }
        cout<<solve(arr, n)<<endl;
        
    }
    return 0;
}
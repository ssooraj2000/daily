#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int* arr, int n){
    int max_so_far_in_right=INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=max_so_far_in_right){
            ans.push_back(arr[i]);
            max_so_far_in_right=arr[i];
        }
        
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* arr=(int*)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> ans=solve(arr, n);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
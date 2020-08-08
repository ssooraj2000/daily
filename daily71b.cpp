#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr){
    int i, j, k, ans=-1, mid;
    sort(arr.begin(), arr.end());

    for(i=arr.size()-1;i>=2;i--){
        j=0;
        k=i-1;
        while(j<k){
            if(arr[j]+arr[k]==arr[i]){
                if(ans==-1){
                    ans=0;
                }
                ans++;
                k--;
                j++;
            }
            else if(arr[j]+arr[k]>arr[i]){
                k--;
            }
            else{
                j++;
            }
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t, n;
    cin>>t;
    while(t-->0){
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr);
    }
    return 0;
}
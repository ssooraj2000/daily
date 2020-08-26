#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int ans=2;
    int start=-1, end=-1, diff;
    for(int i=0;i<arr.size();i++){
        if(i==0){
            start=i;
        }
        else if(i==1){
            end=i; 
            diff=arr[end]-arr[start];           
        }
        else{
            if(arr[i]-arr[end]==diff){
                end=i;
                if(end==arr.size()-1 && end-start+1>ans){
                    ans=end-start+1;
                }
            }
            else{
                if(end-start+1>ans){
                    // cout<<end<<" "<<start<<i<<"\n";
                    ans=end-start+1;
                }
                start=end;
                end=i;
                diff=arr[end]-arr[start];
            }
        }
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    int t, j=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Case #"<<j++<<": "<<solve(arr)<<"\n";
    }
}
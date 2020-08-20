#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> arr){
    sort(arr.begin(), arr.end());
    for(int i=arr.size()-1;i>=2;i--){
        int j=0, k=i-1;
        while(j<k){
            int pythagorasleft=pow(arr[j], 2) + pow(arr[k], 2);
            int pythagorasright=pow(arr[i], 2);
            if(pythagorasleft==pythagorasright){
                return true;
            }
            else if(pythagorasleft<pythagorasright){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return false;
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
        if(solve(arr)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
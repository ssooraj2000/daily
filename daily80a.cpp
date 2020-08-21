#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        if(i==0){
            if(arr[i]<arr[i+1]){
                continue;
            }
            else{
                swap(arr[i], arr[i+1]);
            }
        }
        else if(i==arr.size()-1){
            if(i%2==0){
                if(arr[i]<arr[i-1]){
                    continue;
                }
                else{
                    swap(arr[i], arr[i-1]);
                }
            }
        }
        else{
            if(i%2==0){
                if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
                    continue;
                }
                else{
                    swap(arr[i], arr[i+1]);
                }
            }
            else{
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    continue;
                }
                else{
                    swap(arr[i], arr[i+1]);
                }
            }
        }
        
    }
    
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
        solve(arr);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
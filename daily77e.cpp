#include<bits/stdc++.h>
using namespace std;

void solve(int* arr,int n, int k){
    int i;
    for(i=0;i+k-1<n;i=i+k){
        reverse(arr+i, arr+i+(k));
    }
    if(i<n){
        reverse(arr+i, arr+n);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int* arr=(int*)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n, k);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
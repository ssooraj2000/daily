#include<bits/stdc++.h>
using namespace std;

void solve(int* arr, int n){
    int max_index=n-1, min_index=0;
    int max_ele=arr[max_index]+1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=(arr[max_index]%max_ele)*max_ele;
            max_index--;
        }else{
            arr[i]+=(arr[min_index]%max_ele)*max_ele;
            min_index++;
        }
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]/max_ele<<" ";
        }
    cout<<endl;
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
        solve(arr, n);
        
    }
    return 0;
}
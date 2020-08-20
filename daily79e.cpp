#include<bits/stdc++.h>
using namespace std;

long solve(vector<long long> arr){
    long large_number_not_in_array=INT_MIN;
    long ans=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>large_number_not_in_array){
            large_number_not_in_array=arr[i];
        }
    }
    large_number_not_in_array+=1;
    long right_min=arr[arr.size()-1];

    for(int i=arr.size()-2;i>=1;i--){
        arr[i]+=right_min*large_number_not_in_array;
        if(arr[i]%large_number_not_in_array<right_min){
            right_min=arr[i]%large_number_not_in_array;
        }
    }
    long left_max=arr[0];
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]%large_number_not_in_array<=arr[i]/large_number_not_in_array && arr[i]%large_number_not_in_array>=left_max){
            ans=arr[i]%large_number_not_in_array;
            break;
        }
        if(arr[i]%large_number_not_in_array>left_max){
            left_max=arr[i]%large_number_not_in_array;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr)<<endl;
    }
    return 0;
}
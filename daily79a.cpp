#include<bits/stdc++.h>

using namespace std;

int solve(vector<long long> arr){
    int ans=0;
    long largest_not_in_arr=LONG_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest_not_in_arr){
            largest_not_in_arr=arr[i];
        }
    }
    largest_not_in_arr+=1;
    int right_max=arr[arr.size()-1];
    for(int i=arr.size()-2;i>=1;i--){
        arr[i]+=right_max*largest_not_in_arr;
        if((arr[i]%largest_not_in_arr)>right_max){
            right_max=arr[i]%largest_not_in_arr;
        }
    }
    int left_max=arr[0];
    for(int i=1;i<arr.size()-1;i++){
        int min_of_left_right_max_wall=left_max<(arr[i]/largest_not_in_arr)?left_max:(arr[i]/largest_not_in_arr);
        if(min_of_left_right_max_wall>(arr[i]%largest_not_in_arr)){
            ans+=(min_of_left_right_max_wall-(arr[i]%largest_not_in_arr));
        }
        if((arr[i]%largest_not_in_arr)>left_max){
            left_max=arr[i]%largest_not_in_arr;
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
}
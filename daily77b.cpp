#include<bits/stdc++.h>

using namespace std;

void merge(int* arr, int l, int h, long long* ans){
    int m=l+(h-l)/2;
    int i=l, j=m+1;
    int* newarr=(int*)malloc(sizeof(int)*(h-l+1));
    int index=0;
    while(i<=m && j<=h){
        if(arr[i]<=arr[j]){
            newarr[index++]=arr[i++];
        }
        else{
            (*ans)+=(m-i+1);
            newarr[index++]=arr[j++];
        }
    }
    while(i<=m){
        newarr[index++]=arr[i++];
    }
    while(j<=h){
        newarr[index++]=arr[j++];
    }
    for(int k=0;k<(h-l+1);k++){
        arr[l+k]=newarr[k];
    }
}
void merge_sort(int* arr, int l, int h, long long* ans){
    if(l<h){
        int m=l+(h-l)/2;
        merge_sort(arr, l, m, ans);
        merge_sort(arr, m+1, h, ans);
        merge(arr, l, h, ans);
    }
}
long long solve(int* arr, int n){
    long long ans=0;
    merge_sort(arr, 0, n-1, &ans);
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
        
        cout<<solve(arr, n)<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<"\n";
    }
    return 0;
}
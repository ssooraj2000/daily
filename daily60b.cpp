//Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.


//commented part my solution n^2 log n   space:o(1)
//also found n^2 with space: o(n)

//refered gfg n^2 space o(1) thought a bit of that idea but didnt think further
#include <bits/stdc++.h> 
using namespace std;
// int binary_search(int* arr,int data,int l, int h, int max){
//     if(l<=h){
//         int mid=l+(h-l)/2;
//         if(arr[mid]==data){
//             return data;
//         }
//         else if(data<arr[mid]){
//             return binary_search(arr, data, l, mid-1, max);
//         }
//         else{
//             return binary_search(arr, data, mid+1, h, max);
//         }
//     }
//     return max;
// }
// void solve(int* arr, int n){
//     sort(arr, arr+n);
//     int i,j,a,b,temp,data;
//     for(i=0;i<n-1;i++)
//     {  
//         for(j=i+1;j<n;j++){
//             temp=INT_MIN;
//             a=arr[i];
//             b=arr[j];
//             arr[i]=temp;
//             arr[j]=temp;
//             data=0-(a+b);
//             // cout<<a<<" "<<b<<" "<<data<<"\n";
//             if(binary_search(arr,data, 0, n-1, temp)==data){
//                 // cout<<"correct\n";
//                 cout<<a<<" "<<b<<" "<<data<<"\n";
//             }
//             arr[i]=a;
//             arr[j]=b;
//         }
//     }
// }
void solve(int* arr, int n){
    int i, l, r;
    sort(arr, arr+n);
    for(i=0;i<n-2;i++){
        l=i+1;
        r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==0){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<"\n";
                l++;r--;
            }
            else if(arr[i]+arr[l]+arr[r]<0){
                l++;

            }
            else{
                r--;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr, n);
    return 0;
}
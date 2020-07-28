//This problem was asked by Amazon.

// An sorted array of integers was rotated an unknown number of times.

// Given such an array, find the index of the element in the array in faster than linear time. If the element doesn't exist in the array, return null.
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int* arr, int n, int num, int l, int h){
    if(l<=h){
        int m=l+(h-l)/2;
        if(arr[m]==num){
            return m;
        }
        else if(num<arr[m]){
            return binarySearch(arr, n, num, l, m-1);
        }
        else{
            return binarySearch(arr, n, num, m+1, h);
        }
    }
    return -1;
}
int solve(int* arr, int n, int num, int l, int h){
    if(l<=h){
        int m=l+(h-l)/2;
        if(arr[m]==num){
            return m;
        }
        else if(m==0){
            return solve(arr, n, num, m+1, h);
        }
        else{
            if(arr[m]<arr[m-1]){
                if(arr[h]>num){
                    return binarySearch(arr, n, num, m+1, h);
                }
                return binarySearch(arr, n, num, l, m-1);
            }
            else{
                if(solve(arr, n, num, l, m-1)!=-1){
                    return solve(arr, n, num, l, m-1);
                }else{
                    return solve(arr, n, num, m+1, h);
                }
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    cout<<solve(arr, n, num, 0, n-1)<<"\n";
    return 0;
}
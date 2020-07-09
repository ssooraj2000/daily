//Given an unsorted array arr[0..n-1] of size n, find the minimum length subarray arr[s..e] such that sorting this subarray makes the whole array sorted.
#include <bits/stdc++.h> 
using namespace std;

void solve(int* arr, int n){
    int i, j;
    int last_proper_sort_index_from_beginning, last_proper_sort_index_from_end;
    int min_so_far=INT_MAX, max_so_far=INT_MIN;
    for(i=0;i<n;i++){
        if(arr[i]>=max_so_far){
            last_proper_sort_index_from_beginning=i;
            max_so_far=arr[i];
        }
        else{
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(arr[i]<=min_so_far){
            last_proper_sort_index_from_end=i;
            min_so_far=arr[i];
        }
        else{
            break;
        }
    }
    if(last_proper_sort_index_from_beginning==n-1 && last_proper_sort_index_from_end==0){
        cout<<"already sorted\n";
        return;
    }
    int max_in_unsorted_array=INT_MIN, min_in_unsorted_array=INT_MAX;
    for(i=last_proper_sort_index_from_beginning;i<=last_proper_sort_index_from_end;i++){
        if(arr[i]>max_in_unsorted_array){
            max_in_unsorted_array=arr[i];
        }
        if(arr[i]<min_in_unsorted_array){
            min_in_unsorted_array=arr[i];
        }
    }
    int ans1, ans2;
    for(i=0;i<n;i++){
        if(min_in_unsorted_array<arr[i]){
            ans1=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(max_in_unsorted_array>arr[i]){
            ans2=i;
            break;
        }
    }
    cout<<"the unsorted array which makes the given array sorted lies between "<<ans1<<" and "<<ans2<<"\n";
}
int main(){
    int n;
    cin>>n;
    int* arr1=(int*)malloc(sizeof(int)*n);


    int i;

    for(i=0;i<n;i++){
        cin>>arr1[i];
    }

    solve(arr1, n);
    return 0;
}
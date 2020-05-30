// Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int* arr, int n, int k){
    int i,j,p;
    i=0,j=0,p=j;

    while(j<n){
        if(j==n-1){
            reverse(arr+i,arr+j+1);
            break;
        }
        else if(j-i+1==k){
            reverse(arr+i,arr+j+1);
            i=j+1;
            j=i;
        }
        else if(j-i+1<k){
            j++;
        }
    }

}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    
    int *arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"k:";
    cin>>k;

    solve(arr,n,k);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
  return 0;
}
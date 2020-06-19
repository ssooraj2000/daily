//Given a sorted array of n distinct integers where each integer is in the range from 0 to m-1 and m > n.Find the smallest number that is missing from the array in O(log n) time.
#include <bits/stdc++.h> 
using namespace std;

int solve(int* arr, int n, int k, int l, int m, int h){
    if(arr[m]==m){
        if(m==n-1){
            return n;
        }
        if(arr[m+1]!=m+1){
            return m+1;
        }
        return solve(arr, n, k, m+1, (m+1+h)/2, h);
    }
    
    return solve(arr, n, k, l, (m-1+l)/2, m-1);

}

int main() 
{  
    int n;
    cin>>n;
    
    int* arr=(int*)malloc(sizeof(int)*n);
    int m;
    cin>>m;
    int i;
    for(i=0;i<n;i++){
            cin>>arr[i];
    }
    cout<<solve(arr, n, m, 0, (n-1)/2, n-1)<<"\n";
    
    return 0;
} 


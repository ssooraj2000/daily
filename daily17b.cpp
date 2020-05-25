//Given an array in such a way that the elements stored in array are in increasing order initially and then after reaching to a peak element , elements stored are in decreasing order. Find the highest element.
#include <bits/stdc++.h> 
using namespace std; 


int solve(int* arr, int l, int m, int h){
    if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
        return arr[m];
    }    
    else if(arr[m]>arr[m-1] && arr[m]<arr[m+1]){
        return solve(arr, m+1,(m+1+h)/2,h);
    }
    return  solve(arr, m+1,(m+1+h)/2,h);
    
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;

    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    cout<<"Enter Elements:\n";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Peak:"<<solve(arr, 0,(n-1)/2,n-1)<<"\n";
	return 0; 
} 


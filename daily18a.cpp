//Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int* arr,int n){
    int i,temp=1;
    int* prod=(int*)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++){
        prod[i]=1;
    }
    for(i=0;i<n;i++){
        prod[i]*=temp;
        temp*=arr[i];
    }
   
    temp=1;
    for(i=n-1;i>=0;i--){
        prod[i]*=temp;
        temp*=arr[i];
    }
     for(i=0;i<n;i++){
        cout<<prod[i]<<" ";
    }
    cout<<"\n";
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    
    int i;
    int* arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr, n);
	return 0; 
} 


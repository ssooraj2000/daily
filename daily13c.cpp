//Given an array with n distinct elements, convert the given array to a reduced form where all elements are in range from 0 to n-1. The order of elements is same, i.e., 0 is placed in place of smallest element, 1 is placed for second smallest element, … n-1 is placed for largest element.
#include <bits/stdc++.h> 
using namespace std; 


void solve(int* arr, int n){
	int i;
	unordered_map<int, int>hash;
	
	for(i=0;i<n;i++){
		hash[arr[i]]=i;
	}
	int* temp=(int*)malloc(sizeof(int)*n);
	memcpy(temp,arr, n*sizeof(int));
	
	sort(temp, temp+n);

	for(i=0;i<n;i++){
		arr[hash[temp[i]]]=i;
	}


	
}
int main() 
{ 
	int n;
	cin>>n;
	int* arr=(int*)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
solve(arr,n);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	return 0; 
} 


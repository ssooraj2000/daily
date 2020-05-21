//Given an array A[] of size N. Find the number of pairs (i, j) such that  A_i  XOR  A_j  = 0, and 1 <= i < j <= N.
#include <bits/stdc++.h> 
using namespace std; 

int fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}
int solve(int* arr, int n){
	unordered_map<int, int>hash;
	int i;
	for(i=0;i<n;i++){
		hash[arr[i]]++;
	}	
	int count=0;
	for(auto i: hash){
		if(i.second>1){
			count+=fact(i.second)/(2*fact(i.second-2));
		}
	}
	return count;
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
	cout<<"ANS: "<<solve(arr,n)<<"\n";

	return 0; 
} 


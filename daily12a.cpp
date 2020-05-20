//Given an array a[] of N positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
#include <bits/stdc++.h> 
using namespace std; 

bool solve(int* arr, int n){
	int i,sum=0;
	set<int> s;
	for(i=0;i<n;i++){
		sum+=arr[i];
		if(sum==0 || s.find(sum)!=s.end()){
			return true;
		}
		s.insert(sum);

	}
	return false;
}
int main() 
{ 
	int n;
	cin>>n;
	int i;
		int* arr=(int*)malloc(sizeof(int)*n); 

	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	if(solve(arr, n)){
		cout<<"found\n";
	}
	else{
		cout<<"not found\n";
	}

	return 0; 
} 


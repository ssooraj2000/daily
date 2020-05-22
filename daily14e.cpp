//You are given two arrays, A and B, of equal size N. The task is to find the minimum value of A[0] * B[0] + A[1] * B[1] +…+ A[N-1] * B[N-1], where shuffling of elements of arrays A and B is allowed.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr1, int* arr2, int n){
	int i,sum=0;
	sort(arr1,arr1+n);
	sort(arr2,arr2+n,greater<int>());
	for(i=0;i<n;i++){
		sum+=arr1[i]*arr2[i];
	}
	return sum;
}
int main() 
{ 
	int n;
	cin>>n;
	int i;
	int* arr1=(int*)malloc(sizeof(int)*n);
	int* arr2=(int*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		cin>>arr1[i];
}
	for(i=0;i<n;i++){
		cin>>arr2[i];
	}
	cout<<solve(arr1, arr2,n)<<"\n";

	return 0; 
} 


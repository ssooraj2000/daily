//Given an unsorted array arr of size N, rearrange the elements of array such that number at the odd index is greater than the number at the previous even index. The task is to complete the function formatArray() which will return formatted array.
#include <bits/stdc++.h> 
using namespace std; 

void formatArray(int* arr, int n){
	int i, temp;
	for(i=1;i<n;i=i+2){
		if(arr[i]<arr[i-1]){
			temp=arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=temp;
		}
	}
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
	solve(arr, n);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0; 
} 


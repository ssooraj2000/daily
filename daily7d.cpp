//You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once. 
#include <bits/stdc++.h> 
using namespace std; 
void binarysearch_nonrepeat(int* arr, int l,int h){
	int m=(l+h)/2;
	if(l<=h){
		if(arr[m]!=arr[m-1] && arr[m]!=arr[m+1]){
			cout<<"Ans: "<< arr[m]<<"\n";
			return;
		}
		else if(arr[m-1]==arr[m] && m%2==0){
			binarysearch_nonrepeat(arr, l,m-1);
		}
		else if(arr[m+1]==arr[m] && m%2==1){
			binarysearch_nonrepeat(arr, l,m-1);
		}
		else if(arr[m-1]==arr[m] && m%2==1){
			binarysearch_nonrepeat(arr, m+1,h);
		}
		else if(arr[m+1]==arr[m] && m%2==0){
			binarysearch_nonrepeat(arr, m+1,h);
		}
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
	binarysearch_nonrepeat(arr, 0, n-1);
	return 0; 
} 


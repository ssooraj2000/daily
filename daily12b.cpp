//Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n){
	set<int> s;
	int i,ans;
	for(i=0;i<n;i++){
		if(s.find(arr[i])!=s.end()){
			ans=arr[i];
			break;
		}
		s.insert(arr[i]);
	}
	return ans;
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
	cout<<"ANS: "<<solve(arr, n)<<"\n";

	return 0; 
} 


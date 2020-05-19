//Given a string S consisting of lowercase Latin Letters. Find the first non repeating character in S.
#include <bits/stdc++.h> 
using namespace std; 

char first_non_repeat(string arr, int n) 
{ 
	unordered_map<char,int> hash; 
	for (int i = 0; i < n; i++) 
		if(hash[arr[i]]==0){
			hash[arr[i]]=i; 
		}
		else{
			hash[arr[i]]=-1;
		}

	int min_index=n;
	for (auto j : hash) { 
		if (j.second<min_index && j.second>=0) { 
			min_index=j.second;
		} 
	} 

	return arr[min_index];
} 

 
int main() 
{ 
	string arr= "zxvczbtxyzvy"; 
	int n = arr.length(); 
	cout<<"ANS: "<<first_non_repeat(arr, n)<<"\n"; 
	return 0; 
} 


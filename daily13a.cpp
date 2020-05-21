//Given a string S consisting of lowercase latin letters, arrange all its letters in lexographical order using Counting Sort.
#include <bits/stdc++.h> 
using namespace std; 

string solve(string str){
	unordered_map<char, int> hash;
	int i,j;
	for(i=0;i<str.length();i++){
		hash[str[i]]=0;
	}
	for(i=0;i<str.length()-1;i++){
		for(j=i+1;j<str.length();j++){
			if(str[i]>=str[j]){
				hash[str[i]]++;
			}
			else{
				hash[str[j]]++;
			}
		}
	}
	for(auto k : hash){
		str[k.second]=k.first;
	}
	return str;	
}
int main() 
{ 
	string str;
	cin>>str;
	
	cout<<"ANS: "<<solve(str)<<"\n";

	return 0; 
} 


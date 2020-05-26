//Given an array of n words. Some words are repeated twice, we need count such words
#include <bits/stdc++.h> 
using namespace std; 


int solve(string* arr,int n){
    int i;
    unordered_map<string, int>hash;
    for(i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int count=0;
    for(auto j=hash.begin();j!=hash.end();j++){
        if(j->second==2){
            count++;
        }
    }
    return count;
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    
    int i;
    string* arr=(string*)malloc(sizeof(string)*n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<solve(arr,n)<<"\n";
	return 0; 
} 


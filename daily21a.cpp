// You will be given N number of strings. You have to find the lexicographically smallest string and the lexicographically largest string among these strings.#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

void solve(string* strarr, int n){
    int i;
    string small=strarr[0],large=strarr[0];
    for(i=1;i<n;i++){
        if(strarr[i].compare(small)<0){
            small=strarr[i];
        }
        if(strarr[i].compare(large)>0){
            large=strarr[i];
        }
    }
    cout<<small<<" "<<large<<"\n";
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    
    string *strarr=(string*)malloc(sizeof(string)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>strarr[i];
    }
    solve(strarr,n);
  return 0;
}
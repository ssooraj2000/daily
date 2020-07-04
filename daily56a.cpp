//Given an array of string words. Return all strings in words which is substring of another word in any order.

#include <bits/stdc++.h> 
using namespace std;

void solve(string* s, int n){
    string* temp=(string*)malloc(sizeof(string)*n);;

    int i;
    string c="";
    for(i=0;i<n;i++){
        temp[i].append(c);
        c.append(s[i]);
    }
    c="";
    
    for(i=n-1;i>=0;i--){
        temp[i].append(c);
        c.append(s[i]);
    }
    for(i=0;i<n;i++){
        if(temp[i].find(s[i]) != string::npos){
            cout<<s[i]<<" ";
        }
    }
    cout<<"\n";
}
int main() 
{   
    int n;
    cin>>n;
    string* s=(string*)malloc(sizeof(string)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    solve(s, n);
    return 0;
} 

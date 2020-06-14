//This problem was asked by Microsoft.

// Given a dictionary of words and a string made up of those words (no spaces), return the original sentence in a list. If there is more than one possible reconstruction, return any of them. If there is no possible reconstruction, then return null.
#include <bits/stdc++.h> 
using namespace std;

vector<string> solve(string* arr,int n, string str){
    int i;
    map<string, int>hash;
    for(i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    string temp, prev="";
    vector<string> final;
    int lastpush_i;
    for ( i = 0; i < str.length(); i++){
        temp.push_back(str[i]);
        
        if(hash[temp]==1){
            final.push_back(temp);
            lastpush_i=i;
            prev=temp;
            temp="";
        }
        else if(hash[prev+temp]==1){
            final.pop_back();
            lastpush_i=i;
            final.push_back(prev+temp);
            prev=prev+temp;
            temp="";
        }
    }
    if(lastpush_i<n-1){
        final.clear();
    }
    return final;
}

int main() 
{  
    int n;
    cin>>n;

    string* arr=(string*)malloc(sizeof(string)*n);

    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    } 
    string str;
    cin>>str;
    vector<string> final=solve(arr,n, str);
    if(final.empty()){
        cout<<"null\n";
        return 0;
    }
    for(i=0;i<final.size();i++){
        
        cout<<final[i]<<" ";
    }
    cout<<"\n";
    return 0;
} 


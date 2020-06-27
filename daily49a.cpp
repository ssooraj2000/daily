//This problem was asked by Google.

// Given an array of strictly the characters 'R', 'G', and 'B', segregate the values of the array so that all the Rs come first, the Gs come second, and the Bs come last. You can only swap elements of the array.


#include <bits/stdc++.h> 
using namespace std;

void solve(string s){
    int i=0, j=s.length()-1;
    while(i<j){
        if(s[i]=='g' && s[j]=='r'){
            swap(s[i], s[j]);
        }
        else if(s[i]=='g'){
            j--;
        }
        else if(s[j]=='r'){
            i++;
        }
        else{
            i++;j--;
        }
    }
     i=0, j=s.length()-1;
    while(i<j){
        if(s[i]=='b' && s[j]=='r'){
            swap(s[i], s[j]);
        }
        else if(s[i]=='b'){
            j--;
        }
        else if(s[j]=='r'){
            i++;
        }
        else{
            i++;j--;
        }
    }
         i=0, j=s.length()-1;

    while(i<j){
        if(s[i]=='b' && s[j]=='g'){
            swap(s[i], s[j]);
        }
        else if(s[i]=='b'){
            j--;
        }
        else if(s[j]=='g'){
            i++;
        }
        else{
            i++;j--;
        }
    }
     for(i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
}

int main() 
{   
    
    string s;
    cin>>s;
    solve(s);
    int i;
   
    cout<<"\n";
    return 0;
} 


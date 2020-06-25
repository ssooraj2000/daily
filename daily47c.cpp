//This problem was asked by Facebook.

// Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).
#include <bits/stdc++.h> 
using namespace std;

bool solve(string str){
    int i;
    char c;
    stack<char>s;
    for(i=0;i<str.length();i++){
        if(s.empty()){
            s.push(str[i]);
            continue;
        }
        else{
            if(s.top()=='{' && str[i]=='}'){
                s.pop();
            }
            else if(s.top()=='(' && str[i]==')'){
                s.pop();
            }
            else if(s.top()=='[' && str[i]==']'){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
        
    }
    if(s.empty()){
        return true;
    }
    return false;
}

int main() 
{   
    string str;
    cin>>str;
    if(solve(str)){
        cout<<"true\n";
    }else{
        cout<<"false\n";
    }
    return 0;
} 


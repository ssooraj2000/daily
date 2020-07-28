//This problem was asked by Microsoft.

// Given a 2D matrix of characters and a target word, write a function that returns whether the word can be found in the matrix by going left-to-right, or up-to-down.
#include <bits/stdc++.h>
using namespace std;

bool check_full_row_col(string* strarr, int n, string s, int i, int j){
    int p;
    string str="";
    for(p=i;str.length()<s.length();p++){
        str.push_back(strarr[p][j]);
    }
    if(s.compare(str)==0){
        return true;
    }
    str="";
    for(p=j;str.length()<s.length();p++){
        str.push_back(strarr[i][p]);
    }
    if(s.compare(str)==0){
        return true;
    }
    return false;
}
bool solve(string* strarr, int n, string s){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(strarr[i][j]==s[0]){
                if(check_full_row_col(strarr, n, s, i, j)){
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    string* strarr=(string*)malloc(sizeof(string)*n);
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>strarr[i][j];
        }
    }
    string s;
    cin>>s;
    if(solve(strarr, n, s)){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
    return 0;
}
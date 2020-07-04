//Given a string str containing only lowercase characters. The task is to print the characters having an odd frequency in the order of their occurrence.
#include <bits/stdc++.h> 
using namespace std;

string solve(string s){
    int i;
    int* arr=(int*)malloc(sizeof(int)*26);
    memset(arr, 0, 26);
    for(i=0;i<s.length();i++){
        arr[s[i]-97]++;
    }
    string ans;
    for(i=0;i<s.length();i++){
        if(arr[s[i]-'a']%2==1){
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main() 
{   
    string s;
    cin>>s;
    cout<<solve(s)<<"\n";
    
    return 0;
} 

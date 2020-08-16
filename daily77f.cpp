#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='1'){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        cout<<solve(s)<<endl;
        
    }
}
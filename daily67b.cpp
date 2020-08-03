#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    int count_valley=0;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }
        else if(s[i]=='U' && st.top()=='D'){
            st.pop();
            if(st.empty()){
                count_valley++;
            }
        }
        else if(s[i]=='D' && st.top()=='U'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    return count_valley;
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s)<<"\n";
    return 0;
}
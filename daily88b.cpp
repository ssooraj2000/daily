#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    string c;
    while(s.find_last_of('.')!=-1){
        int i=s.find_last_of('.');
        c.append(s.substr(i+1,s.length()-i-1));
        c.push_back('.');
        s=s.substr(0, i);
    }
    c.append(s);

    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}
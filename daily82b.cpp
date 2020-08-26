#include<bits/stdc++.h>
using namespace std;

string solve(string s, int n){
    string ans;
    for(int i=0;i<n;i++){
        string temp=s.substr(i, n);
        ans.push_back(temp[i]);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(s, n)<<endl;
    }
}
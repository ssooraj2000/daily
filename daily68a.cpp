#include<bits/stdc++.h>
using namespace std;

long long solve(string s,long long n){
    long long j=0, count_a=0, total_count_a;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            count_a++;
        }
    }
    total_count_a=(n/s.length())*count_a;
    for(int i=0;i<n%s.length();i++){
        if(s[i]=='a'){
            total_count_a++;
        }
    }
    return total_count_a;
}
int main(){
    string s;
    cin>>s;
    long long n;
    cin>>n;
    cout<<solve(s, n)<<"\n";
    return 0;
}
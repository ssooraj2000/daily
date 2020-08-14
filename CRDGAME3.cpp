#include<bits/stdc++.h>
using namespace std;

void solve(int pc, int pr){
    int pclen, prlen;
    pclen=pc/9;
    prlen=pr/9;
    if(pc%9>0){
        pclen++;
    }
    if(pr%9>0){
        prlen++;
    }
    if(pclen<prlen){
        cout<<0<<" "<<pclen<<endl;
    }
    else{
        cout<<1<<" "<<prlen<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int pc, pr;
        cin>>pc>>pr;
        solve(pc, pr);
    }
}
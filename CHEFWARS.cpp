#include<bits/stdc++.h>
using namespace std;

bool solve(int h, int p){
    while(h>0 && p>0){
        h-=p;
        p=floor(p/2);
    }
    if(h<=0){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int h, p;
        cin>>h>>p;
        cout<<solve(h, p)<<"\n";
    }
    return 0;
}
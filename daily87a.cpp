#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    for(int i=0;i<n;i++){
        if(n & 1<<i){
            return i+1;
        }
    }

    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;

}
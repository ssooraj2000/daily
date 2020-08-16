#include<bits/stdc++.h>

using namespace std;

int main(){
    long num=600851475143;
    long ans;
    long i=2;
    while(i<=10000){
        if(num%i==0){
            ans=i;
        }
        i++;
        i=__next_prime(i);
        // cout<<i<<" "<<ans<<"\n";
    }
    cout<<ans<<endl;
}
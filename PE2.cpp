#include<bits/stdc++.h>
using namespace std;

int main(){
    int first=1;
    int second=2;
    int sum=second;
    for(int i=first+second;i<=4000000;i=first+second){
        if(i%2==0){
            sum+=i;
        }
        first=second;
        second=i;
    }
    cout<<sum<<endl;
    return 0;
}
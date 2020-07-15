//refered completely from gfg
// A number is called as a Jumping Number if all adjacent digits in it differ by 1. The difference between ‘9’ and ‘0’ is not considered as 1.
// All single digit numbers are considered as Jumping Numbers. For example 7, 8987 and 4343456 are Jumping numbers but 796 and 89098 are not.

// Given a positive number x, print all Jumping Numbers smaller than or equal to x. The numbers can be printed in any order.
#include <bits/stdc++.h> 
using namespace std;

void solve(int n, int x){
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        n=q.front();
        q.pop();
        if(n<=x){
            cout<<n<<" ";
            int last_dig=n%10;
            if(last_dig==0){
                q.push(n*10 + last_dig+1);
            }
            else if(last_dig==9){
                q.push(n*10 + last_dig-1);
            }
            else{
                q.push(n*10 + last_dig-1);
                q.push(n*10 + last_dig+1);
            }

        }
    }
}

int main(){
    int n;
    cin>>n;
    int i;
    cout<<0<<" ";
    for(i=1;i<=9;i++){
        solve(i, n);
    }
    cout<<"\n";
    return 0;
}
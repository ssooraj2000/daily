// Given three integers A, X, and n, the task is to print terms of below binomial expression series.
// nCi+1 = nCi*(n-i)/(i+1) using idea from geeks for geeks
#include <bits/stdc++.h> 
using namespace std; 

void solve(int a, int x, int n){
    int i;
    int term=pow(a,n);
    cout<<term<<" ";
    for(i=1;i<=n;i++){
        term=(term/a)*x*(n-(i-1))/i;
        cout<<term<<" ";
    }
    cout<<"\n";

}

int main() 
{ 
    int a;
    cout<<"a:";
    cin>>a;

    int x;
    cout<<"x:";
    cin>>x;

    int n;
    cout<<"n:";
    cin>>n;

    solve(a,x,n);
  
  return 0;
}
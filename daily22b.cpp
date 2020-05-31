// You are required to build some sheets of rectangular shape of Area A. To build a sheet of an  Area A of Dimensions L & B. You have two conditions:
// 1) L and B can not be in decimals.
// 2) When L and B are even, L must be Equal to B.
// Calculate the number of possible choices to build a sheet of area A
#include <bits/stdc++.h> 
using namespace std; 

int solve(int n){
    int i, count=1,a,b;
    set<int>s;
    for(i=2;i<=n/2;i++){
        a=i,b=n/i;
        if((s.find(a) != s.end()) && (s.find(b) != s.end())){
            continue;
        }
        if(a%2==0 && b%2==0 && a==b && a*b==n){
            count++;
            s.insert(a);
        }
        else if(a*b==n){
            count++;
            s.insert(a);
            s.insert(b);
        }
        
        else {
            continue;
        }
    }
    return count;

}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;

    cout<<"Ans: "<<solve(n)<<"\n";
  
  return 0;
}
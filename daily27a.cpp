//We already know Basic Euclidean Algorithm. Now using Extended Euclidean Algorithm, Calculate the GCD and integer coefficients x, y using the same. x and y must satisfy the equation ax + by = gcd(a, b)
// x = y1 - ⌊b/a⌋ * x1
// y = x1 used from geeks for geeks

#include <bits/stdc++.h> 
using namespace std; 

int gcd(int a, int b, int* x, int* y){
   if(b==0){
      *y=0;
      *x=1;
      return a;
   }
   int x1, y1;
   int g=gcd(b, a%b, &x1, &y1);
   *y = x1 - floor(a/b) * y1;
   *x = y1;
   


   return g;
    
}
void solve(int a, int b){
   int x,y;
   
   cout<<gcd(a,b, &x, &y)<<" ";
   
   cout<<x<<" "<<y<<"\n";
}

int main() 
{ 
   cout<<"a: ";
   int a;
   cin>>a;
   cout<<"b: ";
   int b;
   cin>>b;

   solve(a, b);
   
return 0;
} 

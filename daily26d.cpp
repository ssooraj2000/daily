//Given a byte, swap the two nibbles in it. For example 100 is be represented as 01100100 in a byte (or 8 bits). The two nibbles are (0110) and (0100). If we swap the two nibbles, we get 01000110 which is 70 in decimal.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int n){
   int i,temp1,temp2;
   temp1=n&(0xF0);
   temp2=n&(0x0F);

   n=0;
   n=n|(temp2<<4);
   n=n|(temp1>>4);
   
   return n;
}

int main() 
{ 
   int n;
   cin>>n;

   cout<<"Ans: "<<solve(n)<<"\n";
   
return 0;
} 

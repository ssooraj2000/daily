//Given a string str containing alphanumeric characters, calculate sum of all numbers present in the string.
#include <bits/stdc++.h> 
using namespace std; 

int solve(string s, int n){
   int sum=0;
   int i;
   int begin=0;
   int end=0;
   string sub;
   for(i=0;i<n;i++){
      
      if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                  // cout<<"hi4\n";

        s[i]='o';
      }
   }
   cout<<s<<"\n";
   int temp=0;
   for(i=0;i<n;i++){
      if((s[i]-'0')>=0 && (s[i]-'0')<=9){
         temp=temp*10+(s[i]-'0');
      }
      else if(s[i]=='o'){
         sum+=temp;
         temp=0;
      }
   }
   sum+=temp;
   return sum;
}
int main() 
{ 
   string s;
   cin>>s;
   cout<<"Ans: "<<solve(s,s.length())<<"\n";
return 0;
} 

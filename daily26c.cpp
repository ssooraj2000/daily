//Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.
#include <bits/stdc++.h> 

using namespace std; 

string solve(string& s){
   int i;
   cout<<s.length();
   int* arr=(int*)malloc(sizeof(int)*26);
   memset(arr, 0, 26);
   for(i=0;i<s.length();i++){
      if('A' <= s[i] && s[i] <= 'Z'){
         arr[s[i]-'A']=1;
      }
      else if('a' <= s[i] && s[i] <= 'z'){
         arr[s[i]-'a']=1;
      }
      else
      {
         continue;
      }
      
   }
   for(i=0;i<26;i++){
      cout<<arr[i];
      if(arr[i]!=1){
         return "no";
      }
   }
   
   return "yes";
}
int main() 
{ 
   
   string str;
   cin>>str;
   
   
   cout<<"Ans: "<<solve(str)<<"\n";
    
   
return 0;
} 

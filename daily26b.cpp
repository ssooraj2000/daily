//Given an array A of N positive integers and another number X. Determine whether or not there exist two elements in A whose sum is exactly X
#include <bits/stdc++.h> 
using namespace std; 

string solve(int* arr, int n, int x){
   int i;
   map<int, int>hash;
   for(i=0;i<n;i++){
      hash[arr[i]]=1;
      if(hash[x-arr[i]]==1){
         return "yes";
      }
   }
   return "no";
    
}
int main() 
{ 
   int n;
   cin>>n;
   int x;
   cin>>x;
   int i;
   int* arr=(int*)malloc(sizeof(int)*n);
  
   for(i=0;i<n;i++){
         cin>>arr[i];
      
   }
   
   cout<<"Ans: "<<solve(arr, n, x)<<"\n";
    
   
return 0;
} 

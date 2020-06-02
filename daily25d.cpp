
//Construct an N input AND Gate. An AND Gate returns 1 if all its inputs are 1, otherwise 0.#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n){
   int i,ans=1;
   for(i=0;i<n;i++){
      ans&=arr[i];
   }
   return ans;
}
int main() 
{ 
   int n;
   cin>>n;

   int* arr=(int*)malloc(sizeof(int)*n);
   int i;
   for(i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<"Ans: "<<solve(arr, n)<<"\n";
   
return 0;
} 
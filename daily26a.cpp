//Given an array of even size, task is to find minimum value that can be added to an element so that array become balanced. An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n){
   int i;
   int sumleft=0, sumright=0;
   for(i=0;i<n/2;i++){
      sumleft+=arr[i];
   } 
   for(;i<n;i++){
      sumright+=arr[i];
   } 
   return abs(sumleft-sumright);
    
}
int main() 
{ 
   int n;
   cin>>n;
   
   int i;
   int* arr=(int*)malloc(sizeof(int)*n);
  
   for(i=0;i<n;i++){
         cin>>arr[i];
      
   }
   
   cout<<"Ans: "<<solve(arr, n)<<"\n";
    
   
return 0;
} 

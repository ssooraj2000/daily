// Given a binary array A[] of size N. The task is to arrange the array in increasing order.
#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

void solve(int* arr, int n){
   int i=0,j=n-1;
   while(i<=j){
      if(arr[i]==0){
         i++;
         continue;
      }
      if(arr[j]==1){
         j--;
         continue;
      }
      swap(arr[i],arr[j]);
   }
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
   solve(arr, n);
   for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<"\n";
return 0;
} 
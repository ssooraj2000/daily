// Given a sorted array arr[] of size N without duplicates, and given a value x. Find the floor of x in a given array. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.#include <bits/stdc++.h> 
using namespace std; 

 void solve(int* arr, int l, int m, int h, int n ,int k){
     if(k>arr[h]){
         cout<<arr[h]<<"\n";
         return;
     }
     else if(k<arr[l] && l!=0){
         cout<<arr[l-1]<<"\n";
            return;

     }
     else if(k<arr[0]){

         cout<<-1<<"\n";
                  return;

     }
     if(l<=h){
         if(k==arr[m]){

             cout<<arr[m]<<"\n";
                      return;

         }
         if(k<arr[m]){
             solve(arr, l, (l+m-1)/2, m-1, n, k);
         }
         else if(k>arr[m]){
             solve(arr, m+1, (m+1+h)/2, h, n, k);
         }
     }

 }

 int main() 
 { 
     int n;
     cout<<"n:";
     cin>>n;
    
     int* arr=(int*)malloc(sizeof(int)*n);
     int i;
     for(i=0;i<n;i++){
         cin>>arr[i];
     }
    
     int k;
     cout<<"k:";
     cin>>k;
    solve(arr,0, (n-1)/2, n-1, n,k);
   return 0;
 } 
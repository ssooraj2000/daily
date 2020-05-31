// Given a square matrix[][] of size N x N. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.
#include <bits/stdc++.h> 
using namespace std; 

 void solve(int** arr,int n){
     int i=0,j=1;
     while(i<n && j<n){
         swap(arr[i][j],arr[j][i]);
         if(j+1<n){
             j++;
         }
         else{
             i++;
         }
     }
     i=0,j=0;
     int k=n-1;
     while(i<k){
         for(j=0;j<n;j++){
             swap(arr[i][j],arr[k][j]);
         }
         i++;
         k--;
     }
    

 }

 int main() 
 { 
     int n;
     cout<<"n:";
     cin>>n;

     int** arr=(int**)malloc(sizeof(int*)*n);
     int i;
     for(i=0;i<n;i++){
         arr[i]=(int*)malloc(sizeof(int)*n);
     }
     int j;
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             cin>>arr[i][j];
         }
     }
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<"\n";
     }
     solve(arr,n);
     cout<<"Ans: \n";
    for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<"\n";
     }
   return 0;
 } 
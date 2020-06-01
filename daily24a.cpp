//Given two sorted arrays of size m and n of distinct elements. Given a value x. The problem is to count all pairs from both arrays whose sum is equal to x  
#include <bits/stdc++.h> 
using namespace std; 

 int solve(int* arr1, int* arr2, int n, int m, int k){
    int count=0;
    map<int, int> hash1;
    map<int, int> hash2;

    int i;
    for(i=0;i<n;i++){
        hash1[arr1[i]]=1;
    }
    for(i=0;i<m;i++){
        hash2[arr2[i]]=1;
    }
    for(auto j=hash1.begin();j!=hash1.end();j++){
        if(j->second==1 && hash2[k-j->first]==1){
            count++;
            j->second=0;
            hash2[k-j->first]=0;
        }
    }
    for(auto j=hash2.begin();j!=hash2.end();j++){
        if(j->second==1 && hash1[k-j->first]==1){
            count++;
            j->second=0;
            hash1[k-j->first]=0;
        }
    }
    return count;
 }

 int main() 
 { 
     int n;
     cout<<"n:";
     cin>>n;
    int m;
     cout<<"m:";
     cin>>m;
     

     int* arr1=(int*)malloc(sizeof(int)*n);
     int* arr2=(int*)malloc(sizeof(int)*m);
     int i;
     for(i=0;i<n;i++){
         cin>>arr1[i];
     }
    for(i=0;i<n;i++){
         cin>>arr2[i];
     }
     int k;
     cout<<"k:";
     cin>>k;
     cout<<"Ans: "<<solve(arr1,arr2,n,m,k)<<"\n";
   return 0;
 } 
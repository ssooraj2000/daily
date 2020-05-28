//Given a non-negative number n and a value k. Find the k-th smallest number that can be formed using the digits of the given number n. It is guaranteed that the k-th smallest number can be formed. Note that the number could be very large and may not even fit into long long int.
#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

int solve(int n, int size, int k){
   int* arr=(int*)malloc(sizeof(int)*size);
   int i=size-1;
   map<int,int>hash;
    while(n>0){
        hash[i--]=n%10;
        n/=10;
    }
    i=0;
    for(auto j=hash.begin();j!=hash.end();j++){
        arr[i++]=j->second;
    }
    for(i=1;i<k;i++){
        next_permutation(arr, arr+size);
        
    }
    for(i=0;i<size;i++){
        n=n*10+arr[i];
    }
    return n;
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
     int k;
    cout<<"k:";
    cin>>k;
    int size=0;
    int temp=n;
    while(n>0){
        size++;
        n/=10;
    }
    n=temp;
    cout<<"Ans: "<<solve(n,size,k)<<"\n";
  return 0;
}
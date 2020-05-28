// Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.Expected Time Complexity: O(n)
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr,int n, int k){
    set<int>s;
    int i,counter=1;
    for(i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(auto j=s.begin();j!=s.end();j++){
        if(counter==k){
            return *j;
        }
        counter++;
    }
    return 0;

}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    int k;
    cout<<"k:";
    cin>>k;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<solve(arr, n, k)<<"\n";
  return 0;
} 


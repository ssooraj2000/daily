//Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std; 

int main() 
{ 
    int n,i,j,k,count=0,sum=0;
    cin >>n;
    int * arr;
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"k:";
    cin>>k;

    for(i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
        sum=arr[i];
        for(j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum<k){
                continue;
            }
            else if(sum==k){
                count++;
            }
            break;
        }
    }
    cout<<"Ans"<<count<<"\n";
    return 0;
} 
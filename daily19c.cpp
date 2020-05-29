//Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.
#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr,int n){
    int count=0,i;
    // for(int j=0;j<n;j++){
    //     cout<<arr[j]<<" ";
    // }
    // cout<<"\n";
    int max=0;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    i=0;
    while(i<n & count<n){

        if(arr[i]<=0){
            arr[i]=max*10;
            // arr[i]*=-1;
            i++;
            count++;
        }
        else if(arr[i]>n){
            arr[i]*=-1;
            count++;
            i++;
        }
        else if(arr[i]==n){
            arr[i]*=-1;

            if(i==n-1){
                break;
            }
            swap(arr[n-1],arr[i]);
            count++;
            if(arr[i]<=0){
            arr[i]=max*10;
                i++;
            }
        }
        else if((arr[i]%n)-1==i){
            arr[i]*=-1;
            i++;
            count++;
        }
        else{
            arr[i]*=-1;
      
            swap(arr[(abs(arr[i])%n)-1], arr[i]);
            count++;
            if(arr[i]<=0 || arr[i]==max*10){
                arr[i]=max*10;
                i++;
            }
        }
    }
    
    for(i=0;i<n;i++){
        if(arr[i]>max){
            return i+1;
        }
        else if((arr[i]*-1)!=(i+1) ){
            return i+1;
        }
        
        else if(i==n-1 && arr[i]*(-1)==n){
            continue;
        }
        else if( ( (( (-1*arr[i]) %n)-1)!=i ) || arr[i]==max*10 ){
            return i+1;
        }
    }
    return i+1;
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
    cout<<"Ans: "<<solve(arr,n)<<"\n";

  return 0;
}


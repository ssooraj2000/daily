// Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int* arr,int n){
    int i=0;
    while(i<n){
        if(arr[i]==n){
            arr[i]*=-1;
            swap(arr[n-1],arr[i]);
        }
        else if((arr[i]%n)-1==i){
            i++;
        }
        else if(arr[i]<0){
            i++;
        }
        else{
            arr[i]*=-1;
            swap(arr[(abs(arr[i])%n)-1], arr[i]);
        }
    }

    for(i=0;i<n;i++){
        if((abs(arr[i])%n)-1!=i){
            cout<<i+1<<"\n";
            return;
        }
    }
    cout<<i+1<<'\n';
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
    solve(arr,n);
  return 0;
} 


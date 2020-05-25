//Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
#include <bits/stdc++.h> 
using namespace std; 


bool solve(int* arr, int n, int k){
    set<int>s;
    int i;
    for(i=0;i<n;i++){
        s.insert(arr[i]);
        if(s.find(k-arr[i])!=s.end()){
            return true;
        }
    }
    return false;
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
    cout<<"Enter Elements:\n";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(solve(arr,n,k)){
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }

	return 0; 
} 


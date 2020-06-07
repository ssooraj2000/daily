//Minimum sum of two numbers formed from digits of array.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n){
    int i;
    int num1=0,num2=0;
    sort(arr, arr+n);
    for(i=0;i<n;i++){
        if(i%2==0){
            num1=num1*10+arr[i];
        }
        else{
            num2=num2*10+arr[i];
        }
    }
    return num1+num2;
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
    cout<<solve(arr,n)<<"\n";
} 

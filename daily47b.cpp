//This problem was asked by Microsoft.

// Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.
#include <bits/stdc++.h> 
using namespace std;

void solve(int* arr, int n){
    int* temp;
    int i, j;
    for(i=0;i<n;i++){
        temp=(int*)malloc(sizeof(int)*(i+1));
        for(j=0;j<=i;j++){
            temp[j]=arr[j];
        }
        sort(temp, temp+(i+1));
        if((i+1)%2==0){
            cout<<float((temp[(i+1)/2]+temp[(i+1)/2 - 1]))/2<<"\n";
        }
        else{
            cout<<temp[(i+1)/2]<<"\n";
        }
    }
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
    solve(arr, n);
    return 0;
} 


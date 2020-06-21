// An array is given, find length of the subarray having maximum sum.
//help from GFG

#include <bits/stdc++.h> 
using namespace std;

int solve(int* arr, int n){
    int start=0, end=0, i, s=0;
    int max_so_far=INT_MIN, max_ending_here=0;
    for(i=0;i<n;i++){
        max_ending_here+=arr[i];
        if(max_so_far<max_ending_here){
            start=s;
            end=i;
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0){
            s=i+1;
            max_ending_here=0;
        }

    }
    // cout<<end<<" "<<start<<"\n";
    return end-start+1;
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
    cout<<solve(arr, n)<<"\n";
    
    return 0;
} 


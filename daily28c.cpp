//Find kth largest sum contiguous subarray.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n, int k){
    int i,j,sum=0;
    map<int , int> hash;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
            hash[sum]=1;
        }
        sum=0;
        for(j=n-1;j>=i;j--){
            sum+=arr[j];
            hash[sum]=1;
        }
    }
    int count=0,length=0;
    for(auto l=hash.begin();l!=hash.end();l++){
        cout<<l->first<<" ";
        length++;
    }
    cout<<"\n";
    for(auto l=hash.begin();l!=hash.end();l++){
        count++;
        if(count==length-k+1){
            return l->first;
        }
    }
    cout<<"No valid answer\n";
    return -1;
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
    int k;
    cout<<"k: ";
    cin>>k;
    cout<<"Ans: "<<solve(arr, n,k)<<"\n";
} 

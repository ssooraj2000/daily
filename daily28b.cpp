//Find missing elements of a range.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int* arr, int n, int low, int high){
   int* temp=(int*)malloc(sizeof(int)*(high-low+1));
   int i;
   memset(temp, 0, high-low+1);
   
   for(i=0;i<n;i++){
       if(arr[i]>=low && arr[i]<=high){
           temp[arr[i]-low]=1;
       }
   }
   for(i=0;i<high-low+1;i++){
       if(temp[i]==0){
           cout<<i+low<<" ";
       }
   }
   cout<<"\n";
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
    int low,high;
    cin>>low>>high;
    solve(arr, n, low, high);
} 

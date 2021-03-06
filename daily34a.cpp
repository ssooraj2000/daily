//Print leaders of an array in O(n) time complexity and O(1) space complexity.
#include <bits/stdc++.h> 
using namespace std;

void solve(int* arr,int n){
    int i;
    vector<int> v;
    v.push_back(arr[n-1]);
    int max=arr[n-1];
    for(i=n-2;i>=0;i--){
        if(arr[i]>max){
            v.push_back(arr[i]);
            max=arr[i];
        }
    }    
    
    for(i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
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
    solve(arr,n);
    
    return 0;
} 

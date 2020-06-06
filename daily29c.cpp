//Sum of all elements between k1th and k2th smallest elements.
#include <bits/stdc++.h> 
using namespace std; 


int solve(int* arr, int n, int k1, int k2){
    int i;
    map<int, int>hash;
    for(i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int k=0,sum=0;
    for(auto j=hash.begin();j!=hash.end();j++){
        for(int l=0;l<j->second;l++){
                if(k==k2-1){
                    break;
                }
                else if(k>=k1){
                    // cout<<j->first<<" "<<k<<"\n";
                    sum+=j->first;
                    k++;
                }
                else{
                    k++;
                }
        }
    }
    return sum;
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
    int k1, k2;
    cin>>k1>>k2;

    cout<<solve(arr,n, k1, k2)<<"\n";
} 

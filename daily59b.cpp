//Minimum swaps to make array identical.

#include <bits/stdc++.h> 
using namespace std;
    
int solve(int* arr1,int* arr2, int n){
    int ans=0;
    map<int,int>hash1;
    map<int,int>hash2;
    int i;

    for(i=0;i<n;i++){
        hash1[arr1[i]]=i+1;
        hash2[arr2[i]]=i+1;
        if(arr1[i]==arr2[i]){
            hash1.erase(arr1[i]);
            hash2.erase(arr2[i]);
        }
        else if(hash2[arr1[i]]==hash1[arr2[i]] && hash2[arr1[i]]>0 && hash1[arr2[i]]>0){
            // cout<<arr1[i]<<" "<<arr2[i]<<"\n";
            ans++;
            int temp=arr2[i];
            arr2[i]=arr1[i];
            arr2[hash2[arr1[i]]-1]=temp;
            hash1.erase(arr1[i]);
            hash2.erase(temp);
        }
    }
    if(hash2.empty()){
        return 0;
    }
    cout<<ans<<" "<<hash2.size()<<"\n";
    return ans+hash2.size()-1;
    
}
int main() 
{   
    int n;
    cin>>n;
    int* arr1=(int*)malloc(sizeof(int)*n);
    int* arr2=(int*)malloc(sizeof(int)*n);

    int i;
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<solve(arr1,arr2, n)<<"\n";
    return 0;
} 
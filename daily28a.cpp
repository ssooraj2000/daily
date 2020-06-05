//Find k numbers of most occurrences in the given array.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int* arr, int n, int k){
    map<int, int>hash;
    int i;
    for(i=0;i<n;i++){
        hash[arr[i]]++;
    }
    auto j=hash.begin();
    auto l=hash.begin();
    int count=0,max=0;
    while(count<k){
        
        if(j==hash.end()){       
            if(l->second==-1){
                break;
            }
            cout<<l->first<<"\n";
            count++;
            l->second=-1;
            max=0;
            j=hash.begin();
        }
        else if(j->second>max){
            l=j;
            max=j->second;
            j++;
        }
        else{
            j++;
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
    int k;
    cout<<"k: ";
    cin>>k;
    cout<<"ans: \n";
    solve(arr, n,k);
} 

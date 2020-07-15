// Given a Boolean Matrix, find k such that all elements in k’th row are 0 and k’th column are 1. If no such exist then print -1.
#include <bits/stdc++.h> 
using namespace std;

int solve(int** arr, int n)
{
    int i, j, count;
    map<int, int >hash;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(i!=j){
                if(arr[i][j]==0){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        if(count==n-1){
            hash[i]++;
        }
    }
    for(auto k=hash.begin();k!=hash.end();k++){
        count=0;
        for(j=0;j<n;j++){
            if(j!=k->first){
                if(arr[j][k->first]==1){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        if(count==n-1){
            k->second++;
        }
    }
    for(auto k=hash.begin();k!=hash.end();k++){
        if(k->second==2){
            return k->first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    
    int** arr=(int**)malloc(sizeof(int*)*n);

    int i;

    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*n);
    }

    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<solve(arr, n)<<"\n";
    
    return 0;
}
//Given an n x n matrix, where every row and column is sorted in non-decreasing order. Print all elements of matrix in sorted order.
//top
#include <bits/stdc++.h> 
using namespace std; 

void solve(int** arr,int n){
    int i,j;
    int max=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    map<int, int>hash;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            hash[arr[i][j]]++;
        }
    }
    cout<<"ANS: \n";
    for(auto i=hash.begin();i!=hash.end();i++){
        if(i->second>1){
            for(j=0;j<i->second;j++){
                cout<<i->first<<" ";
            }
        }
        else{
            cout<<i->first<<" ";

        }
    }
    cout<<"\n";
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;
    
    int i;
    int** arr=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*n);
    }
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    solve(arr, n);
	return 0; 
} 


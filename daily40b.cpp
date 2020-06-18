//Sum of all maximum frequency elements in Matrix

#include <bits/stdc++.h> 
using namespace std;

int solve(int** arr, int n, int m){
    int i,j;
    map<int, int>hash;
    int max=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            hash[arr[i][j]]++;
            if(hash[arr[i][j]]>max){
                max=hash[arr[i][j]];
            }
        }

    }
    int sum=0;
    for(auto k=hash.begin();k!=hash.end();k++){
        if(k->second==max)
        sum+=(k->first*k->second);
    }
    return sum;
}

int main() 
{  
    int n;
    cin>>n;
    int m;
    cin>>m;

    int** arr=(int**)malloc(sizeof(int*)*n);
    int i;
    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*m);
    }
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<solve(arr, n, m)<<"\n";
    
    return 0;
} 


//Find if there is a rectangle in binary matrix with corners as 1
#include <bits/stdc++.h> 
using namespace std;

string solve(int** arr, int n, int m){
    int i, j, k;
    int temp;
    map<int, set<int>> hash;
    for(i=0;i<n;i++){
        temp=0;
        int count_1=0;
        for(j=0;j<m-1;j++){
            for(k=j+1;k<m;k++){
                if(arr[i][j]==1 && arr[i][k]==1){
                    if(hash[j].find(k)!=hash[j].end()){
                        return "yes";
                    }
                    hash[j].insert(k);

                }
            }
        }    
    }
    return "no";
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


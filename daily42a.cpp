//Find common elements in three sorted arrays
#include <bits/stdc++.h> 
using namespace std;

void solve(int* arr1, int n1, int* arr2, int n2, int* arr3, int n3){
    int i;
    map<int, int> hash;
    for(i=0;i<n1;i++){
        hash[arr1[i]]=1;
    }

    for(i=0;i<n2;i++){    
    
        if(hash[arr2[i]]==1){
            hash[arr2[i]]++;
        }

    }

    for(i=0;i<n3;i++){
        if(hash[arr3[i]]==2){
            hash[arr3[i]]++;
        }
    }

    for(auto k=hash.begin();k!=hash.end();k++){
        if(k->second==3){
            cout<<(k->first)<<" ";
        }
    }
    cout<<"\n";
}

int main() 
{  
    int n1;
    cin>>n1;
    
    int* arr1=(int*)malloc(sizeof(int)*n1);
    int i;
    for(i=0;i<n1;i++){
            cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    
    int* arr2=(int*)malloc(sizeof(int)*n2);
    for(i=0;i<n2;i++){
            cin>>arr2[i];
    }
    int n3;
    cin>>n3;
    
    int* arr3=(int*)malloc(sizeof(int)*n3);
    for(i=0;i<n3;i++){
            cin>>arr3[i];
    }
    solve(arr1, n1, arr2, n2, arr3, n3);
    
    return 0;
} 


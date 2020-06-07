//Check if given matrix is Magic square or not.

#include <bits/stdc++.h> 
using namespace std; 

string solve(int** arr, int n){
    int sum=0, i, j, new_sum;
    for(j=0;j<n;j++){
        sum+=arr[0][j];
    }
    for(i=1;i<n;i++){
        new_sum=0;
        for(j=0;j<n;j++){
                new_sum+=arr[i][j];
        }
        if(new_sum!=sum){
            return "no";
        }    
    }
    for(j=0;j<n;j++){
        new_sum=0;
        for(i=0;i<n;i++){
            new_sum+=arr[i][j];
        }
        if(new_sum!=sum){
            return "no";
        }
    }
    new_sum=0;
    for(i=0;i<n;i++){
            new_sum+=arr[i][i];
    }
    if(new_sum!=sum){
            return "no";
    }
    new_sum=0;
    i=0,j=n-1;
    while(i<n){
        new_sum+=arr[i][j];
        j--;
        i++;
    }
    if(new_sum!=sum){
            return "no";
    }
    return "yes";
}

int main() 
{ 
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
   

    cout<<solve(arr,n)<<"\n";
} 

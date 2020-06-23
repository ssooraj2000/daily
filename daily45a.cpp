//Take as input a two-d array. Wave print it column-wise.
#include <bits/stdc++.h> 
using namespace std;

void solve(int** arr, int n, int m){
    int i=0, j=0, up=0 ,down=1;
    while(j<m){
        if (down)
        {
            if(i<n){
            cout<<arr[i][j];
            i++;
            }
            else{
                j++;
                i=n-1;
                down=0;
                up=1;
            }
        }
        else{
            if(i>=0){
            cout<<arr[i][j];
            i--;
            }
            else{
                j++;
                i=0;
                down=0;
                down=1;
            }
        }
        
        
    }
}

int main() 
{  
    int n;
    cin>>n;
    
    int** arr=(int**)malloc(sizeof(int*)*n);
    int m;
    cin>>m;
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
    solve(arr, n,m);
    
    return 0;
} 


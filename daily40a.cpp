//Given level order traversal of a Binary Tree, check if the Tree is a Min-Heap.
#include <bits/stdc++.h> 
using namespace std;

string solve(int* arr, int n){
    int i;
    for(i=0;i<n/2;i++){
        if(arr[i]<=arr[i*2+1] && arr[i]<=arr[i*2+2]){
            continue;
        }
        else{
            return "false";
        }
    }
    return "true";
}

int main() 
{  
    int n;
    cin>>n;
    
    int* arr=(int*)malloc(sizeof(int*)*n);
    int i;
    int j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr, n)<<"\n";
    
    return 0;
} 


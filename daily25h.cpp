//Working with 2D arrays is quite important. Here we will do swapping of columns in a 2D array. You are given a matrix M of r rows and c columns. You need to swap the first column with the last column.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int** arr, int n, int m){
   int i;
    for(i=0;i<n;i++){
       swap(arr[i][0],arr[i][m-1]);
    }
}
int main() 
{ 
   int n;
   cin>>n;
   int m;
   cin>>m;
   int i;
   int** arr=(int**)malloc(sizeof(int*)*n);
   for(i=0;i<n;i++){
      arr[i]=(int*)malloc(sizeof(int)*m);
   }
   int j;
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
         cin>>arr[i][j];
      }
   }
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
   }
   solve(arr, n, m);
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
   }
return 0;
} 

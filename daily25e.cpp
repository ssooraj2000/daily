//2 players A & B takes turns alternatively and play a game. The game is that they have N numbers on a paper. At any turn a player can replace one of the numbers by any of its factor ( except for 1 & itself ). The player who is unable to make a move looses the game. Find the winner of the game if A starts the game and both play optimally.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n){
   int winner_so_far=1;
   int i=0,j=1;
   while(i<j && j<n && i<n-1){
            if(arr[j]!=arr[i] && arr[j]!=1 && arr[i]%arr[j]==0){
               arr[i]=arr[j];
               winner_so_far=!winner_so_far;
               i=0;j=1;
            }
            else if(arr[j]!=arr[i] && arr[i]!=1 && arr[j]%arr[i]==0){
               arr[j]=arr[i];
               winner_so_far=!winner_so_far;
               i=0;j=1;
            }
            else if(j==n-1){
               i++;
               j=i+1;
            }
            else{
               j++;
            }
      }
      for(i=0;i<n;i++){
         cout<<arr[i]<<" ";
      }
      cout<<"\n";
   return winner_so_far;
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
   if(solve(arr, n)){
      cout<<"B\n";
   }   
   else{
      cout<<"A\n";
   }
return 0;
} 
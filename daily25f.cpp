//Suppose you have two pets and you love both of them very much. You go to a pet store to buy different articles for your pets. But you ask salesman that you will buy only those articles which are actually in pair. In this store, articles are referred as integers. So you have to tell total no. of articles you will buy for your pets.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n){
   map<int, int>hash;

   int count=0;
   int i;
   for(i=0;i<n;i++){
      hash[arr[i]]++;
   }
   for(auto j=hash.begin();j!=hash.end();j++){
      if(j->second%2==0){
         count+=j->second;
      }
      else if(j->second%2==1 && j->second>2){
         count+=j->second-1;
      }
   }
   return count;
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
   cout<<"Ans: "<<solve(arr,n)<<"\n";
return 0;
} 
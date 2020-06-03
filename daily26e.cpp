//A number is called faithful if you can write it as the sum of distinct powers of 7.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int* arr, int n, int pos){
   int pow_set_size = pow(2, n); 
    int counter, j,sum=0; 
   int* all=(int*)malloc(sizeof(int)*pow_set_size);
   memset(all, 0, pow_set_size);
    for(counter = 1; counter < pow_set_size; counter++) 
    { 
         for(j = 0; j < n; j++) 
         { 
            if(counter & (1 << j)){
               // cout<<arr[j];
                  all[counter]=all[counter]+pow(7,arr[j]); 
            }

         } 
         // cout<<"\n";

    } 
    int i;
   for(i=1;i<pow_set_size;i++){
      cout<<all[i]<<" ";
   }
   cout<<"\n";
    return all[pos];
}

int main() 
{ 
   int n;
   cin>>n;

   int* arr=(int*)malloc(sizeof(int)*(ceil(log2(n))+1));
   int i=0;

   for(i=0;i<ceil(log2(n))+1;i++)
   {
      arr[i]=i;
   }
   cout<<"Ans: "<<solve(arr,ceil(log2(n))+1,n)<<"\n";
   
return 0;
} 

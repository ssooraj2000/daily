//Find the largest multiple of 3 from array of digits in O(n) time and O(1) space.
//used below idea from gfg
//If remainder is ‘1’ : We have to remove single digit that have remainder ‘1’ or we have to remove two digit that have remainder ‘2’ ( 2 + 2 => 4 % 3 => ‘1’)
// If remainder is ‘2’ : .We have to remove single digit that have remainder ‘2’ or we have to remove two digit that have remainder ‘1’ ( 1 + 1 => 2 % 3 => 2 ).
#include <bits/stdc++.h> 
using namespace std;

#define MAX_SIZE 10

int solve(int* arr, int n){
    int ans=0;
    int* count=(int*)malloc(sizeof(int)*MAX_SIZE);
    memset(count, 0, MAX_SIZE);
    int i;
    for(i=0;i<n;i++){
        count[arr[i]]++;
    }
    int j=0, flag=1;
    for(i=0;i<MAX_SIZE;i++){
        for(int k=0;k<count[i];k++){
            arr[j++]=i;
        }
    }
    int sum=accumulate(arr, arr+n, 0);
    cout<<sum<<"\n";
    int rem=sum%3;
    if(rem==1){
        
            int counter=0;
            for(i=0;i<n;i++){
                if(arr[i]%3==1){
                    count[arr[i]]--;
                    n--;
                    break;
                }
                if(counter==2){
                    break;
                }
                else if(arr[i]%3==2){
                    count[arr[i]]--;
                    n--;
                    counter++;
                }
            }
            
        

    }
    else if(rem==2){   
        
            int counter=0;
            for(i=0;i<n;i++){
                if(arr[i]%3==2){
                    count[arr[i]]--;
                    n--;
                    break;
                }
                if(counter==2){
                    break;
                }
                else if(arr[i]%3==1){
                    count[arr[i]]--;
                    n--;
                    counter++;
                }
            }
       
    }
    arr=(int*)malloc(sizeof(int)*n);
    j=0;
    for(i=0;i<MAX_SIZE;i++){
        for(int k=0;k<count[i];k++){
            arr[j++]=i;
        }
    }
    for(i=n-1;i>=0;i--){
            ans=ans*10+arr[i];
        }
    return ans;
}

int main() 
{   
    int n,i;
    cin>>n;
    int* arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr, n)<<"\n";
    return 0;
} 
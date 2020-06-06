//Sort prime numbers in descending order.

#include <bits/stdc++.h> 
using namespace std; 

void sieve_of_erathosthenes(int* prime, int n){
    int i,j;
    prime[0]=0;
    prime[1]=0;
    for(i=2;i*i<n;i++){
        if(prime[i]){
            for(j=i*2;j<n;j=j+i){
                prime[j]=0;
            }
        }
    }
}
void solve(int* arr, int n, int* prime){
    int* temp;
    int i,count_prime=0,j;
    for(i=0;i<n;i++){
        if(prime[arr[i]]==1){
            count_prime++;
        }
    }
    
    temp=(int*)malloc(sizeof(int)*count_prime);
    j=0;
    for(i=0;i<n;i++){
        if(prime[arr[i]]){
            temp[j++]=arr[i];
        }
    }
    
    sort(temp,temp+count_prime, greater<int>());


    
    j=0;
    for(i=0;i<n;i++){
        if(prime[arr[i]]){
            arr[i]=temp[j++];
        }
    }
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
    int max=*max_element(arr, arr+n);
    int* prime=(int*)malloc(sizeof(int)*(max+1));
    for(i=0;i<=max;i++){
        prime[i]=1;
        // cout<<prime[i]<<" ";
    }
    cout<<"\n";
    sieve_of_erathosthenes(prime, max+1);
    // for(i=0;i<=max;i++){
    //     cout<<prime[i]<<" ";
    // }
    // cout<<"\n";
    solve(arr, n, prime);

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
} 

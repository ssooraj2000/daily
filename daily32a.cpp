//This problem was asked by Facebook.

// Given a stream of elements too large to store in memory, pick a random element from the stream with uniform probability.
#include <bits/stdc++.h> 
#include <time.h>
using namespace std;


int main() 
{  
    int n;
    cin>>n;
    int* stream=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>stream[i];
    }
    cout<<"Ans: \n";
    int random;
            srand(time(NULL));

    for(i=0;i<n;i++){
        int j=rand()%(i+1);
        random=stream[j];
    }
    cout<<random<<"\n";
    return 0;
} 

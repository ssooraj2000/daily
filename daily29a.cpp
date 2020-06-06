//Sort elements on the basis of factors

#include <bits/stdc++.h> 
using namespace std; 

int* solve(int* arr, int n){
    int i,j;
    unordered_map<int, int> hash;
    unordered_map<int, int> count;

    int* temp=(int*)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++){
        count[arr[i]]++;
        temp[i]=2;
        hash[arr[i]]=2;
        for(j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0){
                
                hash[arr[i]]++;
                temp[i]++;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<"\n";
    sort(temp, temp+n, greater<int>());
    for(i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<"\n";
    i=0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(hash[arr[j]]==temp[i]){
                if(count[arr[j]]>1){
                    for(int l=0;l<count[arr[j]];l++){
                        temp[i++]=arr[j];
                    }
                }
                else{
                    temp[i]=arr[j];
                }
                hash[arr[j]]=-1;
                
                break;
            }
        }
    }
   

    
    for(i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<"\n";
    i=0;
    
    
    // for(i=0;i<n;i++){
    //     int x=temp[i];
    //     temp[i]=hash1_swap[temp[i]];
    //     j=i;
    //     for(auto k=hash1.begin();k!=hash1.end();k++){
    //         if(k->second==x){
    //             temp[++i]=k->first;
    //         }
    //     }
    //     // cout<<temp[i]<<" "<<j<<" "<<i<<"\n";
    //    sort(temp+j, temp+i+1);
    //     cout<<i<<"\n";
    // }
   
    return temp;
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
    arr=solve(arr, n);
    cout<<"Ans: \n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
} 

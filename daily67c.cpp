#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int count_jump=0;
    arr[arr.size()-1]=-1;
    for(int i=arr.size()-1;i-2>=0;i--){
        if(arr[i]==-1){
            if(arr[i-1]==0){
                arr[i-1]=-1;
            }
            if(arr[i-2]==0){
                arr[i-2]=-1;
            }
        }
    }
    arr[0]=-1;
    int i=0;
    while(i<arr.size()-1){
        if(arr[i]==-1){
            if(arr[i+2]==-1){
                count_jump++;
                i=i+2;
            }
            else if(arr[i+1]==-1){
                count_jump++;
                i=i+1;
            }
        }
    }
    return count_jump;
}
int main(){
    int n, data;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }
    cout<<solve(arr)<<"\n";
    return 0;
}
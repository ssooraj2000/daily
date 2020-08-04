#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr, int d){
    int i, j, temp;
    for(i=0;i<d;i++){
        temp=arr[0];
        for(j=0;j<arr.size()-1;j++){
            arr[j]=arr[j+1];
        }
        arr[j]=temp;
    }
    return arr;
}
int main(){
    int n, d, i;
    cin>>n;
    cin>>d;
    vector<int> arr(n);

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result=solve(arr, d);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}
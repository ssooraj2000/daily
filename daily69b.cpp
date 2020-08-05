#include<bits/stdc++.h>
using namespace std;

long solve(int n, vector<vector<int>>q){
    vector<long>arr(n);
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    long max=LONG_MIN;

    for(int i=0;i<q.size();i++){
        for(int j=q[i][0]-1;j<q[i][1];j++){
            arr[j]+=q[i][2];
            if(arr[j]>max){
                max=arr[j];
            }
        }
    }
    return max;
}
int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>>q(m);
    
    for(int i=0;i<m;i++){
        q[i]=vector<int>(3);
        cin>>q[i][0]>>q[i][1]>>q[i][2];
    }
    solve(n,q);
    return 0;
}
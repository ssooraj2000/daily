#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    map<int, int> hash;
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }
    map<int, int>::iterator i;
    int count=0;
    for(i=hash.begin();i!=hash.end();i++){
        count+=(i->second)/2;
    }
    return count;
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
//We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.
#include <bits/stdc++.h> 
using namespace std;

int solve(vector<double> v1, vector<double> v2){
    int i=0, j=0;
    vector<double> v;
    while(i<v1.size() && j<v2.size()){
        if(v.size()==(v1.size()+v2.size())/2+1){
            break;
        }
        else if(v1[i]<v2[j]){
            v.push_back(v1[i]);
            i++;
        }
        else if(v2[j]<v1[i]){
            v.push_back(v2[j]);
            j++;
        }
        else{
            v.push_back(v2[j]);
            v.push_back(v2[j]);
            i++;j++;
        }
    }
    
    int n;
    n=v1.size()+v2.size();
    if(n%2==1){
        return v[v.size()-2];
    }
    return (v[v.size()-2]+v[v.size()-1])/2;
}

int main() 
{   
    vector<double> v1;
    vector<double> v2;

    int n;
    cin>>n;
    int i;
    int data;
    for(i=0;i<n;i++){
        cin>>data;
        v1.push_back(data);
    }
    for(i=0;i<n;i++){
        cin>>data;
        v2.push_back(data);
    }
    cout<<solve(v1, v2)<<"\n";
    return 0;

} 


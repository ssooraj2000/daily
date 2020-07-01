//Given an array representing heights of buildings. The array has buildings from left to right. Count number of buildings facing the sunset. It is assumed that heights of all buildings are distinct.
#include <bits/stdc++.h> 
using namespace std;

int solve(vector<int> v){
    int max_so_far=INT_MIN;
    int count=0;
    int i;
    for (i = 0; i < v.size(); i++)
    {
        if(max_so_far>v[i]){
            continue;
        }
        else if(v[i]>max_so_far){
            count++;
            max_so_far=v[i];
        }

    }
    return count;
}
int main() 
{   
    vector<int> v;
    int n;
    cin>>n;
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
            v.push_back(data);
        
    }
    cout<<solve(v)<<"\n";
    return 0;
} 


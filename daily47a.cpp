//Given an array Check it is max heap or not

#include <bits/stdc++.h> 
using namespace std;

bool solve(vector<int> v){
    int i;
    for(i=v.size()/2-1;i>=0;i--){
        if(v[i]>=v[i*2]){
            if(i*2+1 <v.size()){
                if(v[i]>=v[i*2+1]){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        else{
            return false;
        }
    }
    return true;
}
int main() 
{   
    int n;
    cin>>n;
    vector<int> v;
    int i,num;
    for(i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    if(solve(v)){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
    return 0;
} 


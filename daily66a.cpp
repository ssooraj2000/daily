//This problem was asked by Facebook.

// Given a list of integers, return the largest product that can be made by multiplying any three integers.
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v){
    vector<int>::iterator  i;
    int maxpositive1=INT_MIN, maxpositive2=INT_MIN, maxpositive3=INT_MIN, maxnegative1=INT_MAX,maxnegative2=INT_MAX; 
    for(i=v.begin();i!=v.end();i++){
        if(*i>maxpositive1){
            maxpositive3=maxpositive2;
            maxpositive2=maxpositive1;
            maxpositive1=*i;
        }else if(*i>maxnegative2){
            maxpositive3=maxpositive2;
            maxpositive2=*i;
        }else if(*i>maxpositive3){
            maxpositive3=*i;
        }
        if(*i<maxnegative1){
            maxnegative2=maxnegative1;
            maxnegative1=*i;
        }
        else if(*i<maxnegative2){
            maxnegative2=*i;
        }
    }
    return max(maxpositive3*maxpositive2*maxpositive1, maxpositive1*maxnegative1*maxnegative2);
}
int main(){
    int n;
    cin>>n;
    int data;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>data;
        v.push_back(data);
        
    }
    cout<<solve(v)<<"\n";
    return 0;
}
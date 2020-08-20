#include<bits/stdc++.h>

using namespace std;

map<int, int> solve(vector<int> arr){
    map<int, int> hash;
    stack<int> s;
    for(int i=0;i<arr.size();i++){
        if(s.empty()){
            s.push(i);
        }
        else if(arr[i]>=arr[s.top()]){
            s.push(i);
        }
        else{
            if(s.size()>=2){
                int end=s.top(), start;
                s.pop();
                while(!s.empty()){
                    start=s.top();
                    s.pop();
                }
                s.push(i);
                hash[start]=end;
            }
            else{
                s.pop();
                s.push(i);
            }
        }
    }
    if(!s.empty()){
        if(s.size()>=2){
            int end=s.top(), start;
            s.pop();
            while(!s.empty()){
                start=s.top();
                s.pop();
            }
            hash[start]=end;
        }
        else{
            s.pop();
        }
    }
    return hash;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int, int> ans=solve(arr);
        if(ans.size()==0){
            cout<<"No Profit\n";
        }
        else{
            for(auto i=ans.begin();i!=ans.end();i++){
                cout<<"("<<i->first<<" "<<i->second<<") ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}
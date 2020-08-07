#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int s){
    int i=0, sum=-1, start=-1, end=-1;
    while(start<=end){
        if(sum==s){
            cout<<start+1<<" "<<end+1<<"\n";
            return;
        }
        else if(sum>s){
            sum-=arr[start];
            start++;
            if(i!=arr.size() && start>end){
                start=-1;
                end=-1;
            }
        }
        else if(sum<s && i==arr.size()){
            break;
        }
        else{
                if(sum==-1){
                sum=0;
                }
                sum+=arr[i];
                end=i;
                if(start==-1){
                    start=i;
                }
                i++;
        }
    }
    if(sum==s){
            cout<<start+1<<" "<<end+1<<"\n";
            return;
    }
    cout<<-1<<endl;
    return;
}
int main(){
    int t, n, s;
    cin>>t;
    while(t-- >0){
        cin>>n>>s;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        solve(v, s);
    }
    return 0;
}
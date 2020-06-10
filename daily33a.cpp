//Sort the numbers according to their sum of digits.
#include <bits/stdc++.h> 
using namespace std;

void solve(int* arr, int n){
    int i;
    vector<pair<int, int>>v;
    for(i=0;i<n;i++){
        int sum=0;
        int temp=arr[i];
        while(arr[i]>0){
            int rem=arr[i]%10;
            sum=sum+rem;
            arr[i]/=10;
        }
        v.push_back(make_pair(sum,temp));
    }
    sort(v.begin(), v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i].second<<" ";
    }
    
    cout<<"\n";
}
int main() 
{  
    int n;
    cin>>n;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr, n);
    return 0;
} 

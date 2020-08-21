#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n-2;i=i+2){
        if((arr[i]^arr[i+1])==0){
            continue;
        }
        else{
            return arr[i];
        }
    }
    return arr[n-1];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<solve(arr)<<endl;
	}
	return 0;
}
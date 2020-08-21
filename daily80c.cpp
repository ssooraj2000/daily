#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr1, vector<int> arr2, int k){
    int i=0, j=0, count=0;
    int ans=-1;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            count++;
            if(count==k){
                ans=arr1[i];
                break;
            }
            i++;

        }
        else{
            count++;
            if(count==k){
                ans=arr2[j];
                break;
            }
            j++;
        }
        
    }
    if(ans!=-1){
        return ans;
    }
    while(i<arr1.size()){
        count++;
        if(count==k){
            ans=arr1[i];
            break;
        }
        i++;

    }
    while(j<arr2.size()){
        count++;
        if(count==k){
            ans=arr2[j];
            break;
        }
        j++;

    }
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, m, k;
	    cin>>n>>m>>k;
	    vector<int> arr1(n);
        vector<int> arr2(m);

	    for(int i=0;i<n;i++){
	        cin>>arr1[i];
	    }
        for(int i=0;i<m;i++){
	        cin>>arr2[i];
	    }
	    cout<<solve(arr1, arr2, k)<<endl;
	}
	return 0;
}
//Given an array of integers, find out whether there are two distinct indices i and j in the array such that the absolute difference between nums[i] and nums[j] is at most t and the absolute difference between i and j is at most k.
#include<iostream>
#include<cstdlib>
using namespace std;

int solve(int* nums,int n,int t, int k){
	int i,j;
	for(i=0;i<sizeof(nums)-2;i++){
		for(j=i+1;j<sizeof(nums)-1;j++)
		{
			if(abs(nums[i]-nums[j])<=t && abs(i-j)<=k){
				return 1;
			}
		}

	}
	return 0;
}

int main(){
	int t,k;
	int nums[]={1,2,3,1};
	cin>>t;
	cin>>k;
	if(solve(nums,sizeof(nums)/sizeof(int),t,k)){
		cout<< "True";
	}
	else{
		cout<< "false";
	}
	return 0;
	
}
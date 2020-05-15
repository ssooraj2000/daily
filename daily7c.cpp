//Given an array consisting of positive and negative integers, find the length of the longest continuous subset whose sum is zero. 

//better solution will be with hash map storing sum till particular index and the index  
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n;
	cin>>n;
	int* arr=(int*)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int j,sum,len,flag=0;
	for(i=0;i<n;i++){
		if(arr[i]==0){
			cout<<1<<"\n";
		}
		sum=0;
		len=0;
		flag=0;
		for(j=i;j<n;j++){
			sum+=arr[j];
			len+=1;
			if(sum==0){
			cout<<len<<"\n";
			flag=1;
			}
		}
		if(flag==1){
			break;
		}
	}
	return 0; 
} 


//
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
	int index;
	for(i=0;i<n;i++){
		if(arr[i]>0){
			index=arr[i]-1;
			if(arr[index]>0){
				arr[i]=arr[index];
				arr[index]=-1;
				i--;
			}
			else{
				arr[index]--;
				arr[i]=0;
			}
		}
		else{
			continue;
		}
	}
	for(i=0;i<n;i++){
		cout<<i+1<<"->"<<abs(arr[i])<<"\n";
	}
	return 0; 
} 


//Google Coding Interview 
// You are given with an array of integers that contain numbers in random order. Write a program to find and return the number which occurs maximum times in the given input.If more than one element occurs same number of times in the input, return the element which is present in the input first. 
// Input :132 12 2 11 12 2 1 2 2 11 1226 
// Output : 2 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n,i,num;
	cin>>n;
	int* arr=(int*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=0;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int **countarr=(int**)calloc(max+1,sizeof(int*));
	for(i=0;i<=max;i++){
		countarr[i]=(int*)calloc(2,sizeof(int));
	}
	for(i=0;i<n;i++){
		if(countarr[arr[i]][0]==0){
			countarr[arr[i]][0]++;
			countarr[arr[i]][1]=i;
			
		}
		else{
			countarr[arr[i]][0]++;
		}
	}
	int max_re_ele=countarr[0][0];
	int max_re_ele_loc=countarr[0][1];
	for(i=1;i<=max;i++){
		if(countarr[i][0]>max_re_ele){
			max_re_ele=countarr[i][0];
			max_re_ele_loc=countarr[i][1];
		}
		else if(countarr[i][0]==max_re_ele){
			if(countarr[i][1]<max_re_ele_loc){
					max_re_ele=countarr[i][0];
					max_re_ele_loc=countarr[i][1];			
			}
		}
	}
	cout<<"Ans: "<<arr[max_re_ele_loc]<<"\n";
	return 0; 
} 


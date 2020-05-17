//Maximum product of 4 adjacent elements of a matrix

#include <bits/stdc++.h> 
using namespace std; 


void disp(int* arr, int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<"\n";
}
int* findmax(int** maxarr){
	int i,max=0;
	int* maxpt;
	for(i=0;i<8;i++){
		if(maxarr[i][0]!=-1){
			if(maxarr[i][0]>max){
				max=maxarr[i][0];
				maxpt=maxarr[i];
			}
		}
	}
	return maxpt;
}
int solve(int** arr,int n, int i, int j, int count){
	int** maxarr=(int**)malloc(sizeof(int*)*8);
	int* maxpt;
	int k;
	arr[i][j]=-1;
	for(k=0;k<8;k++){
		maxarr[k]=(int*)malloc(sizeof(int)*3);
	}
	if((i-1)>=0 && (i-1)<n && (j-1)>=0 && (j-1)<n && arr[i-1][j-1]!=-1){
			
				maxarr[0][0]=arr[i-1][j-1];
				maxarr[0][1]=i-1;
				maxarr[0][2]=j-1;
			
	}
	else{
			maxarr[0][0]=-1;
		}

	if((i)>=0 && (i)<n && (j-1)>=0 && (j-1)<n && arr[i][j-1]!=-1){
		
		maxarr[1][0]=arr[i][j-1];
		maxarr[1][1]=i;
		maxarr[1][2]=j-1;	
		
	}
	else{
		maxarr[1][0]=-1;
	}
	if((i+1)>=0 && (i+1)<n && (j-1)>=0 && (j-1)<n && arr[i+1][j-1]!=-1){
		
		maxarr[2][0]=arr[i+1][j-1];
		maxarr[2][1]=i+1;
		maxarr[2][2]=j-1;	
		
	}
	
	else{
		maxarr[2][0]=-1;
	}

	if((i+1)>=0 && (i+1)<n && (j)>=0 && (j)<n && arr[i+1][j]!=-1){
		maxarr[3][0]=arr[i+1][j];
		maxarr[3][1]=i+1;
		maxarr[3][2]=j;
	}
	else{
		maxarr[3][0]=-1;
	}

	if((i+1)>=0 && (i+1)<n && (j+1)>=0 && (j+1)<n && arr[i+1][j+1]!=-1){
		maxarr[4][0]=arr[i+1][j+1];
		maxarr[4][1]=i+1;
		maxarr[4][2]=j+1;
	}
	else{
		maxarr[4][0]=-1;
	}

	if((i)>=0 && (i)<n && (j+1)>=0 && (j+1)<n && arr[i][j+1]!=-1){
		maxarr[5][0]=arr[i][j+1];
		maxarr[5][1]=i;
		maxarr[5][2]=j+1;
	}
	else{
		maxarr[5][0]=-1;
	}

	if((i-1)>=0 && (i-1)<n && (j+1)>=0 && (j+1)<n && arr[i-1][j+1]!=-1){
		maxarr[6][0]=arr[i-1][j+1];
		maxarr[6][1]=i-1;
		maxarr[6][2]=j+1;
	}
	else{
		maxarr[6][0]=-1;
	}

	if((i-1)>=0 && (i-1)<n && (j)>=0 && (j)<n && arr[i-1][j]!=-1){
		maxarr[7][0]=arr[i-1][j];
		maxarr[7][1]=i-1;
		maxarr[7][2]=j;
	}
	else{
		maxarr[7][0]=-1;
	}
	maxpt=findmax(maxarr);
	count++;
	if(count==3){
		// cout<<"hi\n";
		// cout<<maxpt[0]<<"\n";
		return maxpt[0];
	}
	// cout<<maxpt[0]<<"\n";

	return maxpt[0]*solve(arr,n, maxpt[1],maxpt[2], count);
}
void copyarr(int** temparr, int** arr,int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			temparr[i][j]=arr[i][j];
		}
	}
}
int main() 
{ 

	int n;
	cin>>n;
	int** arr=(int**)malloc(sizeof(int*)*n);
	
	int i,j;
	for(i=0;i<n;i++){
		arr[i]=(int*)malloc(sizeof(int)*n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int max=0, prod;
	int** temparr=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++){
		temparr[i]=(int*)malloc(sizeof(int)*n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			copyarr(temparr, arr, n);
			//temparr[i][j]=-1;
			prod=temparr[i][j]*solve(temparr,n, i, j,0);
			// cout<<prod<<" ";
			if(prod>max){
				max=prod;
			}
		}
	}
	cout<<"ANS: "<<max<<"\n";
	return 0; 
} 


//Given a number, change all bits at even positions to 0.
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n;
	cin>>n;
	int num=0;
	int mul=1;
	while(n>0){
		num=mul*(n%2)+num;
		mul*=10;
		n=n/2;
	}
	int len=to_string(num).length();
	int* arr=(int*)malloc(sizeof(int)*len);
	int i;
	for (i = len-1; i >=0; i--)
	{
		arr[i]=num%10;
		num/=10;
	}
	for(i=0;i<len;i++){
		if(i%2==0){
			arr[i]=0;
		}
	}
	n=0;
	int pwr=0;
	for(i=len-1;i>=0;i--){
		n=n+pow(2, pwr)*arr[i];
		pwr++;
	}
	cout<<n<<"\n";

	
	return 0; 
} 


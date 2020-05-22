//Given a number (N) of 32 bit size you are required to print the number you get by inverting bits in its binary representation (i.e. 1 is made 0 and 0 is made 1). In other words we are required to negate(~) the number.
#include <bits/stdc++.h> 
using namespace std; 

unsigned int solve(unsigned int n){
	int i;
	unsigned int num=0;
	for(i=31;i>=0;i--){
		if((n & 1<<i)==0){
			num+=pow(2,i);
		}
	}
	return num;
}
int main() 
{ 
	unsigned int n;
	cin>>n;
	cout<<solve(n)<<"\n";
	return 0; 
} 


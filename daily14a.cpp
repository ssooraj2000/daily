//Given a number N and the task is to print the first and last digit of N.
#include <bits/stdc++.h> 
using namespace std; 


void solve(int n){
	int first;
	int last=n%10;
	

	while(n>0){
		first=n%10;
		n/=10;
	}	
	cout<<first<<" "<<last<<"\n";

	
}
int main() 
{ 
	int n;
	cin>>n;

solve(n);
	

	return 0; 
} 


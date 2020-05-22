//Given the value of n, we need to find the sum of the series where i-th term is sum of first i natural numbers.
#include <bits/stdc++.h> 
using namespace std; 

int solve(int n){
	return (n*(n+1)*(n+2))/6;
}
int main() 
{ 
	int n;
	cin>>n;

	cout<<solve(n)<<"\n";

	return 0; 
} 


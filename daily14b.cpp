//Amicable numbers are two different numbers so related that the sum of the proper divisors of each is equal to the other number. (A proper divisor of a number is a positive factor of that number other than the number itself.
#include <bits/stdc++.h> 
using namespace std; 


void solve(int a, int b){
	int i;
	int count=0;
	for(i=1;i<=a/2;i++){
		if(a%i==0 && i!=a){
			count+=i;
		}
	}
	if(count==b){
		count=0;
		for(i=1;i<=b/2;i++){
			if(b%i==0 && i!=b){
				count+=i;
			}
		}
		if(count==a){
			cout<<"True\n";
			return;
		}
	}
	
		cout<<"False\n";
}
int main() 
{ 
	int a,b;
	cin>>a>>b;

solve(a,b);
	

	return 0; 
} 


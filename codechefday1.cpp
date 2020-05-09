#include<iostream>
#include<cstdlib>

using namespace std;

string toLowerCase(string str){

	int i;
	for(i=0;i<str.length();i++){
		if(str[i]>=65 && str[i]<= 90){
			str[i]=str[i]+32;
		}
	}
	return str;
}

int main(){
	string str;
	cin >> str;
	cout << toLowerCase(str)<<"\n";
	
}
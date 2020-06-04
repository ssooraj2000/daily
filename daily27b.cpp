//There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we’ll learn how to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.
#include <bits/stdc++.h> 
using namespace std; 

float solve(float num){
    string s=to_string(num);

    int i;
    for(i=0;i<s.length();i++){
        if(s[i]=='.'){
            break;
        }
    }
    if((i+4)>s.length()){
        return num;
    }
    else{
        if((s[i+4]-'0')>=5){
            s=s.substr(0,i+4);
            num=stof(s);
            num+=0.001;
        }
    }
    return num;
}
int main() 
{ 
	float a, b;
    cin>>a;
    cin>>b;
    cout<<a/b<<" ";
    cout<<solve(a/b)<<"\n";
	return 0; 
} 


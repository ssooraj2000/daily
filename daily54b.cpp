//Given a number s in their binary representation. Return the number of steps to reduce it to 1 under the following rules:
//if even, divide by 2
//if odd, add 1
#include <bits/stdc++.h> 
using namespace std;

int solve(string s){
    int i;
    int num=0, j, count=0;
    while(s!="1"){
        num=0;
        for(i=s.length()-1,j=0;i>=0;i--, j++){
            if(s[i]=='1'){
                num+=(pow(2, j));
            }
        }
        if(num%2==0){
            s=s.substr(0, s.length()-1);
            // cout<<s<<"\n";
        }
        else{

            char prev='1';
            for(i=s.length()-1;i>=0;i--){
                if(prev=='1'){
                    if(s[i]=='1'){
                        s[i]='0';
                        prev='1';
                    }
                    else{
                        s[i]='1';
                        prev='0';
                    }
                }
                
            }
            if(prev=='1'){
                string temp="1";
                temp.append(s);
                s=temp;
            }
            // cout<<s<<"\n";
        }
        count++;
    }
    return count;
}

int main() 
{   
    string s;
    cin>>s;
    cout<<solve(s)<<"\n";
    return 0;

} 


//This problem was asked by Amazon.

// Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as a single count and character. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".


#include <bits/stdc++.h> 
using namespace std;

string encode(string str){
    map<int,int>hash;
    set<char>s;
    int i, mark=0;
    for(i=0;i<str.length();i++){
        if(s.find(str[i])!=s.end()){
            hash[mark]++;  
        }
        else{
            s.clear();
            s.insert(str[i]);
            mark=i;            
            hash[mark]++;  
        }

    }
    
    string encd;
    for(i=0;i<str.length();){
        if(hash[i]>=1){
            encd.push_back(hash[i]+'0');
            encd.push_back(str[i]);
            i+=hash[i];
        }
    }
    return encd;
}
string decode(string str){
    string decd;
    int i,j;
    for(i=0;i<str.length()-1;i=i+2){
        for(j=0;j<str[i]-'0';j++){
            decd.push_back(str[i+1]);
        }
    }
    return decd;
}
int main() 
{  
    string str;
    cin>>str;

    cout<<encode(str)<<"\n";
    cin>>str;
    cout<<decode(str)<<"\n";
    return 0;
} 


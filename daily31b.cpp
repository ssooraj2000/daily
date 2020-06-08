// This problem was asked by Amazon.

// Given an integer k and a string s, find the length of the longest substring that contains at most k distinct characters.

// For example, given s = "abcba" and k = 2, the longest substring with k distinct characters is "bcb".
#include <bits/stdc++.h> 
using namespace std;

void solve(string str, int k){
    set<char> s;
    map<string, int> hash;
    int i, count=0, begin=-1, end;
    for(i=0;i<str.length();i++){
        if(s.find(str[i])!=s.end()){
            if(count<=k){
                // cout<<"hi1\n";
                end=i;
            }
        } 
        else{
            if(count<k){
                s.insert(str[i]);
                count++;
                if(begin==-1){
                    // cout<<"hi2\n";

                    begin=i;
                }
                else{
                    // cout<<"hi3\n";

                    end=i;
                }
            }
            else{   
                                // cout<<"hi4\n";

                // hash[end-begin+1]=str.substr(begin, end-begin+1);
                hash[str.substr(begin, end-begin+1)]=end-begin+1;
                // cout<<str.substr(begin, end-begin+1)<<"\n";
                // cout<<i<<" "<<begin<<" "<<end<<"\n";
                s.clear();
                i=begin;
                begin++;
                count=0;
                // cout<<i<<" "<<begin<<" "<<end<<"\n";
            }
        }
        if(count==k && i==str.length()-1){
                hash[str.substr(begin, end-begin+1)]=end-begin+1;
                // cout<<str.substr(begin, end-begin+1)<<"\n";

        } 

    }


    cout<<"Ans: \n";
    int max_len=0;
    for(auto j=hash.begin();j!=hash.end();j++){
        if(j->second>max_len){
            max_len=j->second;
        }
    }
    for(auto j=hash.begin();j!=hash.end();j++){ 
        if(j->second==max_len){
            cout<<j->first<<"\n";
        }
    }
}
int main() 
{ 
    string s;
    cin>>s;
    int k;
    cin>>k;
    if(k<=0){
        cout<<" "<<"\n";
        return 0;

    }
    solve(s, k);
    return 0;
} 

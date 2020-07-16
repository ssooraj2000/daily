//Given a string s and an integer k.
// Return the maximum number of vowel letters in any substring of s with length k.
#include <bits/stdc++.h> 
using namespace std;

int solve(string s, int k)
{
    int i, j,count, max=0;
    for(i=0;i+k-1<s.length();i++){
        count=0;
        for(j=i;j<i+k;j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
            }
        }
        if(count>max){
            max=count;
        }
    }    
    return max;
}
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;

    cout<<solve(s, k)<<"\n";
    
    return 0;
}
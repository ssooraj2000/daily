Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.
 #include <bits/stdc++.h> 
using namespace std; 

void solve(string s,int n){
    int i,csmall=0, ccaps=0;
    string small, caps;
    for(i=0;i<n;i++){
        if(s[i]>=97 && s[i]<=122){
            small.push_back(s[i]);
            csmall++;
        }
        else{
            caps.push_back(s[i]);
            ccaps++;
        }
    }
    sort(small.begin(), small.end());
    sort(caps.begin(), caps.end());
    int sm=0, cp=0;
    for(i=0;i<n;i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]=small[sm++];
        }
        else{
            s[i]=caps[cp++];
        }
    }
    cout<<s;
}

int main() 
{ 
    string s;
    cin>>s;
    solve(s,s.length());
	return 0; 
} 


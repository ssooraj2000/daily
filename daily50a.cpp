//This problem was asked by Facebook.

// Implement regular expression matching with the following special characters:

// . (period) which matches any single character
// * (asterisk) which matches zero or more of the preceding element
#include <bits/stdc++.h> 
using namespace std;

bool solve(string r, string s){
    int prev_star_loc=-1;
    int i=0, j=0;
    // for(i=0;i<r.length();i++){
    //     if(r[i]=="*"){
    //         prev_special_char=r[i];
    //     }
    //     else if(r[i]!=s[j] && r[i]=="."){
    //         j++;
    //         prev_special_char=".";
    //     }
    //     else if(r[i]!=s[j] && r[i]=="*"){
    //         j++;
    //         prev_special_char="*";
    //     }
    // }

    while(i<r.length() && j<s.length()){
        if(i==r.length()-1 && j<s.length()-1 && prev_star_loc!=-1){
            i=prev_star_loc+1;
            j++;
        }
        else if(r[i]==s[j]){
            i++;j++;
        }
        else if(r[i]!=s[j] && r[i]=='.'){
            i++;j++;
        }
        else if(r[i]!=s[j] && r[i]=='*'){
            prev_star_loc=i;
            i++;
        }
        else if(r[i]!=s[j] && prev_star_loc!=-1){
            j++;
            i=prev_star_loc+1;
        }
        else{
            return false;
        }
        
    }
    if(j<s.length() && r[i-1]=='*'){
        return true;
    }
    else if(i==r.length() && j==s.length()){
        return true;
    }
    else{
        return false;
    }
    

    
}

int main() 
{   
    
    string r;
    cin>>r;
    string s;
    cin>>s;
    if(s.length()<r.length()){
        int i;
        string temp;
        for(i=0;i<r.length()-s.length();i++){
            temp.push_back(' ');
        }
        s.append(temp);
    }
    if(solve(r, s)){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
    return 0;
} 


//Rearrange characters in a string such that no two adjacent are same.
#include <bits/stdc++.h> 
using namespace std;

struct Key{
    int count;
    char c;
    public:
        Key(int _count, char _c){
            count=_count;
            c=_c;
        }
        bool operator<(const Key &k) const
        { 
            return count < k.count; 
        } 
};
string solve(string s){
    int n=s.length();
    priority_queue<Key>pq;
    int* count=(int*)malloc(sizeof(int)*26);
    int i;
    memset(count, 0, 26);
    for(i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
    for(i=0;i<26;i++){
        if(count[i]>0){
            pq.push(Key{count[i],char(i+'a')});
        }
    }
    Key prev{0, '*'};
    s="";
    while(!pq.empty()){
        Key r=pq.top();
        s.push_back(r.c);
        r.count--;
        pq.pop();
        if(prev.count!=0){
            pq.push(prev);
        }
        prev=r;
    }
    if(n!=s.length()){
        return "not possible";
    }
    return s;

}
int main() 
{   
    string s;
    cin>>s;
    cout<<solve(s)<<"\n";
    return 0;
} 
#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    bool end_of_word=false;
    struct node* child[26]={NULL};
}TRIE;
void insert(TRIE** t, string data, int pos){
    if(!(*t)->child[data[pos]-97]){
        TRIE* temp=(TRIE*)malloc(sizeof(TRIE));
        (*t)->child[data[pos]-97]=temp;
        if(pos==data.size()-1){
            temp->end_of_word=true;
            return;
        }
    }
    if(pos==data.size()-1){
        (*t)->child[data[pos]-97]->end_of_word=true;
        return;
    }
    if(pos+1<data.size()){
        insert(&((*t)->child[data[pos]-97]), data, pos+1);
    }
}
vector<string> disp(TRIE* t, string s, vector<string> arr){
    
    for(int i=0;i<26;i++){
        if(t->child[i]){
            if(t->child[i]->end_of_word){
                string c=s;
                c.push_back(char(i+97));
                arr.push_back(c);
                //cout<<s<<char(i+97)<<"\n";
            }
            string temp=s;
            temp.push_back(char(i+97));                     
            arr=disp(t->child[i], temp, arr);
        }
    }
    return arr;
}
vector<string> autoComplete(TRIE* t, string p){
    TRIE* temp=t;
    for(int i=0;i<p.size();i++){
        if(temp->child[p[i]-97]){
            temp=temp->child[p[i]-97];
        }
        else{
            cout<<"No string found\n";
            break;
        }
    }
    cout<<"Ans:\n";
    vector<string> arr;
    return disp(temp, p, arr);
}
int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    TRIE* t=(TRIE*)malloc(sizeof(TRIE));
    t->end_of_word=false;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        insert(&t, arr[i], 0);
    }
    string p;
    cout<<"Enter the prefix: ";
    cin>>p;
    vector<string> ans=autoComplete(t, p);
    for(auto x: ans){
        cout<<x<<"\n";
    }
    // disp(t, "");
}
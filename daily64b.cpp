//This problem was asked by Microsoft.

// Suppose an arithmetic expression is given as a binary tree. Each leaf is an integer and each internal node is one of '+', '−', '∗', or '/'.

// Given the root to such a tree, write a function to evaluate it.
#include <bits/stdc++.h> 
using namespace std;

typedef struct node{
    char data;
    struct node* left;
    struct node* right;
}TREE;

void insert(TREE** tree, char data){
    if((*tree)==NULL){
        (*tree)=(TREE*)malloc(sizeof(TREE));
        (*tree)->data=data;
        (*tree)->left=(*tree)->right=NULL;
        return;
    }
    string s;
    cout<<"left or right of "<<(*tree)->data<<":";
    cin>>s;
    if(!(s.compare("left"))){
        insert(&((*tree)->left), data);
    }
    else{
        insert(&((*tree)->right), data);
    }
}

void solve(TREE* tree){
    if(tree){
        solve(tree->left);
        solve(tree->right);
        if(tree->data=='+'){
                    // cout<<tree->data<<" ";

            tree->data=(char)(((tree->left->data-'0')+(tree->right->data-'0'))+'0');
        }
        else if(tree->data=='-'){
                    // cout<<tree->data<<" ";

            tree->data=(char)(((tree->left->data-'0')-(tree->right->data-'0'))+'0');
        }
        else if(tree->data=='*'){
                    // cout<<tree->data<<" ";

            tree->data=(char)(((tree->left->data-'0')*(tree->right->data-'0'))+'0');
        }
        else if(tree->data=='/'){
                    // cout<<tree->data<<" ";

            tree->data=(char)(((tree->left->data-'0')/(tree->right->data-'0'))+'0');
        }
        else{
            // cout<<tree->data-'0'<<" ";
        }
    }
}
int main() 
{   
    TREE* tree=NULL;
    int n,i;
    char data;
    string temp_data;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp_data;
        if(temp_data=="+" || temp_data=="-" || temp_data=="/" || temp_data=="*"){
            data=temp_data[0];
        }else{
            data=stoi(temp_data)+'0';
        }
        insert(&tree, data);
    }
    int ans=0;
    solve(tree);
    cout<<tree->data-'0'<<"\n";
    return 0;
} 
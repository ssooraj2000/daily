//This problem was asked by Dropbox.

// Given the root to a binary search tree, find the second largest node in the tree.
#include <bits/stdc++.h> 
using namespace std;

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}TREE;

void insert(TREE** tree, int data){
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

int solve(TREE* tree){
    TREE *cur=tree, *prev;
    while(cur->right){
        prev=cur;
        cur=cur->right;
    }
    if(cur->left){
        return cur->left->data;
    }
    return prev->data;
}
int main() 
{   
    TREE* tree=NULL;
    int n, data, i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>data;
        insert(&tree, data);
    }

    cout<<solve(tree)<<"\n";
    return 0;
} 


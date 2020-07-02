//You are given an array of integers. First of all , You have to form a binary search tree from given integers. Now you have provided two integers k1 and k2. You have to print all nodes of BST within the range k1 and k2 (including k1 and k2).
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
    // cout<<"left or right of "<<(*tree)->data<<":";
    // cin>>s;
    if(data>(*tree)->data){
        s="right";
    }
    else{
        s="left";
    }
    if(!(s.compare("left"))){
        insert(&((*tree)->left), data);
    }
    else{
        insert(&((*tree)->right), data);
    }
}

void solve(TREE* tree, int k1, int k2){
    if(tree){
        if(tree->data>k1){
            solve(tree->left, k1, k2);
        }
        if(tree->data>=k1 && tree->data<=k2){
            cout<<tree->data<<" ";
            
        }
        if(tree->data<k2){
            solve(tree->right, k1, k2);
        }
    }
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
    cout<<"Enter range:";
    int k1, k2;
    cin>>k1>>k2;
    
    solve(tree, k1, k2);

    cout<<"\n";
    return 0;
} 

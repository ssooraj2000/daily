//Given a binary tree, return the tilt of the whole tree. The tilt of a tree node is defined as the absolute difference between the sum of all left subtree node values and the sum of all right subtree node values. Null nodes are assigned tilt to be zero. Therefore, tilt of the whole tree is defined as the sum of all nodes’ tilt.
#include <bits/stdc++.h> 
using namespace std;

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
    int tilt;
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
int total_sum(TREE* tree){
    if(tree){
        return tree->data+total_sum(tree->left)+total_sum(tree->right);
    }else{
        return 0;
    }
}
void find_tilt(TREE** tree){
    
    if(*tree){
        int left=total_sum((*tree)->left);
        int right=total_sum((*tree)->right);
        (*tree)->tilt=abs(left-right);
        if((*tree)->left){
            find_tilt(&((*tree)->left));

        }
        if((*tree)->right){
            find_tilt(&((*tree)->right));
        }

    }
    

    
}
void check(TREE* tree){
    if(tree){
        cout<<tree->data<<" "<<tree->tilt<<"\n";
        check(tree->left);
        check(tree->right); 
    }
}
int solve(TREE* tree){
    if(!tree){
        return 0;
    }
    return tree->tilt+solve(tree->left)+solve(tree->right);
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
    find_tilt(&tree);
    check(tree);
    cout<<solve(tree)<<"\n";
    return 0;
} 
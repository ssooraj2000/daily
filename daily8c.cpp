//Given a number, change all bits at even positions to 0.
#include <bits/stdc++.h> 
using namespace std; 

typedef struct node{
	struct node* left;
	struct node* right;
	int data;
}NODE;
void rotate_left(int* arr, int n){
	int i;
	int temp=arr[0];
	for(i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
void disp(int* arr, int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<"\n";
}
void insert(NODE** root, int data){
	if(*root==NULL){
		*root=(NODE*)malloc(sizeof(NODE));
		(*root)->data=data;
		(*root)->right=(*root)->left=NULL;
		return;
	}
	if(data>(*root)->data){
		insert(&((*root)->right), data);
	}
	else{
		insert(&((*root)->left), data);
	}
}
void preorder(NODE* root, int* num){
	if(root){
		(*num)=(*num) * 10 + root->data;
		preorder(root->left, num);
		preorder(root->right, num);
	}
}
void postorder(NODE* root, int* num){
	if(root){
		
		postorder(root->left, num);
		postorder(root->right, num);
		(*num)=(*num) * 10 + root->data;
	}
}
void inorder(NODE* root, int* num){
	if(root){
		
		inorder(root->left, num);
		(*num)=(*num) * 10 + root->data;
		inorder(root->right, num);
	}
}
int* array_insert_into_bst(int* arr, int n){
	NODE* bst=NULL;
	int i;
	int* ppi=(int*)malloc(sizeof(int)*3);

	for(i=0;i<n;i++){
		insert(&bst,arr[i]);
		
	}
	preorder(bst, &ppi[0]);
	postorder(bst, &ppi[1]);
	inorder(bst, &ppi[2]);

	return ppi;
}
int main() 
{ 

	int n;
	cin>>n;
	int* arr=(int*)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int temp;
	int* ppi;
	set<int> pre;
	set<int> post;
	set<int> in;

	int count=0;
	int flag;
	for(i=0;i<n;i++){
		flag=0;
		ppi=array_insert_into_bst(arr,n);
		// disp(ppi, 3);
		if(pre.find(ppi[0])!=pre.end()){
			flag++;
		}
		if(post.find(ppi[1])!=post.end()){
			flag++;
		}
		if(in.find(ppi[2])!=in.end()){
			flag++;
		}
		if(flag<2){
			count++;
			pre.insert(ppi[0]);
			post.insert(ppi[1]);
			in.insert(ppi[2]);
		}

		temp=arr[n-1];
		arr[n-1]=arr[n-2];
		arr[n-2]=temp;

		ppi=array_insert_into_bst(arr,n);
		// disp(ppi, 3);
		flag=0;
		if(pre.find(ppi[0])!=pre.end()){
			flag++;
		}
		if(post.find(ppi[1])!=post.end()){
			flag++;
		}
		if(in.find(ppi[2])!=in.end()){
			flag++;
		}
		if(flag<2){
			count++;
			pre.insert(ppi[0]);
			post.insert(ppi[1]);
			in.insert(ppi[2]);
		}


		temp=arr[n-1];
		arr[n-1]=arr[n-2];
		arr[n-2]=temp;

		rotate_left(arr,n);

	}

	cout<<"ANS: "<<count<<"\n";
	
	return 0; 
} 


//Given an array nums of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i]..
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std; 

typedef struct node{
    int data;
    struct node* link;
}NODE;
void insert(int data, int loc,int n, NODE* hash){
    NODE* i;
    for(int j=0;j<n;j++){
        if(j!=loc){
            i=&hash[j];
            if(i->link==NULL){
                    NODE* temp=(NODE*)malloc(sizeof(NODE));
                    temp->data=data;
                    temp->link=NULL;
                    i->link=temp;   
                }
                else{
                    while(i->link){
                        i=i->link;
                    }    
                    NODE* temp=(NODE*)malloc(sizeof(NODE));
                    temp->data=data;
                    temp->link=NULL;
                    i->link=temp;  
    }
        }
    }
    
}
int multiply(NODE* hash){
    NODE* i=hash;
    NODE* j;
    int mul=1;
    for(j=i->link;j;j=j->link){
        mul=mul*(j->data);
    }
    return mul;
}
int main() 
{ 
    int n;
    cin >> n;
    int *arr=(int*)malloc(sizeof(int)* n);
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    NODE *hash=(NODE*)malloc(sizeof(NODE)* n);
    for(i=0;i<n;i++){
        insert(arr[i],i,n,hash);
    }

    // cout<<(hash[0].link)->data;
    for(i=0;i<n;i++){
        arr[i]=multiply(&hash[i]);
        cout<<arr[i]<<"\n";
    }
    
    return 0;
} 
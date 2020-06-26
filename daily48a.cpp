//This problem was asked by Google.

// Given a singly linked list and an integer k, remove the kth last element from the list. k is guaranteed to be smaller than the length of the list.
#include <bits/stdc++.h> 
using namespace std;

typedef struct node{
    struct node* link;;
    int data;

}NODE;

NODE* solve(NODE* list, int k){
    NODE* i;
    int count=0;
    for(i=list;i;i=i->link){
        count++;
    }    
    int dif;
    NODE* prev;
    dif=list->link-list;
    prev=list+(count-k-1)*dif;
    NODE* node_to_delete=list+(count-k)*dif;
    prev->link=node_to_delete->link;
    return list;
}
void insert(NODE** list, int data){
    if(*list==NULL){
        *list=(NODE*)malloc(sizeof(NODE));
        (*list)->data=data;
        (*list)->link=NULL;
        return;
    }
    NODE* i;
    NODE* temp=(NODE*)malloc(sizeof(NODE));
    temp->data=data;
    temp->link=NULL;
    for(i=*list;i->link;i=i->link);
    i->link=temp;
    return;
}

int main() 
{   
    NODE* list=NULL;
    int n;
    cin>>n;
    int i, num;
    for(i=0;i<n;i++){
        cin>>num;
        insert(&list, num);
    }
    NODE* j;

    int k;
    cin>>k;
    list=solve(list, k);
    for(j=list;j;j=j->link){
        cout<<j->data<<" ";
    }
    cout<<"\n";
    return 0;
} 


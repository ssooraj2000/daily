// This problem was asked by Google.

// Given two singly linked lists that intersect at some point, find the intersecting node. The lists are non-cyclical.
#include <bits/stdc++.h> 
using namespace std;

typedef struct node{
    int data;
    struct node* link;
}NODE;
NODE* solve(NODE* list1, NODE* list2){
    NODE* i;
    NODE* prev;
    prev=list1;
    for(i=list1->link;i!=NULL;i=i->link){
        prev->link=NULL;
        prev=i;
    }
    int l=0;
    for(i=list2;i->link!=NULL;i=i->link);

    return i;

}  
void insert(NODE** list, int data){
    if((*list)==NULL){
        *list=(NODE*)malloc(sizeof(NODE));
        (*list)->data=data;
        (*list)->link=NULL;
        return;
    }
    NODE* i;
    for(i=*list;i->link!=NULL;i=i->link);
    NODE* temp;
    temp=(NODE*)malloc(sizeof(NODE));
    (temp)->data=data;
    (temp)->link=NULL;
    i->link=temp;
    return;
}
int main() 
{  
    NODE* list1=NULL;
    NODE* list2=NULL;
    insert(&list1, 3);
    insert(&list1, 7);
    insert(&list1, 8);
    insert(&list1, 10);
    
    insert(&list2, 99);
    insert(&list2, 1);
    NODE* i;
    for(i=list1;i->data!=7;i=i->link);
    NODE* j;
    for(j=list2;j->link!=NULL;j=j->link);
    j->link=i;

    i=solve(list1, list2);
    cout<<i->data<<"\n";

    return 0;
} 


#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    struct node* link;
    int data;
}NODE;

void insert(NODE** list, int data){
    NODE* temp=(NODE*)malloc(sizeof(NODE));
    temp->data=data;
    temp->link=NULL;
    if((*list)==NULL){
        (*list)=temp;
        return;
    }
    NODE* i;
    for(i=(*list);i->link;i=i->link);
    i->link=temp;
    return;
}
NODE* solve(NODE* list){
    NODE *prev, *cur, *next;
    prev=NULL, cur=list, next=cur->link;
    while(cur){
        cur->link=prev;
        prev=cur;
        cur=next;
        if(next==NULL){
            continue;
        }
        next=next->link;
    }
    return prev;
}
int main(){
    NODE* list=NULL;
    int n, data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        insert(&list, data);
    }
    list=solve(list);
    for(NODE* i=list;i;i=i->link){
        cout<<i->data<<" ";
    }
    cout<<"\n";
    return 0;
}
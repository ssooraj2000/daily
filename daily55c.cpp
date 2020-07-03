//by mistake referred the method in gfg but understood
//Given a linked list L of N nodes, sorted in ascending order based on the absolute values of its data. Sort the linked list according to the actual values.
#include <bits/stdc++.h> 
using namespace std;

typedef struct node{
    struct node* link;
    int data;
}LIST;

void insert(LIST** list, int data){
    if(*list==NULL){
        *list=(LIST*)malloc(sizeof(LIST));
        (*list)->data=data;
        (*list)->link=NULL;
        return;
    }
    LIST* temp=(LIST*)malloc(sizeof(LIST));
    temp->data=data;
    temp->link=NULL;
    LIST* i;
    for(i=*list;i->link;i=i->link);
    i->link=temp;

}
void sort(LIST* list){
    LIST* prev=list;
    LIST* i;
    for(i=list;i;i=i->link){
        if(i->data>=0){
            prev=i;
            continue;
        }
        else{
            prev->link=i->link;
            i->link=list;
            list=i;
            i=prev;
        }
    }
    for(i=list;i;i=i->link){
        cout<<i->data<<" ";
    }
    cout<<"\n";
}
int main() 
{   
    LIST* list=NULL;
    int n, i, data;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>data;
        insert(&list,data);
    }   
    sort(list);
    return 0;
} 

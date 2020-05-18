//Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

#include <bits/stdc++.h> 
using namespace std; 

typedef struct node{
	struct node* link;
	int data;
}NODE;

void insert(NODE** list, int data){
	if((*list)==NULL){
		(*list)=(NODE*)malloc(sizeof(NODE));
		(*list)->data=data;
		(*list)->link=NULL;
		return;
	}
	NODE* i=(*list);
	while(i->link){
		i=i->link;
	}
	NODE* temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	temp->link=NULL;
	i->link=temp;

}
void display(NODE* list){
	NODE* i=list;
	while(i){
		if(i->link==NULL){
			cout<<i->data<<"\n";
			break;
		}

		cout<<i->data<<"->";
		i=i->link;
	}
}

NODE* sort(NODE* list1, NODE* list2){
	NODE *i,*j,*final, *temp,*prev;
	if(list1->data<list2->data){
		final=list1;
		i=list1->link;
		j=list2;
	}
	else{
		final=list2;
		i=list2->link;
		j=list1;
	}
	prev=final;
	while(i && j){
		if(i->data<=j->data){
			prev->link=i;
			prev=i;
			i=i->link;
		}
		else{
			// temp=i->link;
			if(!temp){

			}
			prev->link=j;
			// i=temp;
			prev=j;
			j=j->link;
		}
	}
	
	while(j){
		prev->link=j;
		prev=j;
		j=j->link;
	}
	while(i){
		prev->link=i;
		prev=i;
		i=i->link;
	}
	return final;
}

int main() 
{ 
	NODE *list1=NULL,*list2=NULL;

	int n;
	cin>>n;
	int i,num;
	for(i=0;i<n;i++){
		cin>>num;
		insert(&list1,num);
	}

	display(list1);
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num;
		insert(&list2,num);
	}	
	display(list2);
	list1=sort(list1, list2);
	display(list1);
	return 0; 
} 


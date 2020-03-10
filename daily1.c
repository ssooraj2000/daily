#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	struct node* link;
	int data;
}NODE;
NODE* insert(NODE* ptr, int data){
	NODE* i;
	NODE* temp;
	if(!ptr){
		ptr=malloc(sizeof(NODE));
		ptr->data=data;
		ptr->link=NULL;
	}
	else{
		for(i=ptr;i->link;i=i->link);
		temp=malloc(sizeof(NODE));
		temp->data=data;
		temp->link=NULL;
		i->link=temp;
	}

	return ptr;
}
NODE* add(NODE* a, NODE* b,NODE* sum){
	NODE *i, *j;
	int s,carry=0;
	i=a,j=b;
	while(i && j){
		s=i->data+j->data+carry;
		if(s>9){
			carry=1;
			s=s%10;
		}
		sum=insert(sum,s);
		i=i->link;
		j=j->link;
	}
	while(i){

		s=i->data+carry;
		if(s>9){
			carry=1;
			s=s%10;
		}
		sum=insert(sum,s);
		i=i->link;
	}
	while(j){
		s=j->data+carry;
		if(s>9){
			carry=1;
			s=s%10;
		}
		sum=insert(sum,s);
		j=j->link;
	}
	if(carry!=0){
		sum=insert(sum,carry);
	}

	return sum;
}
int main(){
	NODE *a=NULL,*b=NULL, *sum=NULL;
		NODE* j;

	int i,n,size;
//	printf("enter size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&n);
		a=insert(a, n);
	}
	for(j=a;j;j=j->link){
		if(!j->link){
			printf("%d\n",j->data);
			break;
		}
		printf("%d->",j->data);
	}
//	printf("enter size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&n);
		b=insert(b, n);
	}
for(j=b;j;j=j->link){
		if(!j->link){
			printf("%d\n",j->data);
			break;
		}
		printf("%d->",j->data);
	}
	sum=add(a,b,sum);
	for(j=sum;j;j=j->link){
		if(!j->link){
			printf("%d\n",j->data);
			break;
		}
		printf("%d->",j->data);
	}
	return 0;
}
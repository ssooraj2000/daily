//Given an array of integers, return indices of the two numbers such that they add up to a specific target.You may assume that each input would have exactly one solution, and you may not use the sameelement twice.
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std; 

typedef struct node{
    int data;
    struct node* link;
    int origin_loc_in_arr;
}NODE;
void insert(int loc, int data,int ori_loc, NODE* hash){
    NODE* i=&hash[loc];
    if(i->link==NULL){
        NODE* temp=(NODE*)malloc(sizeof(NODE));
        temp->data=data;
        temp->link=NULL;
        temp->origin_loc_in_arr=ori_loc;
        i->link=temp;       
    }
    else{
        while(i->link){
            i=i->link;
        }    
        NODE* temp=(NODE*)malloc(sizeof(NODE));
        temp->data=data;
        temp->origin_loc_in_arr=ori_loc;
        temp->link=NULL;
        i->link=temp;  
    }
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
    int t;
    cin>>t;


    NODE *hash=(NODE*)malloc(sizeof(NODE)* t);
    for(i=0;i<n;i++){
        insert(arr[i]%t,arr[i],i,hash);
    }
    // cout<<hash[0].link->data;
    for(i=1,j=t-1;i<j;i++,j--){
        if(hash[i].link && hash[j].link){
                if(hash[i].link->data+hash[j].link->data==t){
                    cout<<"Ans:"<<hash[i].link->origin_loc_in_arr<<" "<<hash[j].link->origin_loc_in_arr<<"\n";
                    break;
                }
        }
        
    }
    return 0;
} 
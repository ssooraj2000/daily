//Given a positive integer n that represents dimensions of a 4n x 4n matrix with values from 1 to 4*n*4n filled from left to right and top to bottom. Your task is to form two coils from matrix and print the coils.
#include <bits/stdc++.h> 
using namespace std; 

void solve(int** arr,int n){
    int i,j;
    int* coil1=(int*)malloc(sizeof(int)*((n*n)/2));
    int* coil2=(int*)malloc(sizeof(int)*((n*n)/2));

    i=0,j=0;
    int index=0;
    int down=1, up=0, left=0, right=0;
    int change=0;
    int shift=n-1;
    int check=1;
    int first=1;
    coil1[index]=arr[i][j];
    coil2[index]=arr[n-1-i][n-1-j];
    index++;
    while(index<(n*n)/2){
        if(down && first){
            if(check==1){
                i++;
                check=0;
            }
            if(change<shift){
                coil1[index]=arr[i][j];
                coil2[index]=arr[n-1-i][n-1-j];
                index++;
                i++;
                change++;
            }
            else if(change==shift){
                i--;
                change++;
            }
            else{
                down=0;
                shift--;
                right=1;
                change=0;
                check=1;
                first=0;
            }
            
        }
        else if(down){
            if(check==1){
                i++;
                check=0;
            }
            if(change<shift){
                coil1[index]=arr[i][j];
                coil2[index]=arr[n-1-i][n-1-j];
                index++;
                i++;
                change++;
            }
            else if(change==shift){
                i--;
                change++;
            }
            else{
                down=0;
                shift=shift-2;
                right=1;
                change=0;
                check=1;
                first=0;
            }
        }
        else if(right){
            if(check==1){
                j++;
                check=0;
            }
            if(change<shift){
                coil1[index]=arr[i][j];
                coil2[index]=arr[n-1-i][n-1-j];
                index++;
                j++;
                change++;
            }
            else if(change==shift){
                j--;
                change++;
            }
            else{
                right=0;
                up=1;
                change=0;
                check=1;
            }
        }
        else if(up){
            if(check==1){
                i--;
                check=0;
            }
            if(change<shift){
                coil1[index]=arr[i][j];
                coil2[index]=arr[n-1-i][n-1-j];
                index++;
                i--;
                change++;
            }
            else if(change==shift){
                i++;
                change++;
            }
            else{
                up=0;
                shift=shift-2;
                left=1;
                change=0;
                check=1;
            }
        }
        else if(left){
            if(check==1){
                j--;
                check=0;
            }
            if(change<shift){
                coil1[index]=arr[i][j];
                coil2[index]=arr[n-1-i][n-1-j];
                index++;
                j--;
                change++;
            }
            else if(change==shift){
                j++;
                change++;
            }
            else{
                left=0;
                down=1;
                change=0;
                check=1;
            }
        }
    }
    reverse(coil1,coil1+(n*n)/2);
    reverse(coil2,coil2+(n*n)/2);
    for(i=0;i<n*n/2;i++){
        cout<<coil1[i]<<" ";
    }
    cout<<"\n"; 
    for(i=0;i<n*n/2;i++){
        cout<<coil2[i]<<" ";
    }
    cout<<"\n"; 
}

int main() 
{ 
    int n;
    cout<<"n:";
    cin>>n;

    n=n*4;
    int** arr=(int**)malloc(sizeof(int*)*n);
    int i;
    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*n);
    }
    int j;
    int input=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=input;
            input++;
        }
    }
    solve(arr,n);
  return 0;
} 


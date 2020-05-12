//A strobogrammatic number is a number that looks the same when rotated 180 degrees (looked at upside down). Find all strobogrammatic numbers that are of length = n.
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std; 

int main() 
{ 
    int n,i,j,size,num,digitno,flag=1,tempj, tempk,temp,k;
    cin>>n;
    int start=0;
    int end=9;
    if(n>1){
        start=1;
        digitno=n;
        while(digitno-->1){
            start*=10;
            end*=10;
            end+=9;
        }
    }
    int* arr;

    for(i=start;i<=end;i++){
        arr=(int*)malloc(n*sizeof(int));
        size=n-1;
        num=i;
        while (num>0)
        {  
            arr[size--]=num%10;
            num/=10;
        }
        for(j=0,k=n-1;j<=k;j++,k--){
            if((arr[j]==1 || arr[j]==6 || arr[j]==8 || arr[j]==9) && (arr[k]==1 || arr[k]==6 || arr[k]==8 || arr[k]==9)){
                if(arr[k]==6 || arr[j]==6 || arr[k]==9 || arr[j]==9){
                    if(arr[k]==6){
                        tempj=9;
                    }
                    if(arr[k]==9){
                        tempj=6;
                    }
                    if(arr[j]==6){
                        tempk=9;
                    }
                    if(arr[j]==9){
                        tempk=6;
                    }

                    arr[k]=tempk;
                    arr[j]=tempj;

                }
                else{
                    temp=arr[k];
                    arr[k]=arr[j];
                    arr[j]=temp;
                }
            }
            else{
                flag=0;
            }
        }


        if(flag==0){
            flag=1;
            continue;
        }

        for(j=0;j<n;j++){
           num=num*10+arr[j];
           //cout<<arr[j];
        }
        if(num==i){
            cout<<i<<"\n";
        }

        free(arr);
    }

    return 0;
} 
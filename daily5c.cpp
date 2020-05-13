//Given an array of strings, group anagrams together.

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std; 

int main() 
{ 
    int n;
    string str[]={"eat","tea","tan","ate","nat","bat"};
    n=sizeof(str)/sizeof(str[0]);
    int i,j,k;
    int* arr1;
    int* arr2;
    int mark=1;
    int* strarr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n-1;i++){
        if(strarr[i]==0){
               // cout<<"i"<<str[i]<<"\n";
                for(j=i+1;j<n;j++){
                    if(strarr[j]==0){
                        //cout<<"j"<<str[j]<<"\n";
                            if(str[i].length()==str[j].length()){
                                arr1=(int*)malloc(sizeof(int)*26);
                                arr2=(int*)malloc(sizeof(int)*26);

                                for(k=0;k<str[i].length();k++){
                                    arr1[str[i][k]-97]++;
                                    arr2[str[j][k]-97]++;
                                }
                                for(k=0;k<26;k++){
                                    if(arr1[k]==arr2[k]){
                                        continue;
                                    }
                                    else{
                                        break;
                                    }
                                }
                                if(k==26){
                                    strarr[i]=mark;
                                    strarr[j]=mark;
                                }

                            }
                    }
                    else{
                        continue;
                    }
                    
                }
                mark++;
        }
        else{
            continue;
        }
    }
    string str1[n+mark-1];
    int p=0;
    for(i=0;i<mark;i++){
        for(j=0;j<n;j++){
            if(strarr[j]==i){
                str1[p++]=str[j];
            }
        }
        str1[p++]=" ";
    }
    for(i=0;i<p;i++){
        if(str1[i]==" "){
            cout<<"\n";
            continue;
        }
        cout<<str1[i]<<" ";
    }
    return 0;
} 
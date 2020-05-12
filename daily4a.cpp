//Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases. Note: For the purpose of this problem, we define empty string as valid palindrome.
#include<iostream>
#include<cmath>
using namespace std; 

int main() 
{ 
    string str="Sooraj, jaroos";
    int i, j, flag=0;
    for(i=0,j=str.length()-1;i<=j;){
        if(str[i]<65 || (str[i]>90 && str[i]<97) || str[i]>122){
            i++;
            continue;
        }
        
        if(str[j]<65 || (str[j]>90 && str[j]<97) || str[j]>122){
            j--;
            continue;
        }
            
            //cout<< str[i]<<i<<" "<<str[j]<<j<<"\n";
        if(str[i]==str[j] || (str[i]+32)==str[j] || (str[i]-32)==str[j]){
                    flag=1;
                    i++;
                    j--;
                }
                else{
                    flag=0;
                    break;
                }
        
        
    }
    if(flag==1){
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }
    return 0;
} 
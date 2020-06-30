//You have to given a data stream terminated by -1 and the size of sliding window. For each variation in sliding window you need to tell the average of data in current sliding window. Print 4 digits after the decimal point.
#include <bits/stdc++.h> 
using namespace std;

void display(int number, int n){
    string s;
    double num=number;

    num=num/n;
 
    s=to_string(num);
    int i=s.find('.');

    int j;
    for(j=0;j<s.length()-2;j++){
        if(j==s.length()-3){
            if(s[j+1]-'0'>=5){
                int c=s[j]-'0';
                c+=1;
                s[j]=c+'0';
                cout<<s[j]<<"\n";
                break;
            }
            else{
                cout<<s[j]<<"\n";
                break;
            }
        }
        else if(j==i+1){
            cout<<s[j];
        }
        else{
            cout<<s[j];
        }
    }
    // int i=s.find('.');
    // int j;
    // for(j=i+1;j<=i+4;j++){
    //     if(s[j]=="")
    // }
    // string sub=s.substr(i+1,s.length()-i-1);
    // cout<<s<<"\n";
    // cout<<sub<<"\n";
    // if(sub.length()==4){
    //     cout<<num<<"\n";
    //     return;
    // }
    // else{
    //     int j;
    //     for(j=0;j<4-sub.length();j++){
    //         s.push_back('0');
    //     }
    //     cout<<s<<"\n";
    // }
}
void solve(vector<int> v){
    int i;
    int sum_so_far=0;
    for(i=0;i<v.size();i++){
        sum_so_far+=v[i];
        display(sum_so_far, i+1);
    }
}
int main() 
{   
    vector<int> v;
    int data;
    while(1){
        cin>>data;
        if(data==-1){
            break;
        }
        else{
            v.push_back(data);
        }
    }
    solve(v);
    return 0;
} 


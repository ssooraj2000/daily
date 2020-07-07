#include <bits/stdc++.h> 
using namespace std;

void recur(int** arr, int* temp_count, string s, string t,int i, int* ans, int prev){
    if(i==t.length()-1){
        for(int k=0;k<temp_count[i];k++){
            if(prev<arr[i][k]){
                *ans=(*ans)+temp_count[i]-k;
                return;
            }
        }
    }
    for(int k=i;k<t.length();k++){
        for(int r=0;r<temp_count[k];r++){
            if(prev<arr[k][r]){
                recur(arr, temp_count, s, t, k+1, ans, arr[k][r]);
            }
        }
    }    
}
int solve(string s, string t){
    int ans=0;
    int** arr=(int**)calloc(t.length(), sizeof(int));
    int i,j;
    int* count=(int*)malloc(sizeof(int)*t.length());
    for(i=0;i<t.length();i++){
        for(j=0;j<s.length();j++){
            if(s[j]==t[i]){
                count[i]++;
            }
        }

    }
        int* temp_count=(int*)malloc(sizeof(int)*t.length());

    for(i=0;i<t.length();i++){
        temp_count[i]=count[i];
    }

    
    for(i=0;i<t.length();i++){
        arr[i]=(int*)calloc(count[i],sizeof(int));
    }
    int index;
    for(i=0;i<t.length();i++){
        index=0;
        for(j=0;j<s.length();j++){
            if(s[j]==t[i]){
                arr[i][index++]=j;
            }
        }
    }
    // for(i=0;i<t.length();i++){
    //     for(j=0;j<temp_count[i];j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    i=0;
    for(j=0;j<temp_count[i];j++)
    recur(arr, temp_count, s, t, i+1,&ans, arr[i][j]);
    
    return ans;
    
}
int main() 
{   
    string s, t;
    cin>>s;
    cin>>t;
    cout<<solve(s, t)<<"\n";
    return 0;
} 
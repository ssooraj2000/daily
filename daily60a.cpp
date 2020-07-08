//Given an array of distinct n integers. The task is to check whether reversing one sub-array make the array sorted or not. If the array is already sorted or by reversing a subarray once make it sorted, print “Yes”, else print “No”.
#include <bits/stdc++.h> 
using namespace std;

bool solve(int* arr, int n){
    int i,start=-1, end=-1;
    for(i=n-1;i>=0;i--){
        if(arr[i]<arr[i+1] && i!=n-1){
            if(end!=-1){
                start=i+1;
            }
            else if(arr[i-1]<arr[i] && i!=0){
                
                continue;
            }
            else{
                end=i;
                continue;
            }
            // cout<<start<<" "<<end<<"\n";
            
            reverse(arr+start, arr+end+1);
            break;
        }
        else if(arr[i]<arr[i-1] && i!=0){
            if(end==-1){
                end=i;         
            }
            else{

            }
        }
        else if(end!=-1 && i==0){
            start=i;
                        // cout<<start<<" "<<end<<"\n";

            reverse(arr+start, arr+end+1);
            break;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(solve(arr, n)){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
    return 0;
}
//middle reversing
// 6
// 1 2 5 4 3 6 

//already sorted
// 4
// -9 -1 2 3 

//right most reversing
// 4
// -1 4 3 2

//reverse sorted array
// 5
// 5 4 3 2 1

//left most reversing
// 5
// 5 4 3 2 9

//right most reversing
// 5
// 1 2 5 4 3

//left most reversing
// 4
// -9 -10 2 3
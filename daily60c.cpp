//Three arrays of same size are given. Find a triplet such that maximum – minimum in that triplet is minimum of all the triplets. A triplet should be selected in a way such that it should have one number from each of the three given arrays.
// If there are 2 or more smallest difference triplets, then the one with the smallest sum of its elements should be displayed.
#include <bits/stdc++.h> 
using namespace std;

void solve(int* arr1, int* arr2, int* arr3,  int n){
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    sort(arr3, arr3+n);
    int min_so_far=INT_MAX,i;

    i=0;
    int max,min, j=0,k=0;
    int* arr_triplet=(int*)malloc(sizeof(int)*3);
    while(i<n && j<n && k<n){
        max=(arr1[i]>arr2[j])?(arr1[i]>arr3[k]?arr1[i]:arr3[k]):(arr2[j]>arr3[k]?arr2[j]:arr3[k]);
        min=(arr1[i]<arr2[j])?(arr1[i]<arr3[k]?arr1[i]:arr3[k]):(arr2[j]<arr3[k]?arr2[j]:arr3[k]);
        // cout<<max<<" "<<min<<" "<<arr1[i]<<" "<<arr2[j]<<" "<<arr3[k]<<"\n";
        
        if((max-min)<min_so_far){
            arr_triplet[0]=arr1[i];
            arr_triplet[1]=arr2[j];
            arr_triplet[2]=arr3[k];
            min_so_far=max-min;
        }
        else if((max-min)==min_so_far){
            int sum=accumulate(arr_triplet, arr_triplet+3, 0);
            if((arr1[i]+arr2[j]+arr3[k])<sum){
                arr_triplet[0]=arr1[i];
                arr_triplet[1]=arr2[j];
                arr_triplet[2]=arr3[k];
                min_so_far=max-min;
            }
        }
    //the bottom idea from gfg very close, planning on binary search 
        if(arr1[i]==min){
            i++;
        }
        else if(arr2[j]==min){
            j++;
        }
        else{
            k++;
        }
    }
    sort(arr_triplet, arr_triplet+3, greater<int>());
    for(i=0;i<3;i++){
        cout<<arr_triplet[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n;
    cin>>n;
    int* arr1=(int*)malloc(sizeof(int)*n);
    int* arr2=(int*)malloc(sizeof(int)*n);
    int* arr3=(int*)malloc(sizeof(int)*n);

    int i;

    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(i=0;i<n;i++){
        cin>>arr3[i];
    }
    solve(arr1, arr2, arr3, n);
    return 0;
}
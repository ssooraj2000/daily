//Count inversions in an array in O(nlogn) time complexity
#include <bits/stdc++.h> 
using namespace std;

void merge(int* arr, int l, int m, int h, int* count){
    int size1=m-l+1;
    int size2=h-m;
    int* arr1=(int*)malloc(sizeof(int)*size1);
    int* arr2=(int*)malloc(sizeof(int)*size2);

    int i;
    for(i=0;i<size1;i++){
        arr1[i]=arr[i+l];
    }
    int j=0;
    for(i=0;i<size2;i++){
        arr2[i]=arr[i+m+1];
    }

    j=0,i=0;
    int index=l;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr[index++]=arr1[i];
            i++;
        }
        else if(arr2[j]<arr1[i]){
            //this bottom line my own idea
            (*count)+=(size1-i);

            arr[index++]=arr2[j];
            j++;
        }
        else
        {
            arr[index++]=arr1[i];
            arr[index++]=arr2[j];
            i++;j++;
        }
        
    }
    while(i<size1){
        arr[index++]=arr1[i];
        i++;
    }
    while(j<size2){
        arr[index++]=arr2[j];
        j++;
    }

}
void mergeSort(int* arr, int l, int h, int* count){
    if(l<h){
        int mid=l+(h-l)/2;
        mergeSort(arr, l, mid, count);
        mergeSort(arr, mid+1, h,count);
        merge(arr, l, mid, h,count);
    }
}
int main() 
{   
    int n;
    cin>>n;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    mergeSort(arr, 0, n-1, &count);
    // for(i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    cout<<count<<"\n";
    return 0;
} 
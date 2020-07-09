//Print a matrix in a spiral form

#include <bits/stdc++.h> 
using namespace std;
void solve(int** arr, int n, int m){
    int i=0, j=0;
    int down=0, right=1, left=0, up=0;
    int visited=INT_MAX;
    while(i<n && j<m){
        if(right){
            if(j==m-1){
                if(arr[i][j]==visited){
                    j--;
                    i++;
                }
                else{
                    cout<<arr[i][j]<<" ";
                    arr[i][j]=visited;
                    right=0;
                    down=1;
                    i++;
                }
            }
            else if(arr[i][j]==visited){
                break;
            }
            else if(j<m-1 && arr[i][j+1]==visited){
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                i++;

                right=0;
                down=1;
            }
            else{
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                j++;
            }
        }
        else if(down){
            if(i==n-1){
                if(arr[i][j]==visited){
                    i--;
                    j--;
                }
                else{
                    cout<<arr[i][j]<<" ";
                    arr[i][j]=visited;

                    down=0;
                    left=1;
                    j--;
                }
            }
            else if(arr[i][j]==visited){
                break;
            }
            else if(i<n-1 && arr[i+1][j]==visited){
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                j--;
                down=0;
                left=1;

            }
            
            else{
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                i++;
            }
        }
        else if(left){
            if(j==0){
                if(arr[i][j]==visited){
                    i--;
                    j++;
                }
                else{
                    cout<<arr[i][j]<<" ";
                    arr[i][j]=visited;
                    left=0;
                    up=1;
                    i--;
                }
            }
            else if(arr[i][j]==visited){
                break;
            }
            else if(j>=1 && arr[i][j-1]==visited){
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                i--;
                left=0;
                up=1;
                
            }
            else{
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                j--;
            }
        }
        else if(up){
            if(i==0){
                if(arr[i][j]==visited){
                    i++;
                    j++;
                    up=0;
                    right=1;
                }
            }
            else if(arr[i][j]==visited){
                break;
            }
            else if(i>=1 && arr[i-1][j]==visited){
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                up=0;
                right=1;
                j++;
              
            }
            else{
                cout<<arr[i][j]<<" ";
                arr[i][j]=visited;
                i--;
            }
        }
    }

    cout<<"\n"; 
    // cout<<i<<" "<<j<<"\n";
    // cout<<down<<" "<<up<<" "<<left<<" "<<right<<"\n";
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int** arr=(int**)malloc(sizeof(int*)*n);


    int i;

    for(i=0;i<n;i++){
        arr[i]=(int*)malloc(sizeof(int)*m);
    }

    int j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    solve(arr, n, m);
    return 0;
}
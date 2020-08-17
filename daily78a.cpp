#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> arrivals, vector<int> departures, int n){
    int count=0;
    vector<pair<int, int>> arr_dept;
    for(int i=0;i<n;i++){
        arr_dept.push_back({arrivals[i], departures[i]});
    }
    sort(arr_dept.begin(), arr_dept.end());
    vector<set<pair<int, int>>>arr(n);
    for(int i=0;i<n;i++){
        int flag=0;
        if(count==0){
            arr[count++].insert({arr_dept[i].first, arr_dept[i].second});
        }
        else{
            for(int j=0;j<count;j++){
                auto it=arr[j].end();
                it--;
                pair<int, int> current=*it;
                    if(arr_dept[i].first>current.second){
                        arr[j].insert({arr_dept[i].first, arr_dept[i].second});
                        flag=1;
                        break;
                }
            }
            if(flag==0){
                arr[count++].insert({arr_dept[i].first, arr_dept[i].second});
            }
        } 
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arrivals(n);
        for(int i=0;i<n;i++){
            cin>>arrivals[i];
        }
        vector<int> departures(n);
        for(int i=0;i<n;i++){
            cin>>departures[i];
        }
        cout<<solve(arrivals, departures, n)<<endl;
    }
    return 0;
}


//                // auto it=arr[j].upper_bound({arr_dept[i].first, arr_dept[i].second});

    
                // if(it==arr[j].begin()){
                //     pair<int, int> current=*it;
                //     if(arr_dept[i].second<current.first){
                //         arr[j].insert({arr_dept[i].first, arr_dept[i].second});
                //         flag=1;
                //         break;
                //     }
                // }
                // else if(it==arr[j].end()){
                //     it--;
                //     pair<int, int> current=*it;
                //     if(arr_dept[i].first>current.second){
                //         arr[j].insert({arr_dept[i].first, arr_dept[i].second});
                //         flag=1;
                //         break;
                //     }
                // }
                // else{
                //     auto itprev=it--;
                //     pair<int, int> currentprev=*itprev;
                //     pair<int, int> current=*it;
                //     if(arr_dept[i].first>currentprev.second && arr_dept[i].second<current.first){
                //         arr[j].insert({arr_dept[i].first, arr_dept[i].second});
                //         flag=1;
                //         break;
                //     }
                // }
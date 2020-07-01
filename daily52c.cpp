//Given two rectangles, find if the given two rectangles overlap or not.A rectangle is represented as a list [x1, y1, x2, y2], where (x1, y1) are the coordinates of its bottom-left corner, and (x2, y2) are the coordinates of its top-right corner.
#include <bits/stdc++.h> 
using namespace std;

bool solve(vector<double> v1, vector<double> v2){
    double center1_x=(v1[0]+v1[2])/2;
    double center1_y=(v1[1]+v1[3])/2;
    double center2_x=(v2[0]+v2[2])/2;
    double center2_y=(v2[1]+v2[3])/2;
    
    if(abs(center2_x-center1_x)<(center2_x-v2[0]+center1_x-v1[0]) && abs(center2_y-center1_y)<(center2_y-v2[1]+center1_y-v1[1])){
        return true;
    }
    return false;
}
int main() 
{   
    vector<double> v1;
    vector<double> v2;

    
    double data;
    for(int i=0;i<4;i++){
        cin>>data;
            v1.push_back(data);
        
    }
    for(int i=0;i<4;i++){
        cin>>data;
            v2.push_back(data);
        
    }
    cout<<solve(v1, v2)<<"\n";
    return 0;
} 


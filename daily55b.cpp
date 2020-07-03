//Given a circle represented as (radius, x_center, y_center) and an axis-aligned rectangle represented as (x1, y1, x2, y2), where (x1, y1) are the coordinates of the bottom-left corner, and (x2, y2) are the coordinates of the top-right corner of the rectangle.
#include <bits/stdc++.h> 
using namespace std;
bool solve(int r,int c_x,int c_y,int x1,int y1,int x2,int y2){
    double center_rec_x=(x1+x2)/2;
    double center_rec_y=(y1+y2)/2;
    int dist=sqrt(pow(center_rec_x-c_x,2)+pow(center_rec_y-c_y,2));
    if(dist<=r+(x2-x1)/2 && dist<=r+(y2-y1)/2){
        return true;
    }
    return false;
}

int main() 
{   
    int r, c_x, c_y, x1, y1, x2, y2;
    cin>>r>>c_x>>c_y>>x1>>y1>>x2>>y2;
    cout<<solve(r, c_x, c_y, x1, y1, x2, y2)<<"\n";
    return 0;
} 

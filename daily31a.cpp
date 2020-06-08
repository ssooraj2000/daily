//This problem was asked by Google.

// The area of a circle is defined as πr^2. Estimate π to 3 decimal places using a Monte Carlo method.

// Hint: The basic equation of a circle is x2 + y2 = r
#include <bits/stdc++.h> 
using namespace std;

int main() 
{ 
    int interval;
    cin>>interval;

    int i, inside_circle=0, outside_circle_inside_square=0;
    double rand_x, rand_y,dist; 
    srand(time(NULL));
    for(i=0;i<interval*interval;i++){
        rand_x=(double) (rand()%10000)/10000;
        rand_y=(double) (rand()%10000)/10000;
        cout<<rand_x<<" "<<rand_y<<"\n";
        dist=rand_x*rand_x+rand_y*rand_y;
        if(dist<=1){
            inside_circle++;
        }
        outside_circle_inside_square++;


    }   
    double pi=(double) 4*(inside_circle)/outside_circle_inside_square;
    cout<<setprecision(4)<< pi;
} 

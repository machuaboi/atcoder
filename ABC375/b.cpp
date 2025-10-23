#include <iostream> 
#include <stdio.h>
#include <vector> 
#include <cmath>
using namespace std;

int main(){
    double cost = 0;
    int n; 
    cin >>n;
    vector<vector<int>> xy(n+2, vector<int>(2));
     xy[0][0] = 0;
    xy[0][1] = 0;
    xy[n+1][0] = 0;
    xy[n+1][1] = 0;
    for(int i = 1; i<n+1; i++){
        int a,b;
        cin>>a>>b;
        xy[i][0] = a;
        xy[i][1] = b;
    }
    
    for(int i = 0; i<n+1; i++){
        cost+=sqrt(pow(xy[i][0]-xy[i+1][0],2.0)+pow(xy[i][1]-xy[i+1][1],2.0));
    }

    printf( "%.6f", cost);
    return 0;
}
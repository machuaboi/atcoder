#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    long long y;
    cin>>n>>y;
    long long sum =0;
    for(int i = 0; i<2001; i++){
        for(int j = 0; j<2001-i; j++){
            for(int k =0; k <2001-i-j; k++){
                sum=0;
                sum += 10000*i+5000*j + 1000 * k;
                if(sum == y && i+j+k == n){
                    printf("%d %d %d",i,j,k);
                    return 0;
                }
            }
        }
    }
    printf("%d %d %d",-1,-1,-1);
    return 0;
}
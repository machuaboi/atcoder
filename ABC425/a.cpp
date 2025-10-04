#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin>>n;
    for(int i = 1; i<n+1; i++){
        sum += (pow(-1,i) * pow(i,3)); 
    }
    cout<<sum;
}
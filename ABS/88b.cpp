#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i :a) cin>>i;
    sort(a.begin(),a.end(),greater<>());
    int diff = 0;
    int sumA =0, sumB =0;
  
    for(int i = 0; i<=a.size(); i++){
        if(i%2==0) sumA+=a[i];
        else sumB+=a[i];
    }
    diff = sumA-sumB;
    cout<<diff<<endl;

}
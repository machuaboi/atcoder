#include <bits/stdc++.h> 
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    int sum = 0;
    for(int i = 0; i<N; i++){
        cin>>A[i];
}
for(int i = 0; i<N; i++){
    if(i%2==0){
        sum+=A[i];
    }

}
cout<<sum;
}
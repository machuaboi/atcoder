#include <iostream>
using namespace std;
int main(){
    int N, K;
   
    cin>>N>>K;
    int A[N];
    for(int i =0; i<N; i++){
        cin>>A[i];
    }
    int L = K;
    int c = 0;
    for(int i =0; i<N; i++){
        if(L-A[i]<0){
            c++;
            L=K; //go 
            L-=A[i];
        }else{
            L -=A[i];
        
        }
    }
    cout<< c+1;

  
}
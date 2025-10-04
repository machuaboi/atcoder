#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main()
{
    int Q, N;
    cin >> Q;
    
    vector<int> query;
    vector<int> pile;
    for(int i =0; i<100; i++){
        pile.push_back(0);
    }

    for (int i = 0; i < Q; i++)
    {
        cin>>N;
        if(N==1){
            cin>>N;
           //query.push_back(1);
            pile.push_back(N);
        }else{
            N = *(pile.end()-1);
            pile.pop_back();
            cout<< N<<endl;
        }
         
    }

    

    
    
}


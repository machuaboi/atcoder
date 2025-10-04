#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main()
{
    int N, C;
    cin >> N;
    //cout<<C<<endl;
    string S[N];

    for (int i = 0; i < N; i++)
    {
        cin>>S[i];
    }

    bool isPrivate = false;
    

    for (int i = 0; i < N; i++)
    {
        if(S[i] == "login"){
            isPrivate=true;
        }
        if(S[i] == "logout"){
            isPrivate=false;
        }
        if(S[i] == "private" && !isPrivate){
            C++;
        }
        
    }
    cout<<C;
}


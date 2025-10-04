#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    

    vector<vector<int>> S(N, vector<int>(M));
    vector<int> P(N, 0);
    vector<int> w(M, 0);
      cout<<"done";
    cout<<N<<M<<endl;
  for(int i = 0; i <= N; i++){
        for(int j = 0; j <= M; j++){
            cin >> S[i][j];
            cout<< S[i][j];
        }
    }
    cout<<"done";


    for(int j = 0; j < M; j++){
        int c0 = 0, c1 = 0;
        for(int i = 0; i < N; i++){
            if(S[i][j]==0) c0++;
            else c1++;
        }
        w[j] = max(c0, c1);
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(S[i][j] == w[j]){
                P[i]++;
            }
        }
    }

    int maxP = *max_element(P.begin(), P.end());

    for(int i = 0; i < N; i++){
        if(P[i] == maxP) cout << i << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M, K;
	cin>>N>>M>>K;
	int A[K];
	int B[K];
	int c[K];
	vector<int> ans;

	for(int i = 0; i<K; i++){
		cin>>A[i]>>B[i];
		
	}
	for(int i = 1; i<N+1; i++){
			c[i] = M;
	}
	for(int i = 0; i<K; i++){
		c[A[i]]--;
		if(c[A[i]]==0){
			ans.push_back(A[i]);
		}
	}
	for(int a: ans){
		cout<<a<<" ";
	}

}

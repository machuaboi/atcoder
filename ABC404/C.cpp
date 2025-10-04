#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> box(N + 1, 0); // Initialize vector with size N+1, all elements set to 0

    int n;
    for (int i = 0; i < M * 2; i++) {
        cin >> n;
        box[n]++;
    }

    for (int i = 1; i <= N; i++) {
        if (box[i] != 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

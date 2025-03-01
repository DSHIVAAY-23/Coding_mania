#include <bits/stdc++.h>
using namespace std;

void construct_matrix(int N, int M) {
   for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            // Use an alternating pattern to minimize sum and ensure GCD of 1
            if ((i + j)  < 3) {
                cout << 2 << " ";  // Place 2 at even (i+j) positions
            } else {
                cout << 3 << " ";  // Place 3 at odd (i+j) positions
            }
        }
        cout << endl;
    }
}
int main() {
int T;
cin>>T;
while(T--){
    int N,M;
    cin>>N>>M;
    construct_matrix(N,M);
}
return 0;
}

// //This is the easy version of the problem. The only difference between this and hard version is that you don't need to minimize the sum of matrix in this version

// Construct a matrix 
// A
// A of size 
// N
// ∗
// M
// N∗M such that the GCD of every row and column is 
// 1
// 1 and element must be 
// 2
// <
// =
// A
// i
// ,
// j
// <
// =
// 1
// 0
// 9
// 2<=A 
// i,j
// ​
//  <=10 
// 9
//  .

// If there are multiple answers possible, print any.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of single line of input.
// The first line of each test case contains two space-separated integers 
// N
// N and 
// M
// M — the number of rows and columns in the matrix, respectively.











#include <bits/stdc++.h>
using namespace std;

void construct_matrix(int N, int M) {
    // Start constructing the matrix by alternating values
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            // For odd rows
            if (M == 1) {
                // Special case for single-column, just print unique values
                cout << i + j << " ";
            } else if (N == 1) {
                // Special case for single-row, just print unique values
                cout << i + j << " ";
            } else {
                if (i % 2 == 1) {
                    cout << (i + M + j) << " "; // Use i + M + j for odd rows
                } else {
                    cout << (i + j * 2) << " "; // Use i + j * 2 for even rows
                }
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

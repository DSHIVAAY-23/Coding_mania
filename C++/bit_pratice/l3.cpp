

#include<bits/stdc++.h>
 using namespace std;
const int N = 1e5 +10;

  void countBitsFlip(int a, int b){
        
        int cnt = a^b;
        int count = 0;
    while (cnt > 0) {
        count += cnt & 1;
        cnt >>= 1;
    }

    cout<<count<<endl;
    
    };

int main(){
    countBitsFlip(6,5);

}
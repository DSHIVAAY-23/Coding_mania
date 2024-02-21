#include<bits/stdc++.h>
 using namespace std;
const int N = 1e5 +10;

int main(){
    int n[] = {2,3,4,5,2,7,3,4};
    int x = sizeof(n)/sizeof(n[0]);
    int cnt = 0;

    for (int i = 0; i <x; i++){
      cnt = cnt^n[i];

    }
      cout<<cnt<<endl;


}
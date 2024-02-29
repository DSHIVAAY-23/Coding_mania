#include<bits/stdc++.h>
 using namespace std;
 #include <iostream>

const int N = 1e5 +10;

int main(){
    int n[] = {4,1,2,3,2,1,5,4};


    int x = sizeof(n)/sizeof(n[0]);
    int cnt = 0;
   
    for (int i = 0; i <x; i++){

      cnt = cnt^n[i];
 }
 cout<<cnt<<endl;

}


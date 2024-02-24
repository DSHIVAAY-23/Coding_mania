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
 

int pos = 0;
for (int i = 0; i <32; i++){
    if(((cnt&(1<<i))>0)){
        pos = i;
        break;
    }
}

int num = 0;
int mum = 0;

for (int i = 0; i < x ; i++){
    if((n[i]&(1ll<<pos))>0){
        num = num^n[i];
    }
    else{
        mum=mum^n[i];
    }
}
cout<<num<<endl;
cout<<mum<<endl;
}


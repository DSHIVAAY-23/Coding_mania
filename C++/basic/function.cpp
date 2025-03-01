#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int &a){
      cout<<a<<endl;

}
void increment(int &a){
    a= a+1;
}

int main(){
  int a = 10;
  int *p = &a;
  print(a);
      cout<<a<<endl;
      increment(a);
      cout<<a<<endl;
}


    
    
    
    

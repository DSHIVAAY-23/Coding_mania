#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int a= 4;
    cout<<a<<endl;
    int b = a++ + ++a;
    int c = ++a + ++a;

    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
    
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[] = {2,3,4,5,6,7,8,9,10,11,12};
 int n = sizeof(a) / sizeof(a[0]);
     int sum = 0;
    for (int i =0; i<n; ++i){

        sum = sum + a[i];
    }
    cout<<sum;
}

    
    
    
    

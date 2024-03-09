#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void movezero(int arr[],int n){
    int e = n;
    for(int i = 0 ; i < e ; i++) {
        if(arr[i]==0) {
            swap(arr[i],arr[e-1]);
            e--;
            if(arr[i] == 0)
                i--;
        }
    }
}
int main(){
    int arr[] ={2,0,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezero(arr,n);
    for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
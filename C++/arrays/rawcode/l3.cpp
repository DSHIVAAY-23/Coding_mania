#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int arr[], int n){
    int i=0;
   for(int i=0; i<n; i+=2){
    if(arr[i+1<n])
    swap(arr[i], arr[i+1]);
    
   }
   return 0;
}
int main(){
    int arr[]= {1,2,3,4,5,65,6};
    int n = sizeof(arr)/sizeof(arr[0]);
   int D = reverse(arr,7);
   for(int i=0;i<7;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}
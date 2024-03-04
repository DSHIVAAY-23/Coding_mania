//operations in array and vectors difference 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n,int x){
    for(int i=0;i<n;++i){
        if(arr[i]== x)
        return i;
    }
    return -1;
}
// int insert(int arr[], int n,int x,int pos,int cap)
// {
// if(cap == n){
//     return n;
// }
//     int idx = pos-1;
//     for(int i = n-1;i>=idx;i--){
//         arr[i+1] = arr[i];
//         arr[idx] = x;
//         return n+1;
    
// }



int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1;

    cout<<search(arr,n,x)<<endl;
}
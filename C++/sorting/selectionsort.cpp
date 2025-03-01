#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr [],int n){
    for (int i = 0 ; i <= n-2 ; i++){
        int index = i;
        for(int j = i ; j <= n-1 ; j++){
            if (arr[j]<arr[index]){
               index = j;
            }
        }
        swap(arr[index],arr[i]);
    }
        }

int main(){
    int arr[] = {1,2,3,4,5,6,7,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
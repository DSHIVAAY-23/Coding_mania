
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<"done"<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = 0;
    int target = 9;
    for (int i =0;i<n;i++){
        result = arr[i]+arr[i+1];
        if(result==target){
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
        }
    }
   print(arr,7);
    
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int delete(int arr[], int n,int x,int pos,int cap)
{
if(cap == n){
    return n;
}

    int idx = pos-1;

    for(int i = n-1;i>=idx;i--){
        arr[i+1] = arr[i];
        arr[idx] = x;
    
}
        return (n+1);


}
int main(){
    int arr[5]= {1,2,3};
   int n = sizeof(arr)/sizeof(arr[0]);

    int pos = 0;

    int x = 5;
    cout<<delete(arr,5,x,pos,5)<<endl;
    
}
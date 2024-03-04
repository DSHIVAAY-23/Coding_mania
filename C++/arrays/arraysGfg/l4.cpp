#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n,int x){


int i ;
for (int i=0;i<n;i++){
    if(arr[i]==x){
        break;
    }
    if (i == n )return n;


for (int j = i; j < n-1; j++){

   arr[j] = arr[j+1];
}
}
   return (n-1);
}
int main(){
    int arr[] = {2,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
     int x = 5;
    cout<<search(arr,n,x)<<endl;
    
}
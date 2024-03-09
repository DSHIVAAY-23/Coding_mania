
#include<bits/stdc++.h>

using namespace std;

int search(int arr[],int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,5,5,6,8};
    int n= 7;
    int k = 6;
    cout<<search(arr,n,k)<<endl;
    return 0;
}
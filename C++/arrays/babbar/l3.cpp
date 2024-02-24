#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int printarray(int arr1[],int size,int target){
    int y;
    for (int i=0;i<size;i++){
        if(arr1[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    //declare
    int x[10];



  int arr1[6] = {0,1,2,3,8,5};
  int size = sizeof(arr1)/sizeof(arr1[0]);
  int target = 8;

  cout<<printarray(arr1,size,target)<<endl;
     
    }
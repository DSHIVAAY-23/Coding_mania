#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getmax(int arr1[],int size){
        int max= INT_MIN;
        for (int i=0;i<size;i++){
        if (arr1[i]>max) {
        max=arr1[i]; 
        }

        }
                return max;

}

int getmin(int arr1[],int size){
    int min= INT_MAX;
    for (int i=0;i<size;i++){
    if (arr1[i]<min) {
    min=arr1[i]; 
    }

    }
        return min;

}

   


int main(){
    



  int arr1[6] = {0,1,2,3,4,5};
  int size = sizeof(arr1)/sizeof(arr1[0]);
cout<<getmax(arr1,size)<<endl;
cout<<getmin(arr1,size)<<endl;


     
    }
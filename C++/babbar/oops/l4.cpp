#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int arr1[],int size){
    int start = 0;
    int end = size -1;
    while(start<=end){
        swap(arr1[start],arr1[end]);
        start++;
        end--;
    }

}

void printarray(int arr1[],int size){
    int y;
    for (int i=0;i<size;i++){
        

    cout<<arr1[i]<<" ";

}
cout<<endl;
    
}

int main(){
    //declare



  int arr1[6] = {0,1,2,3,4,5};
  int size = sizeof(arr1)/sizeof(arr1[0]);

  printarray(arr1,6);
  swap(arr1,6);
printarray(arr1,6);


     
    }
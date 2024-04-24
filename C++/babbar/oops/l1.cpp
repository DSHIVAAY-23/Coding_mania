#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printarray(int arr1[],int size){
    int y;
    for (int i=0;i<size;i++){
        
        y = 2*arr1[i] + 1;

    // cout<<arr1[i]<<endl;
    cout<<y<<endl;

}
    
}

int main(){
    //declare
    int x[10];
int y = new int[10];  //heap allocated



  int arr1[6] = {0,1,2,3,4,5};
  int size = sizeof(arr1)/sizeof(arr1[0]);

  printarray(arr1,6);

     
    }
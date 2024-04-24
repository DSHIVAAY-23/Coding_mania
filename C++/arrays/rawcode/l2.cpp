#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int arr[],int n){
int min = INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min = arr[i];
    }
}
return min;

}

int max(int arr[],int n){
   int max = INT_MIN;
   for(int i=0;i<n;i++){
    if(arr[i]>max){
        max= arr[i];
    }
   }
   return max;
}
int main(){
    int arr[]= {2,3,4,5,53,2,1,4,6,74};
    int abc = min(arr,10);
    int xyz = max(arr,10);
    cout<<abc<<" "<<xyz<<endl;
    return 0;

}
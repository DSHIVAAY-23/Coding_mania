#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> insertionsort(vector<int> &arr1, vector<int> &arr2, int n,int m){
    int i =0;
    int j =0;
    vector<int> tmp;
    while(i<n && j<m){
     if(arr1[i]<arr2[j])
     i++;
    else if(arr2[j]<arr1[i])
    j++;
else {
    tmp.push_back(arr1[i]);
    tmp.push_back(arr2[j]);
    i++;
    j++;
}

    }
    return tmp;
}



int main(){
    int arr1[] = {1,2,3,4,5,6,};
    int arr2[] = {2,3,4,6};
    int n = 6;
    int m = 6;
    int x =insertionsort(arr1,arr2,n,m);
    cout<<x<<endl;
    
}
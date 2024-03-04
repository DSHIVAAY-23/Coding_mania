#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sorted(int arr[], int n){
	int sort = arr[0];
	for (int i = 0; i<n;i++){
		if(arr[i]<sort){
			return -1;
             }
			
		}
		return 1;
	}
	int main(){
		int arr[] = {2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr,n)<<endl;
}

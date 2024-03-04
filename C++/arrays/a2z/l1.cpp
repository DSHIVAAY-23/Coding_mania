
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largest(int arr[], int n){
    int max = arr[0];
	for (int i = 0; i<n;i++){
		if (max<arr[i]){
			max=arr[i] ;
            cout<<arr[i]<<endl;
            
		}
		
	}
	return max;
}

int main(){
	int arr[] = {2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,n)<<endl;
	
	}

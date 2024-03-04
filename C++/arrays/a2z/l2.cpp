
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largest(int arr[], int n){
    if(n<2)
	return -1;
    int max = INT_MIN;
    int smax = INT_MIN;
    int i;

	for (int i = 0; i<n;i++){

		if (arr[i]>max){
            smax= max;
			max=arr[i] ;
            
		}
		
		else if(arr[i]>smax && arr[i] != max){
            smax = arr[i];
        }
	
	
}
	return smax;
}
int main() {
	int arr[] = {2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sl = largest(arr, n);
    cout<<sl<<endl;
	
}

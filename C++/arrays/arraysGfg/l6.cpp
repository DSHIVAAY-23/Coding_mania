
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

	
	


int main(){
	

int m = 3;
int n = 2;
int arr[m][n];
for(int i =0;i<m;i++){
	for(int j=0;j<n;j++){
		arr[i][j] = i+j;
	}
}
for(int i =0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<arr[i][j]<<endl;
	}
}
vector<int> arr1[m];
for(int i =0;i<m;i++){
	for(int j=0;j<n;j++){
		arr1[i].push_back(10+i+j);
	}
}
for(int i =0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<arr1[i][j]<<endl;
	}
}



}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool twosum(int arr [],int target,int n){
	for(int i = 0; i<n;i++){
		for(int j =1; j<n;j++){
			if(arr[j] + arr[i] == target)
				return true;
				
			 }
            
		 }
	return false ;
}

int main(){
	
int arr[] = {2,3,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);
int target = 8;
for(int i = 0; i<n; i++){
if(twosum(arr,target,n)){
    cout<<i<<endl;
}

}
		
}

#include<bits/stdc++.h>
using namespace std ;
//array always passed by refrence

void arr1(int a[]){
a[0] =5;
}

int main(){
	int a[10];
	a[0] = 10;
	cout<<a[0]<<endl;
	arr1(a);
	cout<<a[0]<<endl;
}
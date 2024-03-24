
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

	
const int R = 4, C = 4;

void search2D(int matrix[R][C],int x){

    int i =0;
    int j = C-1;
    while(i<R && j>=0){
        if((matrix[i][j]) == x){
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(matrix[i][j]<x){
            j--;
        }
        else{
            i++;
        }



}
}

int main()
{	
    int arr[][C] = {{10, 20, 30, 40},
    			   {15, 25, 35, 45},
    			   {27, 29, 35, 45},
    			   {32, 33, 39, 50}};
			   
	int x = 29;	   

	search2D(arr, x);

	return 0;
}
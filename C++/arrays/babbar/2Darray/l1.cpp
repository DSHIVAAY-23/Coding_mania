#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispresent(int arr[][4],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    
}
return false;
}
void printsum(int arr[][4],int i,int j){
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
            
            }
            cout<<sum<<endl;
        }
    }



int main (){
    int arr[3][4];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }


     for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j]<<"";
        }
        cout<<endl;
    }
    if(ispresent(arr,9,3,4)){
        cout<<"Present"<<endl;
    }

    else{
        cout<<"not present"<<endl;
}
printsum(arr,3,4);
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> printsum(vector<vector<int>> arr,int nrows,int mcolumns){
    vector<int> ans;
    for(int rows=0;rows<nrows;rows++){
        if(rows&1){
        for(int columns=0;columns<mcolumns;columns++){
            
            ans.push_back(arr[rows][columns]);
            }
            
        }
        else{
            for(int columns=mcolumns-1;columns>=0;columns--){
                ans.push_back(arr[rows][columns]);
            }
        }
    }
    return ans;
    }



int main (){
    int arr[3][4]={{1,2,3}};
   

   

}
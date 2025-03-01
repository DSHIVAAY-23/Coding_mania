
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr [] = {0,1,2,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = (n*(n+1))/2;
    int s2 = 0;
     for (int i=0;i<n;i++){
    
       s2 += arr[i];
     }
   int sum2 = sum - s2;
   cout<<sum2<<endl;


}
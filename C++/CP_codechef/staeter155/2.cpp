#include <bits/stdc++.h>
using namespace std;

int main() {
	 int T;
    cin >> T;  
    while (T--) {
        int N;
        cin>>N;
   int max_area = 0;
   for(int i =1;i<=N/2;i++){
      int j = (N/2)-i;
      if(j>0){
          int area = i*j;
          if (area>max_area){
              max_area= area;
          }
      }
      
   }
         cout<<max_area<<endl;

}
}

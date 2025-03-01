#include<iostream>
using namespace std;
int fibnooci(int n){
     cout<<n<<endl;
    if(n==0){return 0;}
    if(n==1){return 1;}
    int soutput = fibnooci(n-1);
    int ioutput = fibnooci(n-2 );
    return soutput+ioutput;

}
int main(){

cout<<fibnooci(4)<<endl;

}
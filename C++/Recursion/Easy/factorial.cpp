#include<iostream>
using namespace std;
int factorial(int n){
    cout<<n<<endl;
     if(n==0)return 1;
    int soutput = factorial(n-1);
    int output = n*soutput;
    return output;

}
int main(){
int n;
cin>>n;
cout<<factorial(n)<<endl;
return 0;
}
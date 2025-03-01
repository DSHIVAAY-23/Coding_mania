#include<iostream>
using namespace std;
int sum(int n){
    cout<<n<<endl;
     if(n==1 && n==0)return 1;
     

    int soutput = sum(n-1);
    int output = soutput*sum(n-2);
    return n*output;

}
int main(){
int n;
cin>>n;
cout<<sum(n)<<endl;
return 0;
}
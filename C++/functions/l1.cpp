#include<iostream>
using namespace std;

int fact(int n){
    int i = 1;
    int fact = 1;
    while(i <= n){
        fact = fact * i;
        i++;
    }
    return fact;
}
int main(){
    int n = 5;
    int r = 2;
 int fact_n =  fact(n);
 int fact_r = fact(r);
 int fact_n_r = fact(n-r);   
 cout<<fact_n/(fact_r*fact_n_r)<<endl;

}
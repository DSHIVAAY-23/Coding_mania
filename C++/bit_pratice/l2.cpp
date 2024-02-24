///swap bits
 #include<bits/stdc++.h>
 using namespace std;
const int N = 1e5 +10;
void printBinary(int num){
    for(int i =10;i>=0;--i){
        cout<<((num>>i)&1);

    }
    cout<<endl;
}
int main(){
    int n = 9;
    printBinary(n);
    printBinary(n&(1<<3));
    printBinary(~n);
    printBinary(n&(~(1<<3)));



}
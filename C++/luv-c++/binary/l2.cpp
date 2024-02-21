 #include<bits/stdc++.h>
 using namespace std;
const int N = 1e5 +10;
void printBinary(int num){
    for(int i =10;i>=0;--i){
        cout<<((num>>i)&1);

    }
    cout<<endl;
}


// (1<<i) ------->>. gives the 2*i i.e set bit on pirticular place

 int main() {
    
 printBinary(9);
 int a = 9;


// to invert all the bits
int num = pow(2,ceil(log2( a)))-1;

printBinary(num^a);
//bit set == ith bit set
// printBinary(a|(1<<2));


// //inverse
// printBinary(a&(~(1<<3)));
// //bit unset
// printBinary(~(1<<3));

// //toggle
// printBinary(1^(1<<2));

int count = 0;
for(int i =10;i>=0;--i){
    if((a&(1<<i))!= 0){
        count++;
    }
}
cout<<count<<endl;

// cout<<__builtin_popcount(a)<<endl;


}

 
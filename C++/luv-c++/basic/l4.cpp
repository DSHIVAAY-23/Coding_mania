 #include<bits/stdc++.h>
 using namespace std;


 int main(){
    int a = 5;
    int b = 10;
     a = a^b;
     b = b^a;
     a = a^b;
    cout<<a<<endl;
    cout<<b<<endl;
 }
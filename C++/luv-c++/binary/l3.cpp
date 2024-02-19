 #include<bits/stdc++.h>
 using namespace std;
const int N = 1e5 +10;
void printBinary(int num){
    for(int i =10;i>=0;--i){
        cout<<((num>>i)&1);

    }
    cout<<endl;
}




 int main() {
    for(int i =0;i<9;++i) { printBinary(i);
    if(i&1){
        cout<<"odd\n";
    }
    else{
        cout<<"even\n";
    }
    }

// divide and modulo
int n = 5;
cout<<(n<<1)<<endl;
cout<<(n>>1)<<endl;

// reverse characters

// char A = 'A';
// char a = A | (1<<5);
// cout<<a<<endl;
// cout<<A<<endl;

//reverse character tricks
char A = 'A';
char a = A | ' ';
cout<<a<<endl;
char d ='d';
char D = d&'_';
cout<<D<<endl;

return 0;


//


}

 
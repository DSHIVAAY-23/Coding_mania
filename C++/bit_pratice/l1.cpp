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
  int N = 29;
  printBinary(29);
  int currentLength = 0;
  int maxLength = 0;
   for (int i = 10 ; i >= 0 ; i-- ) {
    if(((1<<i)&N)){
        currentLength++;
         maxLength++;
    }
    else{
        currentLength = 0;
    }
   }
    cout<<maxLength<<endl;
    return 0;
}

    
   



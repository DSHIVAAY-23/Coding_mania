 #include<bits/stdc++.h>
 using namespace std;

//  #define endl '\n'
//  #define int long long


 int main() {
    
   
    

set<string>  s;
int n;
cin>>n;
for(int i = 0; i < n;++i) {
int str;
cin >> str;
s.insert(str);
}
for (string value:s){
        cout<< value <<endl;
    }

 }
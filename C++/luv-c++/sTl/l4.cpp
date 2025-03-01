 #include<bits/stdc++.h>
 using namespace std;

//  #define endl '\n'
//  #define int long long




 int main() {
    
   
    

map<int,string>  m;
m[0] = "hello";
m[1] = "world";
m[2] = "hi";
map <int,string>::iterator it ;


for (it= m.begin();it!=m.end();++it ){
    cout<<it->first<<" "<<(*it).second<<endl;
};
// sort(a.begin(), a.end());
//  for (auto it:m) cout<<it<<endl;


 }
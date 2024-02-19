 #include<bits/stdc++.h>
 using namespace std;

//  #define endl '\n'
//  #define int long long

void print(set<string> &s){
    for (string value:s){
        cout<< value <<endl;
    }
    for (auto it =s.begin(); it !=s.end(); ++it){
        cout<< (*it) <<endl;

    }

}


 int main() {
    
   
    

set<string>  s;
s.insert("helll");
s.insert("zxrdrww");
s.insert("world");
// map <int,string>::iterator it ;
auto it = s.find("hello");
print(s);

// for (it= s.begin();it!=s.end();++it ){
//     cout<<(*it).first<<" "<<(*it).second<<endl;
// };


// sort(a.begin(), a.end());
//  for (auto it:s) cout<<it<<endl;


 }
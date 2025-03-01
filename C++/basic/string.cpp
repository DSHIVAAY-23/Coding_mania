#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//reverse string

int main(){
    string d = "aabaa";
    string s ;
    for(int i=d.size()-1;i>=0;--i){ 
        s.push_back(d[i]);
    }
    if(s == d){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

    
    
    
    

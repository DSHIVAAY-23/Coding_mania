#include<iostream>
using namespace std;
#include <stack>

int main (){
    stack<int> s;
    s.push(20);
    s.push(30);

    s.pop();
   cout<<s.top()<<endl;
}
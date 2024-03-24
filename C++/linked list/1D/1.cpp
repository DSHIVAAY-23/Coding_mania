
#include<bits/stdc++.h>
 using namespace std;

 struct Node {
    // define data and next varibles
    public:
    int data ;
    Node* next ;

 public:
    Node(int data1){
       this-> data = data1 ;
       this-> next = nullptr ;
    }


 }  ;     
 int main(){
    Node* y = new Node(10);
    cout<<y->data<<endl;
    cout<<y->next<<endl;

 }
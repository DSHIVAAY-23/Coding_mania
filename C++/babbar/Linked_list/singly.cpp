#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    
    public:
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
    int value = this->data ;
    if(this->next != nullptr){
        delete next ;
        this->next = nullptr;
    }
    cout<<"memory free"<<endl;
}
 
};
void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    
    temp->next = head;
    head = temp;
}
void printLL(Node* head){
 Node* temp = head;
 while( temp!=NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
 }
 cout<<endl;
}
void inserttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail= temp;

}
void insertmiddle(Node* &head, int d,int position){
    if(position==1){
        insertathead(head,d);
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while(cnt!=position) {
        temp = temp->next;
        cnt++;
    }
    Node* temp1 = new Node(d);
    temp1->next = temp->next;
    temp->next = temp1;

}
void deletenode(int position,Node* & head){
// first remove
    if(position==1){
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    //memory free

    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next; //incrementing temp untill we found position
            cnt++;
        }
        prev->next = curr -> next;
        curr->next = NULL;
        delete curr;
    }

    
 }
int main(){
   Node* x = new Node(10);
   cout<<x->data<<endl;
//    cout<<x->next<<endl;

   Node* head = x;
   Node* tail = x;
   printLL(head);
   insertathead(head,20);
   insertathead(head,30);
   printLL(head);
   inserttail(tail,40);
   printLL(head);
   insertmiddle(head,50,2);
   printLL(head);
   deletenode(2,head);
   printLL(head);   
}



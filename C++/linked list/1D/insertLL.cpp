
#include<bits/stdc++.h>
 using namespace std;

 struct Node {
    // define data and next varibles
    public:
    int data ;
    Node* next ;
//constructor
 public:
    Node(int data1){
        this-> data = data1 ;
        this-> next = nullptr ;
    }
~Node(){
    int value = this->data ;
    if(this->next != nullptr){
        delete next ;
        this->next = nullptr;
    }
    cout<<"memory free"<<endl;
}


 }  ; 
 
 void insertLL(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

    
 }
void inserttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;

    
 }
 void insertmiddle(Node* &head,int d,int position){
    if(position==1){
        insertLL(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position){
        temp = temp->next; //incrementing temp untill we found position
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

 void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
 }
 int main(){
 Node* y = new Node(10);
    cout<<y->data<<endl;
    cout<<y->next<<endl;
    Node* head = y;
    Node* tail  = y;


    insertLL(head,12);
    printLL(head);
    inserttail(tail,15);
    printLL(head);
    insertmiddle(head,13,1);
    printLL(head);
    deletenode(4,head);
    printLL(head);

    return 0;
 }
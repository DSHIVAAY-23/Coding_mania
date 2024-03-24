
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


 }  ; 
 
 Node* convertarrtoLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size();i++) {
      Node* temp = new Node(arr[i]);
      mover->next = temp;
       mover=temp;
    }
    return head;
 }    
 int lengthofLL(Node* head){
    int cnt =0;
    Node *temp = head;
         while(temp!=NULL){
        temp = temp->next ;
        cnt++;
    }  
    return cnt;
 }
 int search(Node* head,int value){
  Node *temp = head;
         while(temp!=NULL){
            if(temp->data==value)return 1;
        
        temp = temp->next ;
        
    } 
    return 0;

 }
 
 int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    
     Node* head = convertarrtoLL(arr);
    // cout<<head->data;
    // Node* temp = head->next;
    // while(temp!=NULL){
    //     // cout<<temp->data<<" ";
    //     temp = temp->next ;
    // }  
//    cout<<lengthofLL(head);
   cout<<search(head,1);
 }
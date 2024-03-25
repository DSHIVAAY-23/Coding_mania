#include<iostream>
using namespace std;
class Stack{

    public:
    int size;
    int *arr;
    int top ;
    
 Stack(int size){
    this -> size = size;
    arr = new int[size];
    top = -1;  
 }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
   void pop(){
    if(top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        top--;
    }

   }
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
        cout<<"Stack Underflow"<<endl;
        return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }



    };



int main (){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);

    st.pop();
    

    cout<<st.peek()<<endl;
    // cout<<st.isEmpty()<<endl;
    
    
}
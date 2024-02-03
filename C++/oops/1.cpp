#include<iostream>
using namespace std;


class Human{

private:
int height;
int weight;
int age;

int getHeight(){
    return this->height;
}
void setHeight(int h){
    this->height = h;
}
};
class male : public Human{
 public:
 string name;
 void attack(){
    cout << "fu" << endl;
 }
};

int main (){
    male object1;
    object1.name = "d";
    cout << object1.name << endl;
    



}
#include<iostream>
using namespace std;

class bag{
    public:
    int laptop;
    int earphone;
    int charger;
bag(int laptop,int earphone){
    cout << "constructor" << endl;
    this->laptop = laptop;
    this->earphone = earphone;
}
void print(){
    cout << "laptop = " << this->laptop << endl;
    cout << "earphone = " << this->earphone << endl;
}
    private:
    int money;
    int medicine;
public:
int getMoney() { return money; }
int getmedicine() { return medicine; }

void setmoney(int m) { money = m; }

};
int main(){

    bag b(2,2);
    b.print();
    bag temp(b);
    temp.print();


    b.setmoney(100);
    // cout<<b.getMoney()<<endl;

    b.laptop=10;
    b.earphone=20;
    b.charger=30;
    
    // cout<<b.laptop<<endl;
    // cout<<b.earphone<<endl;
    // cout<<b.charger<<endl;
   
    
}
#include <iostream>
using namespace std;

class A{
public:
    void display(){
        cout<<"Class A"<<endl;
    }
};

class B : public A{
public:
    void show(){
        cout<<"Class B"<<endl;
    }
};

int main(){
    B obj;
    obj.display();
    obj.show();
}
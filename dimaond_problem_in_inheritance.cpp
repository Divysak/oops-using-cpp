#include <iostream>
using namespace std;

class test{
public:
    void display(){
        cout << "test";
    }
};

class test2 : virtual public test {};

class test3 : virtual public test {};

class test4 : public test2, public test3 {};

int main(){
    test4 t4;
    t4.display();
}


/*
 here is the diamond problem in the program , so to solve this problen we use virtual ihertance in the program
diamond problen occour in multipleinheritance when a class inherte from two class that both inhertie from a same base vlass this create 
ambiguity because the derived class recieve two copies of the base class the inhertannce stucture form a dimon nd shape thats why itis called diamind 
problem*/

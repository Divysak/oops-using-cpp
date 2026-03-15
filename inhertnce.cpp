#include <iostream>
using namespace std;

class employee {
protected:
    string name;

public:
    employee(string n) {
        name = n;
    }
};

class faculty : public employee {
public:
    faculty(string n) : employee(n) {}

    void display() {
        cout << "Name of the faculty is " << name;
    }
};

int main() {
    faculty f("John");
    f.display();
    return 0;
}
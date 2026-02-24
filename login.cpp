#include <iostream>
using namespace std;

class User {
private:
    string password;

public:
    void setPassword(string p) {
        if(p.length() >= 6) {
            password = p;
            cout << "Password Set Successfully\n";
        } else {
            cout << "Password must be at least 6 characters\n";
        }
    }

    bool login(string p) {
        return p == password;
    }
};

int main() {
    User u;

    string pass;
    cout << "Enter password to set: ";
    cin >> pass;
    u.setPassword(pass);

    string attempt;
    cout << "Enter password to login: ";
    cin >> attempt;

    if(u.login(attempt))
        cout << "Login Successful";
    else
        cout << "Login Failed";
}


//login.cpp
//g++ login.cpp -o login
//./login
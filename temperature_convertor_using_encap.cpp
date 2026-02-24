#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    void setCelsius(double c) {
        celsius = c;
    }

    double getFahrenheit() {
        return (celsius * 9/5) + 32;
    }
};

int main() {
    Temperature t;
    t.setCelsius(25);
    cout << "Fahrenheit: " << t.getFahrenheit();
}
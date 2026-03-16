#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float P, R, T, CI, A;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    A = P * pow((1 + R/100), T);

    CI = A - P;

    cout << "Compound Interest = " << CI;

    return 0;
}
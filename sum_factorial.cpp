// wap to sum the facatorial 
#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }

    cout << "Sum of factorials up to " << n << " is " << sum << endl;
    return 0;
}

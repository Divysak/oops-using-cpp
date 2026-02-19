// wap to print the largest digit 
#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) num = -num;

    int maxDigit = 0;
    if (num == 0) {
        maxDigit = 0;
    } else {
        while (num > 0) {
            int digit = num % 10;
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            num /= 10;
        }
    }

    cout << "Largest digit: " << maxDigit << endl;
    return 0;
}

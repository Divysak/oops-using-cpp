// wap to find the neon number or not
// A neon number is a number where the sum of digits of its square equals the number itself.
// Example: 9 -> 9*9 = 81 and 8+1 = 9
#include <iostream>
using namespace std;

bool isNeon(int n) {
    long long sq = (long long)n * n;
    int sum = 0;
    while (sq > 0) {
        sum += sq % 10;
        sq /= 10;
    }
    return sum == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isNeon(num))
        cout << num << " is a neon number." << endl;
    else
        cout << num << " is not a neon number." << endl;
    return 0;
}
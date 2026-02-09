// wap to print the count even and odd digits in a number
#include <iostream>
using namespace std;
int main()
{
    int n, evenCount = 0, oddCount = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0)
    {
        int digit = n % 10;

        if(digit % 2 == 0)
            evenCount++;
        else
            oddCount++;

        n = n / 10;
    }

    cout << "Even digits count = " << evenCount << endl;
    cout << "Odd digits count = " << oddCount;

    return 0;
}

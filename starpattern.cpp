
/* wap to print the start pattern   *         *
                                    * *     * *
                                    * * * * * *
*/
#include <iostream>
using namespace std;

int main() 
{
    int n = 3;   // number of rows

    for(int i = 1; i <= n; i++)
    {
        // Left stars
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Spaces in middle
        for(int k = 1; k <= 2*(n - i); k++)
        {
            cout << "  ";
        }

        // Right stars
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

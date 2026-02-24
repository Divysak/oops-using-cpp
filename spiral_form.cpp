#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    cout << "Spiral Order: ";

    while (top <= bottom && left <= right) {

        // 1. Left to Right
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;

        // 2. Top to Bottom
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;

        // 3. Right to Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // 4. Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }

    return 0;
}
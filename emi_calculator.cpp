#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double P, R, N, EMI;

    cout<<"Enter Loan Amount: ";
    cin>>P;

    cout<<"Enter Interest Rate (per year): ";
    cin>>R;

    cout<<"Enter Number of Months: ";
    cin>>N;

    R = R / (12 * 100);

    EMI = (P * R * pow(1 + R, N)) / (pow(1 + R, N) - 1);

    cout<<"Monthly EMI = "<<EMI;

    return 0;
}
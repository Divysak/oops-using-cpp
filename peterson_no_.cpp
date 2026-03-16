#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++)
        fact *= i;
    return fact;
}

int main(){

    int num, sum = 0, temp, rem;

    cout<<"Enter number: ";
    cin>>num;

    temp = num;

    while(temp != 0){
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    if(sum == num)
        cout<<"Peterson Number";
    else
        cout<<"Not Peterson Number";

    return 0;
}
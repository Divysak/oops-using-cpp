#include <iostream>
using namespace std;

int main(){

    int num, octal = 0, i = 1;

    cout<<"Enter decimal number: ";
    cin>>num;

    while(num != 0){
        octal += (num % 8) * i;
        num /= 8;
        i *= 10;
    }

    cout<<"Octal = "<<octal;

    return 0;
}
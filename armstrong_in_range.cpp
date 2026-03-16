#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout<<"Enter starting number: ";
    cin>>start;

    cout<<"Enter ending number: ";
    cin>>end;

    for(int i=start;i<=end;i++){
        int num = i, sum = 0, digits = 0, temp = i;

        while(temp != 0){
            digits++;
            temp /= 10;
        }

        temp = i;

        while(temp != 0){
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == i)
            cout<<i<<" ";
    }

    return 0;
}
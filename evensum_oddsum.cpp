// wap to print the sun of even and odd digits in a number
#include <iostream>
using namespace std;
int main(){
    int n ,evens=0,odds=0;
    cout<<"enter a number :";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        if(digit%2==0)
            evens+=digit;
        else
            odds+=digit;
        n=n/10;
    }
    cout<<"the sum of even digits is :"<<evens<<endl;
    cout<<"the sum of odd digits is :"<<odds<<endl;
    return 0;
}


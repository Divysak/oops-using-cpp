// wap to find the neon number or not
// A neon number is a number where the sum of digits of its square equals the number itself.
// Example: 9 -> 9*9 = 81 and 8+1 = 9
#include <iostream>
using namespace std;
int main(){
    int n,rem,sum=0,square;
    cout<<"enter the number :"<<endl;
    cin>>n;
    square=n*n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(sum==square)
    {
        cout<<"the number is neon number"<<endl;
    }
    else
    {
        cout<<"the number is not neon number"<<endl;
    }
    return 0;
}
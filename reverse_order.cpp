// wap to print the number in reverse order 
#include <iostream>
using namespace std;
int main()
{
    int num,rev=0,rem;
    cout<<"enter the number :";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"the reverse number is :"<<rev<<endl;
    return 0;
} 
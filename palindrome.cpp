// check wether the no is palimdrom or not 
#include <iostream>
using namespace std;
int main()
{
    int num,rev=0,rem,temp;
    cout<<"enter the number :"<<endl;
    cin>>num;
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
    {
        cout<<"the number is palimdrom"<<endl;
    }
    else
    {
        cout<<"the number is not palimdrom"<<endl;
    }
    return 0;
}
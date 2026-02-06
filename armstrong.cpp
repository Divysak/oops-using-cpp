// wap to check wether the no is armstong or not
#include <iostream>
using namespace std;
int main()
{
    int num,rem,temp,sum=0;
    cout<<"enter the number :"<<endl;
    cin>>num;
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum)
    {
        cout<<"the number is armstong"<<endl;
    }
    else
    {
        cout<<"the number is not armstong"<<endl;
    }
    return 0;
}

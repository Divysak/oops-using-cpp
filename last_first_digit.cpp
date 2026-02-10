//wap to print the first and last digit 
#include <iostream>
using namespace std;
int main(){
    int n,last ,first,temp=1,rem;
    cout<<"enter the number:";
    cin>>n;
    rem=n;
    last=n%10;
    while(n>=10){
        n/=10;
        temp*=10;

    }
    first=n;

    cout<<"the first digit is:"<<first<<endl;
    cout<<"the last digit is:"<<last;
    return 0;
}
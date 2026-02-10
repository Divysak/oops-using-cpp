// wap to print the first and last digit swapped 
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

    int swap=(rem%temp)/10;
    swap=last*temp+swap*10+first;
    cout<<"the number after swapping is:"<<swap;
    return 0;

}


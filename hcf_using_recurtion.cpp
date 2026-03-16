#include <iostream>
using namespace std;

int hcf(int a, int b){
    if(b == 0)
        return a;
    return hcf(b, a % b);
}

int main(){

    int a, b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"HCF = "<<hcf(a,b);

    return 0;
}
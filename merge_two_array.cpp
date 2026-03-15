#include <iostream>
using namespace std;

int main() {

    int a[5], b[5], c[10];

    cout<<"Enter first array:\n";
    for(int i=0;i<5;i++)
        cin>>a[i];

    cout<<"Enter second array:\n";
    for(int i=0;i<5;i++)
        cin>>b[i];

    for(int i=0;i<5;i++)
        c[i] = a[i];

    for(int i=0;i<5;i++)
        c[i+5] = b[i];

    cout<<"Merged array:\n";

    for(int i=0;i<10;i++)
        cout<<c[i]<<" ";

    return 0;
}
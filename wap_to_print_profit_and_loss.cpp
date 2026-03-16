#include <iostream>
using namespace std;

int main(){

    float CP, SP;

    cout<<"Enter Cost Price: ";
    cin>>CP;

    cout<<"Enter Selling Price: ";
    cin>>SP;

    if(SP > CP)
        cout<<"Profit = "<<SP - CP;
    else if(CP > SP)
        cout<<"Loss = "<<CP - SP;
    else
        cout<<"No Profit No Loss";

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    float price, gst, total;

    cout<<"Enter product price: ";
    cin>>price;

    cout<<"Enter GST percentage: ";
    cin>>gst;

    total = price + (price * gst / 100);

    cout<<"Total price with GST = "<<total;

    return 0;
}
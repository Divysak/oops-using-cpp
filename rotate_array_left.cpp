#include <iostream>
using namespace std;

int main() {

    int arr[10], n, temp;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];

    temp = arr[0];

    for(int i=0;i<n-1;i++)
        arr[i] = arr[i+1];

    arr[n-1] = temp;

    cout<<"Array after rotation:\n";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
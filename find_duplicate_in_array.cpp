#include <iostream>
using namespace std;

int main() {

    int arr[10];

    cout<<"Enter 10 numbers:\n";

    for(int i=0;i<10;i++)
        cin>>arr[i];

    cout<<"Duplicate elements:\n";

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j])
                cout<<arr[i]<<" ";
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int arr[10], n, temp[10], k = 0;
    bool found;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        found = false;

        for(int j=0;j<k;j++){
            if(arr[i] == temp[j]){
                found = true;
                break;
            }
        }

        if(!found){
            temp[k] = arr[i];
            k++;
        }
    }

    cout<<"Array without duplicates:\n";

    for(int i=0;i<k;i++)
        cout<<temp[i]<<" ";

    return 0;
}
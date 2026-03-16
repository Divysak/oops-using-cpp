#include <iostream>
#include <stack>
using namespace std;

int main(){

    int num = 13;
    stack<int> s;

    while(num > 0){
        s.push(num % 2);
        num /= 2;
    }

    cout<<"Binary: ";

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

    return 0;
}
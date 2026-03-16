#include <iostream>
using namespace std;

int main() {

    string str;
    int upper=0, lower=0, digit=0;

    cout<<"Enter string: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){

        if(isupper(str[i]))
            upper++;
        else if(islower(str[i]))
            lower++;
        else if(isdigit(str[i]))
            digit++;
    }

    cout<<"Uppercase = "<<upper<<endl;
    cout<<"Lowercase = "<<lower<<endl;
    cout<<"Digits = "<<digit<<endl;

    return 0;
}
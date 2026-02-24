#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    string result = "";

    for(int i = 0; i < str.length(); i++) {
        if(str[i] != ' ')
            result += str[i];
    }

    cout << "After Removing Spaces: " << result;
}
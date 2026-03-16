#include<iostream>
using namespace std;

int main(){
    string s="hello world";
    string res="";

    for(char c:s)
        if(c!=' ')
            res+=c;

    cout<<res;
}
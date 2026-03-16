#include <iostream>
using namespace std;

struct Page {
    string url;
    Page* next;
};

int main() {

    Page* p1 = new Page{"google.com",NULL};
    Page* p2 = new Page{"youtube.com",NULL};
    Page* p3 = new Page{"github.com",NULL};

    p1->next = p2;
    p2->next = p3;

    Page* temp = p1;

    cout<<"Browser History:\n";
    while(temp){
        cout<<temp->url<<endl;
        temp = temp->next;
    }
}
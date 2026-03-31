#include <iostream>
using namespace std;

// 🔷 Room Node (Linked List)
class Hotel {
private:
    struct room {
        int roomNo;
        string guestName;
        string roomType;
        int days;
        room* next;
    };

    room* head;

    bool isEmpty() {
        return head == nullptr;
    }

public:
    Hotel() {
        head = nullptr;
    }

    // 🔷 Book Room (Add at End)
    void bookRoom(int rno, string name, string type, int days) {
        room* newroom = new room{rno, name, type, days, nullptr};

        if (isEmpty()) {
            head = newroom;
        } else {
            room* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newroom;
        }

        cout << "Room booked for " << name << endl;
    }

    // 🔷 Check-in (Priority/VIP at Front)
    void vipCheckIn(int rno, string name, string type, int days) {
        room* newroom = new room{rno, name, type, days, head};
        head = newroom;
        cout << "VIP Guest checked in: " << name << endl;
    }

    // 🔷 Check-out (Remove First)
    void checkout() {
        if (isEmpty()) {
            cout << "No guests in hotel\n";
            return;
        }

        room* temp = head;
        cout << "Checking out: " << head->guestName << endl;
        head = head->next;
        delete temp;
    }

    // 🔷 Cancel Last Booking
    void cancelLast() {
        if (isEmpty()) {
            cout << "No bookings\n";
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        room* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
        cout << "Last booking cancelled\n";
    }

    // 🔷 Display Guests
    void display() {
        if (isEmpty()) {
            cout << "No guests\n";
            return;
        }

        room* temp = head;
        cout << "\n--- Hotel Guests ---\n";

        while (temp != nullptr) {
            cout << "Room: " << temp->roomNo
                 << ", Name: " << temp->guestName
                 << ", Type: " << temp->roomType
                 << ", Days: " << temp->days << endl;
            temp = temp->next;
        }
    }
};

// 🔷 Billing Class
class Billing {
public:
    int rate;

    int calculate(string type, int days) {
        if (type == "Deluxe") rate = 2000;
        else if (type == "AC") rate = 1500;
        else rate = 1000;

        return rate * days;
    }

    void generateBill(string name, string type, int days) {
        cout << "\n--- BILL ---\n";
        cout << "Guest: " << name << endl;
        cout << "Room Type: " << type << endl;
        cout << "Total Bill: " << calculate(type, days) << endl;
    }
};

// 🔷 MAIN MENU
int main() {

    Hotel h;
    Billing b;

    int choice;

    do {
        cout << "\n===== HOTEL MANAGEMENT =====\n";
        cout << "1. Book Room\n";
        cout << "2. VIP Check-in\n";
        cout << "3. Check-out\n";
        cout << "4. Cancel Last Booking\n";
        cout << "5. Display Guests\n";
        cout << "6. Generate Bill\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int rno, days;
            string name, type;
            cout << "Enter Room No, Name, Type(Deluxe/AC/Normal), Days: ";
            cin >> rno >> name >> type >> days;
            h.bookRoom(rno, name, type, days);
        }

        else if (choice == 2) {
            int rno, days;
            string name, type;
            cout << "Enter Room No, Name, Type, Days: ";
            cin >> rno >> name >> type >> days;
            h.vipCheckIn(rno, name, type, days);
        }

        else if (choice == 3) {
            h.checkout();
        }

        else if (choice == 4) {
            h.cancelLast();
        }

        else if (choice == 5) {
            h.display();
        }

        else if (choice == 6) {
            string name, type;
            int days;
            cout << "Enter Name, Room Type, Days: ";
            cin >> name >> type >> days;
            b.generateBill(name, type, days);
        }

    } while (choice != 0);

    return 0;
}
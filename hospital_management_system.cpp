#include <iostream>
using namespace std;

// 🔷 Patient Node (Linked List)
class Hospital {
private:
    struct node {
        int patientid;
        string name;
        string disease;
        node* next;
    };

    node* head;

    bool isEmpty() {
        return head == nullptr;
    }

public:
    Hospital() {
        head = nullptr;
    }

    // 🔷 Emergency Patient (Front)
    void addEmergency(int id, string name, string disease) {
        node* newnode = new node{id, name, disease, head};
        head = newnode;
        cout << "Emergency patient added: " << name << endl;
    }

    // 🔷 Regular Patient (End)
    void addRegular(int id, string name, string disease) {
        node* newnode = new node{id, name, disease, nullptr};

        if (isEmpty()) {
            head = newnode;
        } else {
            node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
        }

        cout << "Regular patient added: " << name << endl;
    }

    // 🔷 Treat Patient (Remove First)
    void treatPatient() {
        if (isEmpty()) {
            cout << "No patient to treat\n";
            return;
        }

        node* temp = head;
        cout << "Treating: " << head->name << endl;
        head = head->next;
        delete temp;
    }

    // 🔷 Insert at Position
    void insertAt(int id, string name, string disease, int pos) {
        if (pos <= 0 || isEmpty()) {
            addEmergency(id, name, disease);
            return;
        }

        node* newnode = new node{id, name, disease, nullptr};
        node* temp = head;

        for (int i = 0; i < pos - 1 && temp->next != nullptr; i++) {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;

        cout << "Inserted patient: " << name << endl;
    }

    // 🔷 Discharge Last
    void dischargeLast() {
        if (isEmpty()) {
            cout << "No patient\n";
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
    }

    // 🔷 Display Patients
    void display() {
        if (isEmpty()) {
            cout << "No patients\n";
            return;
        }

        node* temp = head;
        cout << "\n--- Patient Queue ---\n";
        while (temp != nullptr) {
            cout << "ID: " << temp->patientid
                 << ", Name: " << temp->name
                 << ", Disease: " << temp->disease << endl;
            temp = temp->next;
        }
    }
};

// 🔷 Doctor Class
class Doctor {
public:
    string name;
    string specialization;

    void setDoctor(string n, string s) {
        name = n;
        specialization = s;
    }

    void displayDoctor() {
        cout << "\nDoctor: " << name
             << " (" << specialization << ")" << endl;
    }
};

// 🔷 Billing Class
class Billing {
public:
    float consultation = 500;
    float medicine;
    float room;

    float total() {
        return consultation + medicine + room;
    }

    void generateBill(string patientName) {
        cout << "\n--- BILL ---\n";
        cout << "Patient: " << patientName << endl;
        cout << "Total Amount: " << total() << endl;
    }
};

// 🔷 MAIN MENU SYSTEM
int main() {

    Hospital h;
    Doctor d;
    Billing b;

    d.setDoctor("Dr. Sharma", "Cardiologist");

    int choice;

    do {
        cout << "\n===== HOSPITAL MANAGEMENT =====\n";
        cout << "1. Add Emergency Patient\n";
        cout << "2. Add Regular Patient\n";
        cout << "3. Treat Patient\n";
        cout << "4. Display Patients\n";
        cout << "5. Show Doctor\n";
        cout << "6. Generate Bill\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id; string name, disease;
            cout << "Enter ID, Name, Disease: ";
            cin >> id >> name >> disease;
            h.addEmergency(id, name, disease);
        }

        else if (choice == 2) {
            int id; string name, disease;
            cout << "Enter ID, Name, Disease: ";
            cin >> id >> name >> disease;
            h.addRegular(id, name, disease);
        }

        else if (choice == 3) {
            h.treatPatient();
        }

        else if (choice == 4) {
            h.display();
        }

        else if (choice == 5) {
            d.displayDoctor();
        }

        else if (choice == 6) {
            string pname;
            cout << "Enter patient name: ";
            cin >> pname;

            cout << "Enter medicine cost: ";
            cin >> b.medicine;

            cout << "Enter room charges: ";
            cin >> b.room;

            b.generateBill(pname);
        }

    } while (choice != 0);

    return 0;
}
#include <iostream>
using namespace std;

class patient {
private:
    struct node {
        int patientid;
        node* next;
    };

    node* head;

    bool isEmpty() {
        return head == nullptr;
    }

public:
    // Constructor
    patient() {
        head = nullptr;
    }

    // Add Emergency Patient (Front)
    void addEmergency(int id) {
        node* newnode = new node{id, head};
        head = newnode;
        cout << "Emergency patient added: " << id << endl;
    }

    // Add Regular Patient (End)
    void addRegular(int id) {
        node* newnode = new node{id, nullptr};

        if (isEmpty()) {
            head = newnode;
            cout << "Patient added: " << id << endl;
            return;
        }

        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newnode;
        cout << "Patient added: " << id << endl;
    }

    // Treat Patient (Remove from front)
    void treatPatient() {
        if (isEmpty()) {
            cout << "No patient to treat.\n";
            return;
        }

        node* temp = head;
        cout << "Treating patient: " << head->patientid << endl;
        head = head->next;
        delete temp;
    }

    // Display Queue
    void display() {
        if (isEmpty()) {
            cout << "No patients in queue.\n";
            return;
        }

        node* temp = head;
        cout << "Patient Queue: ";
        while (temp != nullptr) {
            cout << temp->patientid << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Count Patients
    int countPatients() {
        int count = 0;
        node* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        return count;
    }

    // Search Patient
    void searchPatient(int id) {
        node* temp = head;

        while (temp != nullptr) {
            if (temp->patientid == id) {
                cout << "Patient " << id << " found in queue.\n";
                return;
            }
            temp = temp->next;
        }

        cout << "Patient not found.\n";
    }

    // Destructor (free memory)
    ~patient() {
        while (!isEmpty()) {
            treatPatient();
        }
    }
};

int main() {
    patient p;
    int choice, id;

    do {
        cout << "\n===== HOSPITAL PATIENT SYSTEM =====\n";
        cout << "1. Add Emergency Patient\n";
        cout << "2. Add Regular Patient\n";
        cout << "3. Treat Patient\n";
        cout << "4. Display Queue\n";
        cout << "5. Count Patients\n";
        cout << "6. Search Patient\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Patient ID: ";
                cin >> id;
                p.addEmergency(id);
                break;

            case 2:
                cout << "Enter Patient ID: ";
                cin >> id;
                p.addRegular(id);
                break;

            case 3:
                p.treatPatient();
                break;

            case 4:
                p.display();
                break;

            case 5:
                cout << "Total Patients: " << p.countPatients() << endl;
                break;

            case 6:
                cout << "Enter Patient ID to search: ";
                cin >> id;
                p.searchPatient(id);
                break;

            case 7:
                cout << "Exiting system...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 7);

    return 0;
}
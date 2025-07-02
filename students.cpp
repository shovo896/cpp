#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

void addStudent() {
    ofstream file("students.txt", ios::app);
    Student s;
    s.input();
    file << s.roll << "," << s.name << "," << s.marks << "\n";
    file.close();
    cout << "Student added successfully!\n";
}

void displayAll() {
    ifstream file("students.txt");
    Student s;
    string line;

    cout << "\nList of Students:\n";
    while (getline(file, line)) {
        size_t pos1 = line.find(',');
        size_t pos2 = line.rfind(',');

        s.roll = stoi(line.substr(0, pos1));
        s.name = line.substr(pos1 + 1, pos2 - pos1 - 1);
        s.marks = stof(line.substr(pos2 + 1));

        s.display();
    }
    file.close();
}

void searchStudent() {
    int searchRoll;
    cout << "Enter Roll Number to search: ";
    cin >> searchRoll;

    ifstream file("students.txt");
    Student s;
    string line;
    bool found = false;

    while (getline(file, line)) {
        size_t pos1 = line.find(',');
        size_t pos2 = line.rfind(',');

        s.roll = stoi(line.substr(0, pos1));
        s.name = line.substr(pos1 + 1, pos2 - pos1 - 1);
        s.marks = stof(line.substr(pos2 + 1));

        if (s.roll == searchRoll) {
            cout << "\nStudent Found:\n";
            s.display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\n==== Student Management System ====\n";
        cout << "1. Add Student\n2. Display All Students\n3. Search Student\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

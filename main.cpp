#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

class Student {
public:
    string indexNumber;
    string fullName;

    Student(string idx, string name) {
        indexNumber = idx;
        fullName = name;
    }
};

vector<Student> students;

// Load students from file
void loadStudents() {
    ifstream file("students.txt");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string idx, name;
        getline(ss, idx, ',');
        getline(ss, name);
        students.push_back(Student(idx, name));
    }
    file.close();
}

// Save students to file
void saveStudents() {
    ofstream file("students.txt");
    for (int i = 0; i < students.size(); i++) {
        file << students[i].indexNumber << ","
             << students[i].fullName << endl;
    }
    file.close();
}

void registerStudent() {
    string idx, name;
    cout << "Index Number: ";
    cin >> idx;
    cin.ignore();
    cout << "Full Name: ";
    getline(cin, name);

    students.push_back(Student(idx, name));
    saveStudents();
    cout << "Student Registered.\n";
}

void viewStudents() {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        cout << students[i].indexNumber
             << " - "
             << students[i].fullName << endl;
    }
}

int main() {
    loadStudents();
    int choice;

    do {
        cout << "\n===== WEEK 1 =====\n";
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: registerStudent(); break;
            case 2: viewStudents(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 3);

    return 0;
}
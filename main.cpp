#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to hold student data
struct Student {
    int id;
    string name;
    float gpa;
};

// Function to display all students
void displayStudents(const vector<Student>& students) {
    cout << "\n--- Student Records ---\n";
    if (students.empty()) {
        cout << "No records found.\n";
        return;
    }
    for (const auto& s : students) {
        cout << "ID: " << s.id << " | Name: " << s.name << " | GPA: " << s.gpa << "\n";
    }
    cout << "-----------------------\n";
}

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n=== DSU Student Portal ===";
        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter ID: ";
            cin >> s.id;
            cout << "Enter Name: ";
            cin >> s.name;
            cout << "Enter GPA: ";
            cin >> s.gpa;
            students.push_back(s);
            cout << "Student added successfully!\n";
        } 
        else if (choice == 2) {
            displayStudents(students);
        }
        else if (choice == 3) {
            cout << "Exiting program. Goodbye!\n";
        } 
        else {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}

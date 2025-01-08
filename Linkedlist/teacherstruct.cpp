#include <iostream>
#include <string>
using namespace std;

struct Teacher {
    string name;
    int age;
    int salary;
    bool knowsEnglish;
    string gender;

    // Constructor to initialize member variables
    Teacher() : name(""), age(0), salary(0), knowsEnglish(false), gender("") {}

    // Function to display teacher details
    void teacherDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Knows English: " << (knowsEnglish ? "Yes" : "No") << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    Teacher t[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter the name of teacher: ";
        cin >> t[i].name;
        cout << "Enter the age of teacher: ";
        cin >> t[i].age;
        cout << "Enter the salary of teacher: ";
        cin >> t[i].salary;
        cout << "Does the teacher knows English (1 for Yes, 0 for No): ";
        cin >> t[i].knowsEnglish;
        cout << "Gender of teacher: ";
        cin >> t[i].gender;
    }
    for (int i = 0; i < 10; i++) {
        t[i].teacherDetails();
    }
    return 0;
}

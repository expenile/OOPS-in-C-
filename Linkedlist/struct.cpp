#include <bits/stdc++.h>
using namespace std;
//  struct person{
//         int rollno;
//         string name;
//         int age ;
//         void studentDetails(){
//             cout<<"Roll no: "<<rollno<<endl;
//             cout<<"Name: "<<name<<endl;
//             cout<<"Age: "<<age<<endl;
//         }
//     };

struct Teacher{
    string name ;
    int age;
    int salary;
    bool knowsEnglish;
    string gender;
    void teacherDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Knows English: "<<knowsEnglish<<endl;
        cout<<"Gender :"<<gender<<endl;
    }
};

int main()
{
    // person p;
    // p.rollno = 1;
    // p.name = "Rahul";
    // p.age = 20;

    // cout << p.rollno << endl;
    // cout << p.name << endl;
    // cout << p.age << endl;

    // p.studentDetails();
    // person nilesh = {2, "Nilesh", 21};
    // nilesh.studentDetails();

    Teacher t[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the name of teacher: ";
        cin >> t[i].name;
        cout << "Enter the age of teacher: ";
        cin >> t[i].age;
        cout << "Enter the salary of teacher: ";
        cin >> t[i].salary;
        cout << "Does the teacher knows English: ";
        cin >> t[i].knowsEnglish;
        cout << "Gender of teacher: ";
        cin >> t[i].gender;
        
    }
    for (int i = 0; i < 10; i++)
    {
        t[i].teacherDetails();
    }
}
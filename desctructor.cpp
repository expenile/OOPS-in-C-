/*
destructor : opposite of constructor
construcor allocates memory and initializes the object
destructor deallocates memory and cleans up the object
is gets automatically called when the object goes out of scope
*/

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    ~Student(){
        delete cgpaPtr;
    }
};
int main(){
    Student s1("John", 3.5);
    Student s2(s1);
    *(s2.cgpaPtr) = 4.0;
    cout<<s1.name<<endl;
    cout<<*(s1.cgpaPtr)<<endl;
    cout<<s2.name<<endl;
    cout<<*(s2.cgpaPtr)<<endl;
} 
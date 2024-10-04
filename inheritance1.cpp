/*
inheritance : It is a mechanism in which one class acquires the properties (methods and fields) of another.

it is used for code reusability and method overriding.

private properties and function can never be inherited.
public members are everywhere inherited.




Types of inheritance:
1. Single inheritance- one class inherits from another class
2. Multiple inheritance- one class inherits from multiple classes
3. Multilevel inheritance- one class inherits from another class and that class inherits from another class

4. Hierarchical inheritance- one class is inherited by multiple classes
5. Hybrid inheritance   - combination of multiple and multilevel inheritance


*/


#include <bits/stdc++.h>
using namespace std;

class Person{
     public:
        string name;
        int age;

        // Person(string name, int age){
        //     this->name = name;
        //     this->age = age;
        // }

        Person(){

        }

};

class Student :public Person{
    public:
    int rollno;
    void getStudentInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }

};

int main(){
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.rollno = 101;
    s1.getStudentInfo();

} 
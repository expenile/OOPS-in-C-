/*

polymorphism- many forms
constructor overloading is a form of polymorphism

types of polymorphism:
1. compile time polymorphism- static binding or early binding
    - function overloading
    - operator overloading
    -constructor overloading
2. run time polymorphism- dynamic binding or late binding
    - function overriding- inheritance(Parent and child class both have same function name and different implementation hence parent class function is overridden by child class function)
    - virtual functions - they are dynamic in nature
    




*/


//constructor overloading
// #include <bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string name;
//     Student(){
//         cout<<"Student constructor\n"<<endl;
//     }

//     Student(string name){
//         this->name = name;
//         cout<<"Parameterized constructor\n"<<endl;
//     }
// };
// int main(){

//     Student s1("John");
   


// } 

// // function overloading
// #include <bits/stdc++.h>
// using namespace std;
// class Print{
//     public:
//     void show(int a){
//         cout<<"int: "<<a<<endl;
//     }

//     void show(char a){
//         cout<<"char: "<<a<<endl;
//     }
// };

// int main(){
//     Print p;
//     p.show(10);
//     p.show('A');

// } 


// function overriding
#include <bits/stdc++.h>
using namespace std;
class Parent{
    public:
 void getInfo(){
    cout<<"Parent"<<endl;
 }

};

class Child : public Parent{
    public:
    void getInfo(){
        cout<<"Child"<<endl;
    }
};
int main(){
    Child c;
    c.getInfo();

    Parent p;
    p.getInfo();

} ;
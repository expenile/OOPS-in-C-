/*
 this is a special pointer that points to the current object.

this is a keyword in C++ which is used to refer to the object on which the current member function is called.

this is a pointer which stores the address of the current object.

- this->prop is same as *(this).prop

*/


#include <bits/stdc++.h>
using namespace std;

class Teacher {
 public:
  string name;  // object variable
  string dept; // object variable
  string subject; // object variable

  Teacher(string name, string dept, string subject) { // parameterized constructor
  //  name = name; this will not work because compiler will get confused between object variable and parameter variable

    this->name = name;
    this->dept = dept;
    this->subject = subject;
  }

};

int main(){
    
        Teacher t1("Mr. John", "CSE", "C++");
        cout<<t1.name<<" "<<t1.dept<<" "<<t1.subject<<endl;

} 
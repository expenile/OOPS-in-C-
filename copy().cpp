/*

shallow copy:
    a shallow copy of an object copies all of the member field values.(shallow copy is default copy)

deep copy:
     a deep copy not only copies the member field values, it also copies the objects pointed to by the pointers.



*/

// #include <bits/stdc++.h>
// using namespace std;
//   class Student{
//     public:
//     string name;
//     double cgpa;
//     Student(string name, double cgpa){
//         this->name = name;
//         this->cgpa = cgpa;
//     }

     
//      void getStudentInfo(){
//          cout<<name<<endl;
//          cout<<cgpa<<endl;
//      }
//   };
  
// int main(){
//     Student s1("John", 3.5);
//     Student s2(s1) ;// shallow copy
//     s2.getStudentInfo();

// } 



#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student (Student &s){
        this->name = s.name;
        this->cgpaPtr = s.cgpaPtr;
    }
    void getInfo(){
        cout<<name<<endl;
        cout<<*cgpaPtr<<endl;
    }
};
int main(){
    Student s1("John", 3.5);
    Student s2(s1); // deep copy
        s2.getInfo();
    *(s2.cgpaPtr) = 4.0;
    s1.getInfo();

} 







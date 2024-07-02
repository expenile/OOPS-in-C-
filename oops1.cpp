#include <bits/stdc++.h>
using namespace std;
class Teacher{
    // private:
    // double salary;

    public:
    // Teacher(){  // non parameterized constructor
    //     dept = "IT";
    // }

    string name;
    string dept;
    string subject;
    double salary;


    Teacher(string n , string d, string s, double sal){ // parameterized constructor
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    


    // //properties/attributes
    // string name;
    // string dept;
    // string subject;
    

    // //methods / member functions
    // void changeDept(string newDept){
    //     dept = newDept;
    // }


    // //setter
    // void setSalary(double sal){
    //     salary = sal;
    // }

    // //getter
    // double getSalary(){
    //     return salary;
    // }

    void getInfo(){
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<subject<<endl;
        cout<<salary<<endl;
    }

};

class Student{
 string name;
 int age;
 int rollno;

};

int main(){

      Teacher t1{"NIlesh","IT","AT", 200000};
    // Teacher t1;  // internally constructor is called
    // t1.name = "Vishnu";
    // t1.subject = "OOPS";
    // t1.setSalary(50000);
    // t1.dept = "CSE";

    // cout<<t1.name<<endl;
    // cout<<t1.dept<<endl;
    // cout<<t1.subject<<endl;
    // cout<<t1.getSalary()<<endl;

    // Teacher t2;

    t1.getInfo();


} 
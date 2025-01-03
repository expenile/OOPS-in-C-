#include <bits/stdc++.h>
using namespace std;
class Human{
    protected:
    string name;
    int age;
    public:
    void work(){
        cout<<"I am working"<<endl;
    
    }
    Human(){
        cout<<"Hello human"<<endl;
    }
    ~Human(){
        cout<<"Human des called"<<endl;
    }
};
class Student: public Human{
    int roll, fees;

    public:
    //  Student(string name, int age, int roll , int fees){
    //     this->name = name;
    //     this->age  =age;
    //     this->roll = roll;
    //     this->fees  = fees;
    //  }

    Student(){
        cout<<"Hello Student"<<endl;
    }

    ~Student(){
        cout<<"Des of student"<<endl;
    }
};
int main(){
    Student s1;
    


} 
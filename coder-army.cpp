#include <bits/stdc++.h>
using namespace std;
class Student {
    // string name;
    // int age, roll_no;
    // string grade;

    public:
    string name;
    int age, roll;
    string grade;


/*
    void setName(string n){
        if(n.size() ==0){
            cout<<"Invalid name: ";
            return ;
        }
        name   = n;

    }
    void setAge(int a){
        if(a <0 || a> 100){
            cout<<"Invalid age"<<endl;
        }
        age  =a;
    }
    void setRoll(int r){
        roll_no  =r;

    }
    void setGrade(string g){
        grade  =g;
    }

    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getRoll(){
        return roll_no;
    }
    string getGrade(int pin){
        if(pin==123){
            return grade;
        }
        return "Wrong password";

        
    }

    */

  
 
};

class B{
    char a;
    int d;
    char c;
 
};





int main(){
    Student s1;


    /*
    s1.setName("");
    s1.setAge(-2);
    s1.setRoll(1);
   s1.setGrade("A");

   cout<<s1.getName()<<endl;
   cout<<s1.getAge()<<endl;
   cout<<s1.getRoll()<<endl;
   cout<<s1.getGrade(123) <<endl;



 

 //padding
   B obj1;
   cout<<sizeof(obj1)<<endl;


    */


   //dynamic
   Student *s = new Student;
   (*s).name   = "Vishnu";
   (*s).age = 21;
   (*s).roll = 1;
   (*s).grade = "A";
   cout<<(*s).age<<endl;

cout<<s->name<<endl;
cout<<s->grade<<endl;

   


    


} 
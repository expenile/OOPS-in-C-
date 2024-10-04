#include <bits/stdc++.h>
using namespace std;
class A{
     public:
     void sayHello(){
        cout<<"Hello Nilesh"<<endl;
     }
      void sayHello(string name){
        cout<<"Hello Nilesh"<<name<<endl;
     }
      int sayHello(string name, int n){
        cout<<"Hello Nilesh"<<name<<endl;
        return  1;

     }

};
class B{
    public:
    int a,b;
    public:
    int add (){
        return a+b;
    }
    void operator+ (B &obj){
        // int value1 = this->a;
        // int value2  = obj.a;
        // cout<<"output"<<value2-value1<<endl;


        cout<<"Hello"<<endl;
    }

    void operator() (){
        cout<<"Mai bracket hu"<<this->a<<endl;

    }

};
class Animal{

    //same methos name 
    // same signature
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
     public:
    void speak(){
        cout<<"Barking"<<endl;
    }

};
int main(){
    // A obj;
    // obj.sayHello();

    // B obj1, obj2;
    // obj1.a  = 4;
    // obj2.a = 7;
    // obj1+ obj2;
    // obj1();

    Dog d;
    d.speak();

} 
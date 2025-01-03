#include <bits/stdc++.h>
using namespace std;

//pure virtuak fn
//abstract class

class Animal{
    public:
    virtual void speak(){  // by adding virtual it says to decide at runtime , which fo call
        cout<<"huhu"<<endl;
    }
} ;
class Dog :public Animal{
    public:
    void speak(){
        cout<<"bark"<<endl;
    }
    // void some(){
    //     cout<<"Hello"<<endl;
    // }
} ;


class Cat :public Animal{
    public:
    void speak(){
        cout<<"Meow"<<endl;
    }
    // void some(){
    //     cout<<"Hello"<<endl;
    // }
} ;

int main(){
    // Animal *p;
    // p   = new Dog();
   // p->speak(); // huhu will be op 
   //p->some(); // this will give error bcoz Animal class does not have any member fn named some();
    
    
    // Dog d1;
    // d1.speak();

    Animal *p;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());


    for(int i  = 0 ;i <animals.size();i++){
        p = animals[i];
        p->speak();
    }


} 
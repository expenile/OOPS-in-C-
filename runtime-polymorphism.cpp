#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void sound(){
        cout<<"Base fn sound called"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound(){
        cout<<"Derived class sound called"<<endl;

    }
};
int main(){
    // Dog d;
    // d.sound();

    // OR


    Animal *animal;
    Dog d;
    animal   = &d;
    animal->sound();



} 
#include <bits/stdc++.h>
using namespace std;


// hybrid : multiple and hierarchial

class Engine{
    public:
    void engineType(){
        cout<<"Engine type is V8"<<endl;
    }
};

class  Wheels{
    public:
    void wheelCount(){
        cout<<"The Car has 4 wheels"<<endl;
    }
};

class Car : public Engine, public Wheels{
    public:
    void carType(){
        cout<<"Car is Sedan"<<endl;
    }
};


class SportsCar : public Car{
    public:
    void topSpeed(){
        cout<<"Top speed is 200mph"<<endl;
    }
};

int main(){

    SportsCar s1;
    s1.engineType();
    s1.wheelCount();
    s1.carType();
    s1.topSpeed();


} 
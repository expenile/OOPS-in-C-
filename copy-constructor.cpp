#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
    string brand;
    int year;

    Car(string b , int y){
        brand  = b;
        year   = y;
    }

    Car(Car &obj){
        brand = obj.brand;
        year =  obj.year;
    }
};

int main(){
    Car c1("Audi", 12);
    Car c2(c1);

    cout<<c2.brand<<" "<<c2.year<<endl;
} 
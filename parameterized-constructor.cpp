#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    string brand;
    int year;
    Car(string b, int y){
        brand  = b;
        year = y;
    }

};

int main(){
    Car c1("Audi",12);
    cout<<c1.brand<<" "<<c1.year<<endl;

} 
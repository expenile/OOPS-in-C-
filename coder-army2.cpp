#include <bits/stdc++.h>
using namespace std;
class Customer{
    public:
    string name;
    int acc_no;
    int bal;

    //default 
    Customer(){
        name  = "Nilesh";
        acc_no = 123;
        bal  = 120000;
    }

    //parameterized
    // Customer(string a, int b, int c){
    //     name = a;
    //     acc_no = b;
    //     bal = c;
    // }

    // overloading
    Customer(string a, int b){
        name = a;
        acc_no = b;
    }
//this
    // Customer(string name, int acc_no, int bal){
    //     this->name  =name;
    //     this->acc_no  =acc_no;
    //     this->bal  =bal;
    // }

    //inline constructor
  inline Customer(string a, int b, int c): name(a),acc_no(b),bal(c){

    }

    //copy 
    Customer(Customer &B){
        name  = B.name;
        acc_no = B.acc_no;
        bal  = B.bal;

    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<bal<<" "<<endl;
    }
};

int main(){
    Customer c1;
    Customer c2("King", 234, 23000);
    Customer c3("Ling", 456);
    c1.display();
    c2.display();
    c3.display();
    Customer c4(c1);
    c4.display();

    Customer c5;
    c5  = c4;
    c5.display();

} 
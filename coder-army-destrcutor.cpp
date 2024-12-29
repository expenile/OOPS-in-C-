#include <bits/stdc++.h>
using namespace std;

class Customer{
    public:
    string name;
    int *balance;


    Customer(){
        name = "4";
        cout<<"Cons is 4"<<endl;


    }


// construcutor is order wise called
    Customer(string name){
        this->name  =name;
        cout<<"cons is"<<name<<endl;
    }

    // Customer(string name, int bal){
    //     this->name = name;
    //     balance  = new int;
    //     *balance =  bal;
    // }

    //destructor
    // ~Customer(){
    //     cout<<"Destructor called";

    // }


    // destructor is reverse order executes
    ~Customer(){
        cout<<"des is"<<name<<endl;
    }

};

int main(){
    //call order
    Customer A1("1"), A2("2"), A3("3");
    // Customer c1("Nilesh", 1000);
    // cout<<c1.balance<<" "<<c1.name<<endl;


    Customer *A4  =new Customer;
    delete A4;

} 
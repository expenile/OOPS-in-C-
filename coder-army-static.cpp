#include <bits/stdc++.h>
using namespace std;

//similar to global variable

// if static member is private then static member function is use to access the static variable and you can access it using class and object and it cannot acces regular member of class

//static is part of class 

// static members are those member that belong to class and is shared among all the objects 
// declared inside class
//defined ot initialised outside the class
// can be accessed using className::staticMember

// static member are accessed through scope resolution operator ::
class Customer{

    private:
    static int total_bal;
    public:
    string name;
    int acc_no;
    int bal;
    static int total;

    Customer(string a, int b, int c){
        name =a;
        acc_no  =b;
        bal =c;
        total++;
        total_bal += bal;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<bal<<endl;
    }
    void display_total(){
        cout<<total<<endl;
    }
    static int getCount(){
        return total;
    }

    void deposit(int amt){
        if(amt >0){
            bal += amt;
            total_bal += amt;
        }
    }
    static void total_balance(){
        cout<<total_bal<<endl;
    }

    void withdraw(int amt){
        if( amt <= bal && amt > 0){
            bal -= amt;
            total_bal -= amt;
        }
    }
    
};


int Customer:: total  = 0;
int Customer:: total_bal = 0;

int main(){
    Customer c1("Nilesh",123,12000);
    Customer c2("King",234,124000);
    Customer c3("Ling",456,12033300);
    // cout<<"Total is "<<Customer::getCount()<<endl;
    // Customer::total  = 100;  

    Customer c4("Bonda", 12, 8000);
    //  c1.display();
    //  c2.display();
    //  c3.display();
    //  c4.display();

    //  c1.display_total(); // accessing static thorugh objects
    //  c2.display_total(); // accessing static thorugh objects
    //  c3.display_total(); // accessing static thorugh objects
    //  c4.display_total(); // accessing static thorugh objects


     Customer c5("Shivam", 222, 12000);
    //  Customer::total_balance();
    //  c5.total_balance();


         c1.display_total(); // accessing static thorugh objects








} 
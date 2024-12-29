/*
Wrapping up of data and info in single unit, while controlling access to them

variable are  kept private





*/


// Encapsulation helps achieve data hiding 


#include <bits/stdc++.h>
using namespace std;
class Customer{
    string name;
    int bal;

    // if I keep this variable public so that these variable dont be corrupted or misused (if I deposit neagtive amount then this is not valid , so this bad value should not be store that is why we keep variable private and will create a public function to access these private member)
    public:
    Customer(string a, int b){
        name =a;
        bal   = b;

    }
};

int main(){
    Customer c1("Nilesh", 1000);

}



/*

#include <iostream>
using namespace std;

class Account {
private:
    int balance; // Hidden data

public:
    Account(int initial_balance) : balance(initial_balance) {}

    void deposit(int amount) {
        balance += amount;
    }

    int getBalance() const {
        return balance; // Controlled access through a getter
    }
};

int main() {
    Account acc(1000);
    acc.deposit(500);

    // acc.balance = 2000; // Error: Cannot access private member
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}



*/
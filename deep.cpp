#include <bits/stdc++.h>
using namespace std;

class Deep {
public:
    int* data;
    
    // Constructor
    Deep(int value) {
        data = new int(value);
    }
    
    // Copy Constructor (Deep Copy)
    Deep(Deep &obj) {
        data = new int(*obj.data); // Deep copy by allocating new memory and copying the value
    }    

    // Destructor to free allocated memory
    ~Deep() {
        delete data;
    }

    // Display function to show the value of data
    void display() {
        cout << "Value is: " << *data << endl;
    }
};

int main() {
    Deep d1(19);       // Create an object with value 19
    Deep d2 = d1;      // Create a deep copy of d1

    d1.display();      // Displays: Value is: 19
    d2.display();      // Displays: Value is: 19

    *d1.data = 100;    // Modify the value of d1's data

    d1.display();      // Displays: Value is: 100
    d2.display();      // Displays: Value is: 19 (d2 remains unchanged due to deep copy)

    return 0;
}

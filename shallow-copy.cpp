#include <iostream>

class ShallowCopy {
public:
    int* data;
    
    // Constructor
    ShallowCopy(int value) {
        data = new int(value);
    }

    // Copy Constructor (Shallow Copy)
    ShallowCopy(const ShallowCopy& other) {
        data = other.data; // Copies the pointer (not the data it points to)
    }

    // Display function
    void display() const {
        std::cout << "Value: " << *data << std::endl;
    }
};

int main() {
    ShallowCopy obj1(10);
    ShallowCopy obj2 = obj1; // Shallow copy

    std::cout << "Before modifying obj1:" << std::endl;
    obj1.display();
    obj2.display();

    *obj1.data = 20; // Modify obj1's data

    std::cout << "After modifying obj1:" << std::endl;
    obj1.display();
    obj2.display(); // obj2 is also affected

    return 0;
}

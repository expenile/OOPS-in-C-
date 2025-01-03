#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello, World!" << endl;
}

int main() {
    sayHello(); // Function is resolved at compile-time.
    return 0;
}



/*

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int* arr = new int[size]; // Array size determined at runtime.

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    delete[] arr; // Free allocated memory
    return 0;
}


*/
/*

The const keyword in C++ is used to define constant values or enforce immutability in variables, pointers, functions, and member functions. Once something is declared as const, it cannot be modified.
A const variable is a read-only variable whose value must be initialized when declared and cannot be changed afterward.


*/

#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159; // Constant variable
    cout << "Value of pi: " << pi << endl;

    // pi = 3.14; // Error: Cannot modify a constant variable
    return 0;
}

// pointer is a variable that stores the memory address as its value.
// A pointer in C++ is used to share a memory address among different contexts (functions, arrays, structures).

#include <iostream>
using namespace std;

int main(){
    int number = 2900;
    int *pointer;

    pointer = &number;
    cout << "Value of number is: " << number << endl;
    cout << "Address of number is: " << &number << endl;
    cout << "Value of address using pointer is: " << pointer << endl;
    cout << "Value of number using pointer is: " << *pointer << endl;
    return 0;
}
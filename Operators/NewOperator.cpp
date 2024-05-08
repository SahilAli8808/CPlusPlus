#include <iostream>
using namespace std;

int main() {
    // Allocate memory for an integer using 'new'
    int *ptr;
    ptr = new int;
    
    // Check if memory allocation was successful
    if (ptr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit with error code
    }
    
    // Assign a value to the dynamically allocated integer
    *ptr = 42;
    
    // Print the value
    cout << "Dynamically allocated integer value: " << *ptr << endl;
    cout << "Memory address: " << ptr << endl; // Print the memory address
    
    // Deallocate the dynamically allocated memory
    delete ptr;
    cout << "Memory deallocated!" << endl;

    
    return 0;
}

#include <iostream>
using namespace std;

void increment(int &x) { // Note the use of '&' to indicate pass by reference
    x++; // Changes made here directly affect the original argument
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    increment(num); // Pass by reference
    cout << "After function call: " << num << endl; // Value of num is modified
    return 0;
}

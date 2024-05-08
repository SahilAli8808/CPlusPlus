#include <iostream>
using namespace std;

void increment(int x) {
    x++; // Changes made here are local to the function
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    increment(num); // Pass by value
    cout << "After function call: " << num << endl; // Value of num remains unchanged
    return 0;
}

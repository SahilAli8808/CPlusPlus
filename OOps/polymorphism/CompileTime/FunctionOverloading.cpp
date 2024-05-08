#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of 3 and 5 is: " << add(3, 5) << endl;             // Calls the first add function
    cout << "Sum of 3, 5, and 7 is: " << add(3, 5, 7) << endl;     // Calls the second add function
    cout << "Sum of 3.5 and 4.7 is: " << add(3.5, 4.7) << endl;     // Calls the third add function
    return 0;
}

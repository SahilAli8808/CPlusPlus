#include<iostream>
using namespace std;

// Move the sum() function declaration outside of main()
int sum(int a, int b) { // the function sum() having two parameters a and b
    return a + b;
}

int main() {
    // Call the sum() function
    cout << sum(5, 6) << endl; // sum fuction is called with two arguments 5 and 6
    return 0;
}

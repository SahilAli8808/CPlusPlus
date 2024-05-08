#include <iostream>

using namespace std;

class MyNumber {
private:
    int value;

public:
    // Constructor
    MyNumber(int val) : value(val) {}

    // Overloaded + operator
    MyNumber operator +(const MyNumber& other) const {
        return MyNumber(value - other.value);
    }

    // Method to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    int val1, val2;

    // Input from the user
    cout << "Enter value for num1: ";
    cin >> val1;
    cout << "Enter value for num2: ";
    cin >> val2;

    // Create objects
    MyNumber num1(val1);
    MyNumber num2(val2);

    // Display initial values
    cout << "\nInitial values:" << endl;
    cout << "num1: ";
    num1.display();
    cout << "num2: ";
    num2.display();

    // Use the overloaded + operator (which subtracts)
    MyNumber result = num1 + num2;

    // Display the result
    cout << "\nResult after adding (subtracting):" << endl;
    cout << "result: ";
    result.display();

    return 0;
}

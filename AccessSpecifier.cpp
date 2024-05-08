#include <iostream>

using namespace std;

class MyClass {
    int x;  // Private member by default

public:
    void setX(int value) {
        x = value;  // Accessible within the class
    }

    void displayX() {
        cout << "Value of x: " << x << endl;  // Accessible within the class
    }
};

int main() {
    MyClass obj;
    //obj.x = 10;  // This line will cause a compilation error because x is private
    obj.setX(10);  // This is fine, as it accesses the private member through a public member function
    obj.displayX();  // This is fine too, as it accesses the private member through a public member function
    return 0;
}

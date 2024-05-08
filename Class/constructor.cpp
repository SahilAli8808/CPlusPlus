#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor declaration
    Person(const string& n, int a) {
        name = n;  // Initialize name
        age = a;   // Initialize age
    }

    // Member function to display person information
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create an object of the Person class using the constructor
    Person person1("Alice", 30);

    // Call the display function to show information about the person
    person1.display();

    return 0;
}

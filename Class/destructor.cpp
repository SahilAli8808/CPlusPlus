#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(const string& n, int a) : name(n), age(a) {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    // Member function to display person information
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person1("Alice", 30);

    // Call the display function to show information about the person
    person1.display();

    return 0;
}

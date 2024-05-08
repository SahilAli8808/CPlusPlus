#include <iostream>
#include <string>

using namespace std; // Import the entire std namespace

// Base class (Parent class)
class Animal {
protected:
    string name;

public:
    Animal(const string& n) {
        name = n;
    }

    void speak() const {
        cout << "Animal " << name << " speaks" << endl;
    }
};

// Derived class (Child class)
class Dog : public Animal {
public:
    Dog(const string& n) : Animal(n) {}

    void bark() const {
        cout << "Dog " << name << " barks" << endl;
    }
};

int main() {
    // Create a Dog object
    Dog dog("Buddy");

    // Call methods from both base and derived classes
    dog.speak(); // Inherited from Animal
    dog.bark();  // Defined in Dog class

    return 0;
}

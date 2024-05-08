#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    // Virtual function to make it eligible for overriding
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the sound method of the base class
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalPtr;

    // Create a Dog object
    Dog dog;

    // Point to the Dog object using a pointer of base class type
    animalPtr = &dog;

    // Call the sound method using the base class pointer
    animalPtr->sound(); // This calls the sound method of the derived class Dog

    return 0;
}


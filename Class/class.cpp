#include <iostream>
#include <string>

using namespace std; // Import the entire std namespace

// Define a class named Person
class Person {
private:
    string name;
    int age;

public:
    // Member function to set name and age
    void setData(const string name, int age) {
        this -> name = name;
        this -> age = age;
    }

    // Member function to display name and age
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person1;

    // Set data using member function
    person1.setData("Alice", 30);

    // Call the display function to show information about the person
    person1.display();

    return 0;
}

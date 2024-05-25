#include<iostream>
#include<cstring> // include cstring for strcpy
using namespace std;

class person {
    char name[20];
    float age;

public:
    person(const char* s, float a) {
        strcpy(name, s);
        age = a;
    }

    person &greater(person &x) {
        if (x.age >= age)
            return x;
        else
            return *this;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

int main() {
    person p1("John", 23), p2("Doe", 25), p3("Smith", 29);
    person &p = p1.greater(p2);
    cout << "Elder is: \n";
    p.display();

    p = p1.greater(p3);
    cout << "Elder is: \n";
    p.display();

    return 0;
}

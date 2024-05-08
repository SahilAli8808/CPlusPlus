#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string name;
    string color;
    int wheels;

public:
    Vehicle(const string& name, const string& color, int wheels) : name(name), color(color), wheels(wheels) {}

    void getVehicle() {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Wheels: " << wheels << endl;
    }
};

class TwoWheeler : public Vehicle {
private:
    int seats;

public:
    TwoWheeler(const string& name, const string& color, int wheels, int seats) : Vehicle(name, color, wheels), seats(seats) {}

    void getTwoWheeler() {
        cout << "Seats: " << seats << endl;
    }
};

class FourWheeler : public Vehicle {
private:
    int seats;

public:
    FourWheeler(const string& name, const string& color, int wheels, int seats) : Vehicle(name, color, wheels), seats(seats) {}

    void getFourWheeler() {
        cout << "Seats: " << seats << endl;
    }
};

int main() {
    TwoWheeler bike("Honda", "Black", 2, 1);
    FourWheeler car("Toyota", "Red", 4, 4);

    bike.getVehicle();
    bike.getTwoWheeler();

    car.getVehicle();
    car.getFourWheeler();

    return 0;
}

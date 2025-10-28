#include <iostream>
#include <string>

class Vehicle 
{
protected:
    std::string name;
public:
    explicit Vehicle(std::string n) : name(std::move(n)) {}
    const std::string& getName() const { return name; }
};

class Car : public Vehicle 
{
public:
    Car() : Vehicle("Car") {}
};

class Airplane : public Vehicle 
{
public:
    Airplane() : Vehicle("Airplane") {}
};

class FlyingCar : public Car, public Airplane 
{

};

int main() {
    FlyingCar fc;
    return 0;
}

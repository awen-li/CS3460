#include <iostream>
#include <string>

class Vehicle 
{
protected:
    std::string name;
public:
    explicit Vehicle(std::string n) : name(std::move(n)) {}
    void start () {std::cout<<"Vehicle starts ....\n";}
};

class Car : virtual public Vehicle 
{
public:
    Car() : Vehicle("Car") {}
};

class Airplane : virtual public Vehicle 
{
public:
    Airplane() : Vehicle("Airplane") {}
};

class FlyingCar : public Car, public Airplane 
{
public:
    FlyingCar():Vehicle("FlyingCar") {}
};

int main() {
    FlyingCar fc;
    return 0;
}

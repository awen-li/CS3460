#include <iostream>

class Vehicle 
{
protected:
    int   wheels;
    float engine;

public:
    Vehicle(): wheels{0}, engine{0} {}

    int getWheels() const 
    { 
        return wheels; 
    }

    float getEngine() const 
    { 
        return engine; 
    }
};

class Car : public Vehicle 
{
public:
    Car() 
    { 
        wheels = 4;
        engine = 2.5;
    }
};

class Truck : public Vehicle 
{
public:
    Truck() 
    { 
        wheels = 8;
        engine = 4.0;
    }
};

int main() 
{
    Car c; 
    Truck t;

    std::cout << c.getWheels() << ", " << c.getEngine() << "\n"; // 4, 2.5
    std::cout << t.getWheels() << ", " << t.getEngine() << "\n"; // 8, 4.8

    std::cout << sizeof(Vehicle) << ", " << sizeof(Car) << ", " << sizeof(Truck) << "\n"; // 4, 2.5

    return 0;
}
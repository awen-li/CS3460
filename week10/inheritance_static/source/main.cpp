#include <iostream>

class Vehicle 
{
protected:
    int   wheels;
    float engine;
    static int count;

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

    int* getCountAddr() 
    {
        return &count;
    }
};

int Vehicle::count = 0;

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

    std::cout << "@Car:   count addr is " << c.getCountAddr() << "\n";
    std::cout << "@Truct: count addr is " << t.getCountAddr() << "\n";

    return 0;
}
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
private:
    int wheels;
public:
    Car() 
    { 
        wheels = 4;
        engine = 2.5;
    }
};

int main() 
{
    Car c; 

    std::cout << "@Car: getWheels =  " << c.getWheels() << "\n";

    return 0;
}


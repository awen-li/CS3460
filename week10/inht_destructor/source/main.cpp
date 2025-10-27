#include <iostream>


class Vehicle 
{
protected:
    int wheels;
public:
    Vehicle(): wheels(0) {}
    ~Vehicle() {
        std::cout << "@Vehicle destructor\n";
    }
};

class Car : public Vehicle 
{
public:
    Car() { wheels = 4; }
    ~Car() {
        std::cout << "@Car destructor\n";
    }
};

int main() 
{
    Car c;
    return 0;
}


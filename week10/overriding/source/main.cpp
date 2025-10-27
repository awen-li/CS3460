#include <iostream>
using namespace std;

class Vehicle 
{
public:
    void start() { 
        std::cout << "Vehicle starting...\n"; 
    }
};

class Car : public Vehicle 
{
public:
    void start() { 
        std::cout << "Car starting with keyless ignition...\n"; 
    }
};

int main() 
{
    Car c;
    c.start();
}


#include <iostream>
using namespace std;

class Vehicle 
{
public:
    void start() { 
        std::cout << "Vehicle starting...\n"; 
    }

    void start(int speed) { 
        std::cout << "Vehicle starting at " << speed << " mph\n"; 
    }
};

class Car : public Vehicle 
{
public:
    void start(std::string mode) { 
        std::cout << "Car starting in " << mode << " mode\n"; 
    }
};

int main() 
{
    Car c;
    c.start("eco"); 
    c.start(60);
    return 0;
}

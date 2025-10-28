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
    void start(int speed) { 
        std::cout << "Car starting at " << speed << " mph\n"; 
    }
};

int main() 
{
    Car c;
    c.start(60);
    c.start();
    return 0;
}

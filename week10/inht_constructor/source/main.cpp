#include <iostream>

struct Log 
{ 
    Log(const char* s){ 
        std::cout << s << "\n"; 
    } 
};

class Vehicle 
{
protected:
    Log a;
public:
    Vehicle(): a("Vehicle::a") {
        std::cout << "@Vehicle constructor\n";
    }
};

class Car : public Vehicle 
{
private:
    Log b;
public:
    Car() : b("Car::b") { 
        std::cout << "@Car constructor\n";
    }
};

int main() 
{
    Car c;
    return 0;
}


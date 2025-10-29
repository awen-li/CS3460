#include <iostream>
using std::cout;

class Engine 
{
public:
    Engine()  { cout << "Engine ctor\n"; }
    ~Engine() { cout << "Engine dtor\n"; }
};

class Transmission 
{
public:
    Transmission()  { cout << "Transmission ctor\n"; }
    ~Transmission() { cout << "Transmission dtor\n"; }
};

class Car 
{
private:
    Engine e;
    Transmission t;
    int wheels{4};
public:
    Car() { cout << "Car body\n"; }
    ~Car(){ cout << "Car dtor body\n"; }
};

int main() 
{ 
    Car c; 
    return 0;
}


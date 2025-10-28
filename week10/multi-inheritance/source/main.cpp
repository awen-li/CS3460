#include <iostream>


class Car
{
private:
    std::string name;
public:
    Car(): name("Car") {} 
};

class Airplane 
{
private:
    std::string name;

public:
    Airplane(): name("Airplane")  {} 
    
};

class FlyingCar : Car, Airplane 
{
private:
    std::string name;
public:
    FlyingCar() : name("FlyingCar")  {}
};

int main ()
{
    FlyingCar fc;
    return 0;
}

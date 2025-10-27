#include <iostream>
using namespace std;

class Vehicle 
{
private:
    int engine;
protected:
    int wheels;
};

class Car : public Vehicle 
{
private:
    int doors;
public:
    Car (): doors(4) 
    {
        wheels = 4;
    }
};

int main() 
{
    Car c;
    return 0;
}

#include <iostream>
using namespace std;

class Car 
{
public:
    string color;
    int speed;
    static int carCount;   // static data member declaration

    Car(string c, int s) {
        color = c;
        speed = s;

        carCount++;        // increment count when a new car is created
        cout <<"New car with " <<color<<", total cars by now: " << carCount << endl;
    }

    void speedUp() {
        speed += 10;
        cout << color << " car speed: " << speed << " km/h" << endl;
    }
};

int Car::carCount = 0; // define static member outside the class

int main() {
    Car c1("Red", 80);
    Car c2("Blue", 100);

    c1.speedUp();
    c2.speedUp();

    return 0;
}


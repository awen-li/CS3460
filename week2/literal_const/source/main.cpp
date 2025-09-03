#include <iostream>
using namespace std;

int main() {
    // Using literals directly
    cout << "Area of rectangle (literal values): " << 10 * 5 << endl;

    // Using constants
    const int length = 10;
    const int width = 5;
    cout << "Area of rectangle (constants): " << length * width << endl;

    // Mixing literals and constants
    const double pi = 3.14159;
    int radius = 2;
    cout << "Circle circumference: " << 2 * pi * radius << endl;

    return 0;
}


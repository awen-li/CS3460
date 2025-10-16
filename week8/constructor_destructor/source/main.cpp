#include <iostream>

class Point
{
    int x, y;

public:
    Point() : Point(0, 0) {
        std::cout << "Point()            [delegating]\n";
    }

    Point(int x_, int y_) : x(x_), y(y_) {
        std::cout << "Point(int,int)     -> (" << x << "," << y << ")\n";
    }

    ~Point() {
        std::cout << "~Point()           (" << x << "," << y << ")\n";
    }
};

int main() {
    Point a (1, 1);

    Point* p = new Point(2, 2);
    delete p;

    return 0;
}

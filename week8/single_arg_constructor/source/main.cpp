#include <iostream>
#include <vector>

using namespace std;

class Point 
{
    int x, y;

public:
    Point(int v) : x(v), y(v) {}               
    Point(int x_, int y_) : x(x_), y(y_) {}

    void show () 
    {
        cout<<"x = "<<x<<", y = "<<y<<endl;
    } 
};

int main() 
{
    vector<Point> vp;

    vp.push_back (3);
    vp[0].show();

    return 0;
}


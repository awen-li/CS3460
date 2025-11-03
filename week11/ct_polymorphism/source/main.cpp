#include <iostream>

struct Base 
{
    void show() { std::cout << "Base\n"; }
};

struct Derived : Base 
{
    void show() { std::cout << "Derived\n"; }
};

int main() {
    Base* p = new Derived();
    p->show();
    delete p;
}


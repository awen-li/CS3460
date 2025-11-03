#include <iostream>
struct Base 
{
    virtual void show() { std::cout << "Base\n"; }
};

struct Derived : Base 
{
    void show() override { std::cout << "Derived\n"; }
};

int main() {
    Base* p = new Derived();
    p->show();
    delete p;
}



#include <iostream>

class Buffer 
{
public:
    int* data;
    unsigned n;

    explicit Buffer(unsigned m) : data(new int[m]), n(m) {}
    ~Buffer() { delete[] data; }

    void show () {std::cout<<"@addr: "<<data<<"\n"; }
};

int main()
{
    Buffer a(10);
    a.show();

    return 0;
}


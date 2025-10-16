#include <iostream>

class Buffer 
{
public:
    int* data;
    unsigned n;

    explicit Buffer(unsigned m) : data(new int[m]), n(m) {}
    ~Buffer() { delete[] data; }

    static void show (Buffer& b) {std::cout<<"@addr: "<<b.data<<"\n"; }
};

int main()
{
    Buffer a(10);
    a.show(a);
    Buffer::show(a);

    return 0;
}


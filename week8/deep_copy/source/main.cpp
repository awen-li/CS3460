#include <iostream>

class Buffer 
{
public:
    int* data;
    unsigned n;


    explicit Buffer(unsigned m) : data(new int[m]), n(m) {}
    Buffer(const Buffer& other) : data(new int[other.n]), n(other.n) {
        std::copy(other.data, other.data + n, data);
    }

    ~Buffer() { delete[] data; }

    void show () {std::cout<<"@addr: "<<data<<"\n"; }

    Buffer& operator=(Buffer other) {
        std::swap(data, other.data);
        std::swap(n, other.n);
        return *this;
    }
};

int main()
{
    Buffer a(10);
    a.show();

    Buffer b = a;
    b.show();

    return 0;
}


#include <iostream>
#include <vector>

class Buffer 
{
public:
    std::vector<int> data;

    Buffer()  {data.push_back(0);}
    ~Buffer() {}

    void show () {std::cout<<"@addr: "<<&data.at(0)<<"\n"; }
};

int main()
{
    Buffer a;
    a.show();

    Buffer b = a;
    b.show();

    return 0;
}


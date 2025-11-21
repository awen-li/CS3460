#include "box.hpp"

void demo_other();

int main() {
    Box<int>    bi{42};
    Box<double> bd{3.14};

    bi.print();
    bd.print();

    demo_other();

    return 0;
}

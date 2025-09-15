#include <iostream>

int getNumber() {
    int x = 42;
    return x;   // return by value
}

int main() {
    int num = getNumber();
    std::cout << num;   // prints 42
    return 0;
}



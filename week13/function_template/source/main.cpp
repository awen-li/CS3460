#include <iostream>

template <typename T>
T myAdd(T a, T b) {
    return a + b;
}

int main () {
    int x = myAdd(2, 3); 
    double y = myAdd(2.5, 1.2); 
    
    return 0;
}


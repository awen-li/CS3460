#include <iostream>
#include <vector>

int foo(int a) 
{
    int b = 1;
    b += 1;
    
    return (a+b);
}

int main()
{
    int x = 0;
    for (int i = 0xa3; i < 0xa6; i += 1) {
       std::cout<< foo(i) <<" ";
    }
}
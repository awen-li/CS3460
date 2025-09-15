#include <iostream>
#include <string>

std::string greet() 
{
    std::string s = "Hello, World!";
    return s;   // return by value (RVO or move)
}

int main() 
{
    std::string msg = greet();
    std::cout << msg;   // prints: Hello, World!
}



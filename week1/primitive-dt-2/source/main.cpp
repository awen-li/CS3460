#include <iostream>

int main(int argc, char ** argv) 
{
    char c = 0;
    unsigned int  v = 256;

    while (c < v) {
        std::cout<<"@main: "<<(int)c<<std::endl;
        c++;
    }

    return 0;
}





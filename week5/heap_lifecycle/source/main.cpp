#include <iostream>


void heapAlloc ()
{
    int* p = new int();
    *p = 0xAFAFAFAF;
    
    printf ("p = %p\r\n", p);
    return;
}

int main() {
    
    heapAlloc ();
    
    return 0;
}



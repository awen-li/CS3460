#include <iostream>


int* heapAlloc ()
{
    int* p = new int();
    *p = 1;
    
    printf ("p = %p : %x\r\n", p, *p);

    delete p;

    printf ("p = %p : %x\r\n", p, *p);
    return p;
}

int main() {
    
    int* q = heapAlloc ();

    *q = 2;
    printf ("q = %p : %x\r\n", q, *q);
    
    return 0;
}



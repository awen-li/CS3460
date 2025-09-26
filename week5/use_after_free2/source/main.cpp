#include <iostream>


int* heapAlloc ()
{
    int* p = new int[16*1024*1024];
    p[16] = 1;
    
    printf ("p = %p : %x\r\n", p, p[16]);

    delete [] p;

    printf ("p = %p : %x\r\n", p, p[16]);
    return p;
}

int main() {
    
    int* q = heapAlloc ();

    q[16] = 2;
    printf ("q = %p : %x\r\n", q, q[16]);
    
    return 0;
}



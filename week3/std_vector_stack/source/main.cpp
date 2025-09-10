#include <iostream>
#include <vector>

void makeVector(int n) 
{
    std::vector<int> v(n);   // size determined by input argument
    std::cout << "Vector of size " << v.size() << " created.\n";
    
    // Fill with values
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }
	
	std::cout << "Vector object addr: " << &v << "\n";
    std::cout << "First element addr: " << &v.front() << "\n";
}

int main() 
{
    makeVector(10);
    std::cout << "Back in main, vectors are already destroyed.\n";
    return 0;
}


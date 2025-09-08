#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> primes;

    // Growing the vector
    for (int i = 0; i < 10; i++) {
        primes.push_back(i+2);
        std::cout << i << ": size = "<<primes.size() 
                      <<", capacity = "<<primes.capacity()
                      <<std::endl;
    }

    // Modify elements like an array
    primes[2] = 11;             // direct access (no bounds check)
    primes.at(3) = 13;          // safer access with bounds check

    // Print vector contents
    for (int p : primes) {
        std::cout << p << " ";
    }
    std::cout <<std::endl;

    return 0;
}


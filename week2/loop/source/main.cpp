#include <iostream>
#include <array>
using namespace std;

int main() {
    array primes{2, 3, 5, 7};

    cout << "--- Classic for loop with index ---\n";
    for (size_t i = 0; i < primes.size(); i++) {
        cout << "The " << (i + 1) << " prime is " << primes[i] << '\n';
    }

    cout << "\n--- Range-based for loop (C++11) ---\n";
    int which = 1;
    for (int prime : primes) {
        cout << "The " << which++ << " prime is " << prime << '\n';
    }

    cout << "\n--- Range-based loop with initializer (C++20) ---\n";
    for (auto which{1}; int prime : primes) {
        cout << "The " << which << " prime is " << prime << '\n';
        which++;
    }
}

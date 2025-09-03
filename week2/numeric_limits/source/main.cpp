#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Min int: " << numeric_limits<int>::min() << "\n";
    cout << "Max int: " << numeric_limits<int>::max() << "\n";
    cout << "Is int signed? " << numeric_limits<int>::is_signed << "\n";
}


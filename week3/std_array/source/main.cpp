#include <iostream>
#include <array>
#include <algorithm> // for std::sort

int main() 
{
    std::array<int, 5> nums = {5, 2, 8, 1, 3};

    // Access elements
    std::cout << "First: " << nums.front() << "\n";
    std::cout << "Last: " << nums.back() << "\n";

    // Modify
    nums[0] = 10;

    // Safer access
    try {
        std::cout << nums.at(10) << "\n"; // throws exception
    } 
    catch (std::out_of_range& e) {
        std::cout << "Out of range!\n";
    }

    // Use STL algorithm
    std::sort(nums.begin(), nums.end());
    std::cout << "Sorted: ";
    for (auto n : nums) std::cout << n << " ";
    std::cout<<std::endl;

    return 0;
}


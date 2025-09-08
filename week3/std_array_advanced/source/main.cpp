#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

int main() 
{
    std::array<int, 5> nums = {3, 1, 4, 1, 5};

    // Sort
    std::sort(nums.begin(), nums.end());

    // Find
    auto it = std::find(nums.begin(), nums.end(), 4);
    if (it != nums.end()) {
        std::cout << "Found 4 at index " << (it - nums.begin()) << "\n";
    }

    // Count
    std::cout << "Count of 1: " << std::count(nums.begin(), nums.end(), 1) << "\n";

    // Sum
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    std::cout << "Sum = " << sum << "\n";

    return 0;
}


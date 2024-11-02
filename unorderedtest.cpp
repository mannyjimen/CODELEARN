#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>
#include <iterator>

std::vector<int> getIndexes(const std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> pastnums;

    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        if (pastnums.count(target - *it)){
            return {pastnums[target - *it], (int)(it - nums.begin())}; //pastnumes[target-*it] gives the value (index) for the key since we found the index
        }
        std::cout << "Current Target: " << target - *it << " Current Distance: " << (int)(it - nums.begin()) << "\n";
        pastnums.insert({*it, (int)(it - nums.begin())});
    }
    return {-1, -1};
}

int main()
{
    int targetnum = 15;
    std::vector<int> testOne{5, 3, 6, 4, 1, 9, 19};
    std::vector<int> indexes = getIndexes(testOne, targetnum);

    std::cout << "The indexes that add up to " << targetnum << " are: ";
    for (auto x: indexes)
        std::cout << x << " ";
    std::cout << std::endl;
}
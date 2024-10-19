#include <iostream>
#include <list>
#include <iterator>
#include <vector>
//Example 1) Complete the following function that prints 
//out all multiples of x from a list, in reverse order

void ReversePrintMultiples(std::list<int> &nums, const int x)
{
    auto it1 = nums.end();
    it1--;


    for (auto it1 = nums.end(); it1 != nums.begin(); it1--)
    {
        if (*it1 % x == 0)
            std::cout << *it1 << std::endl;
    }
}

int main()
{
    std::list<int> list1{2, 4, 5, 6, 7, 8, 10, 12, 14, 15, 17, 20};
    ReversePrintMultiples(list1, 4);
}
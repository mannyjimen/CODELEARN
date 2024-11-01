#include <iostream>
#include <set>

int main()
{
    std::set<int> set2{4, 6, 8, 10, 12, 14, 16};
    //lower bound gives iterator of first occurence to value equal or greater than!
    auto lower = set2.lower_bound(8);  
    auto higher = set2.upper_bound(14);
    
    for (auto it = lower; it != higher; ++it)
    {
        std::cout << *it << ", ";
    }
    std::cout << std::endl;
    set2.erase(lower, higher); //erasing range of elements

    for( auto elem : set2)
        std::cout << elem << ", ";

    return 0;
}
#include <list>
#include <iostream>
#include <string>

int main()
{
    std::list mainList {1,2,3,4,5};
    for (int x: mainList)
        std::cout << x << " ";
}
#include <iostream>
#include <vector>
#include <chrono>
#include <thread> //gain access to the sleep function (pause)

int main()
{
    //starting time point
    auto old = std::chrono::steady_clock::now();

    int hello = 0;
    
    for (int i = 0; i < 1000000; i++)
    {
        std::cout << "test" << std::endl;
    }
    //test  without endline function
    auto test1 = std::chrono::steady_clock::now() - old;
    old = std::chrono::steady_clock::now();
    for (int i = 0; i < 1000000; i++)
    {
        std::cout << "test\n";
    }
    auto test2 = std::chrono::steady_clock::now() - old;

    //duration current - old time
    //difference between time points

    //time point - time point = duration
    
    //printing out 
    std::cout << "With endl function took: " << std::chrono::duration_cast<std::chrono::milliseconds>(test1).count() << " milliseconds.\n";
    std::cout << "Without endl function took: " << std::chrono::duration_cast<std::chrono::milliseconds>(test2).count() << " milliseconds.\n";
}
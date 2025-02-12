#include <iostream>
#include <thread>
#include <mutex>

int glob{0};
std::mutex m;

void Foo(){
    for (int i{0}; i < 100'000; i++){
        m.lock();
        glob++;
        m.unlock();
    }
}

int main()
{
    std::thread t1{Foo};
    std::thread t2{Foo};

    t1.join();
    t2.join();
    std::cout << glob << std::endl;
}
#include <iostream>
#include <variant>

union U{
    int i;
    short s;
};

int main()
{
    std::variant<int, float> data;
    std::cout << "U   : " << sizeof(U) << std::endl;
    std::cout << "data: " << sizeof(data) << std::endl;
    data = 7.0f;
    if (std::get_if<float>(&data)){
        std::cout << "Found a float!" << std::endl; 
    }

    return 0;
} 
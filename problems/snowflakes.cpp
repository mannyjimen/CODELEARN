#include <iostream>
#include <string>
//#include <unordered_set>


//sample input 
//2
//1 2 3 4 5 6
//4 3 2 1 6 5


bool test_right(int snow1[], int snow2[], int start){
    for (int i = 0; i < 6; i++){
        if (snow1[i] != snow2[(i + start) % 6])
            return false;
    }
    return true;
}

bool test_left(int snow1[], int snow2[], int start){
    int snow2_index;
    for (int i = 0; i < 6; i++){
        snow2_index = start - i;
        if (snow2_index < 0)
            snow2_index +=6;
        if (snow1[i] != snow2[snow2_index])
            return false;
    }
    return true;
}

bool are_identical(int snow1[], int snow2[]){
    for (int i = 0; i < 6; i++){
        if (test_right(snow1, snow2, i))
            return true;
        if (test_left(snow1, snow2, i))
            return true;
    }
    return false;
}

void test_identical(int snow[][6], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
//loops through rows to find snowflakes that are identical 
            if (are_identical(snow[i], snow[j])){
                std::cout << "Twin snowflakes found.\n";
                return;
            }
        }
    }
    std::cout << "No two snowflakes are alike.\n";

    // std::unordered_set<int> curr_nums;
    // for (int i = 0; i < n; i++){
    //     if (curr_nums.count(values[i]) > 0){
    //         std::cout << "Identical pair found!\n";
    //         return;
    //     }
    //     curr_nums.insert(values[i]);
    // }
    // std::cout << "No identical pairs :(\n";
}

int main()
{
    int snowflakes[100000][6];
    int num_of_flakes, curr_length;
    std::cin >> num_of_flakes;
    for (int i = 0; i < num_of_flakes; i++){
        for (int j = 0; j < 6; j++){
            std::cin >> curr_length;
            snowflakes[i][j] = curr_length;
        }
    }
    test_identical(snowflakes, num_of_flakes);
}
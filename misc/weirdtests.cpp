#include <iostream> 

int fib(int n){ //dynamic programming for fibonacci sequence (aka recursion sucks)
    int last = 1;
    int lastlast = 1;
    int answer;
    for (int i = 2; i < n; i++){
        std::cout << answer << std::endl;
        answer = last + lastlast;
        lastlast = last;
        last = answer;
    }
    return answer;
}

int main(){
    int var = 5;
    std::cout << "var before loop: " << var << std::endl; 
    do {
        var -= 20;
        std::cout << "Just subtracted 20!\n"; 
    } while(var > 100);
    std::cout <<"var after loop: " << var << '\n';
}
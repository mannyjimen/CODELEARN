#include <iostream>
#include <string>
#include <vector>
//input 3  4 
//      3  2  5

//output
//      2
//      3
//      3
//      4

int find_shortest(int lines[], int n)
{
    int shortest = 0;
    for (int i = 1; i < n; i++)
    {
        if (lines[i] < lines[shortest])
            shortest = i;
    }
    return shortest; //returns smallest index with smallest people in line (smallest integer)
}

void solve(int lines[], int n, int m)
{
    int shortest;
    for (int i = 0; i < m; i++)
    {
        shortest = find_shortest(lines, n);
        std::cout << lines[shortest] << "\n";
        lines[shortest]++;
    }
}



int main()
{
    // int test_lines[] = {3, 2, 5};
    // solve(test_lines, 3, 4);
    std::string sn, sm;
    int n, m;
    getline(std::cin, sn, ' ');
    getline(std::cin, sm);
    n = std::stoi(sn);
    m = std::stoi(sm);
    int lines[100];
    std::string scurrent;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            getline(std::cin, scurrent, ' ');
            lines[i] = stoi(scurrent);
        }
        else{
            getline(std::cin, scurrent);
            lines[i] = stoi(scurrent);
        }
    }

    solve(lines, n, m);
    return 0;
}
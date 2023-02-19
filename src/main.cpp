#include <iostream>
#include "TerminalView.hpp"
#include <vector>
#include <tuple>

#define HERE std::cout << "HERE" << std::endl

int main()
{
    std::cout << "Hello world!" << std::endl;
    std::vector<std::tuple<int, int, bool>> tuples{};
    for(int i = 0; i < 5; ++i)
    {
        tuples.push_back(std::make_tuple(i, i, true));
    }
    HERE;
    TerminalView v{10, 10};
    v.update(tuples);
    return 0;
}
#pragma once
#include <memory>
#include <vector>
#include "View.hpp"

class Game
{
public:
    void register_view(View* view);
    void run(int number_of_iterations = 1);
    int get_current_iteration() const;
private:
    Game(int x_size, int y_size);
    std::vector<std::vector<bool>> m_cells;
    std::vector<View*> m_views;
    int m_current_iteration;
};
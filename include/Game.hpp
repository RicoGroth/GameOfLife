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
    int get_number_of_rows() const;
    int get_number_of_columns() const;
private:
    int m_x_size;
    int m_y_size;
    Game(int number_of_columns, int number_of_rows);
    static int index(int column, int row);
    int count_neighbouring_living_cells(int column, int row) const;
    std::vector<bool> m_cells;
    std::vector<View*> m_views;
    int m_current_iteration;
};
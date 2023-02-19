#include <vector>
#include "Game.hpp"
#include "View.hpp"

Game::Game(int number_of_columns, int number_of_rows)
    : m_cells(number_of_columns * number_of_rows), m_current_iteration{0}, m_views{}, m_x_size{number_of_columns}, m_y_size{number_of_rows}
{
}

void Game::register_view(View* view)
{
    m_views.push_back(view);
}

void Game::run(int number_of_iterations)
{
    for(int i{0}; i < number_of_iterations; ++i)
    {
        ++m_current_iteration;
        std::vector<bool> last_generation = m_cells;
    }
}

int Game::get_current_iteration() const
{
    return m_current_iteration;
}
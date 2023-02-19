#include "Game.hpp"
#include "View.hpp"

Game::Game(int x_size, int y_size)
    : m_cells(y_size), m_current_iteration{0}, m_views{}
{
    for(auto& row : m_cells)
    {
        row.resize(x_size);
    }
}

void Game::register_view(View* view)
{
    //TODO:
}

void Game::run(int number_of_iterations)
{
    for(int i{0}; i < number_of_iterations; ++i)
    {
        ++m_current_iteration;
        //TODO:
    }
}

int Game::get_current_iteration() const
{
    return m_current_iteration;
}
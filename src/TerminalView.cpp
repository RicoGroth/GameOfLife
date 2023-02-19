#include <iostream>
#include <tuple>
#include <vector>
#include "TerminalView.hpp"

TerminalView::TerminalView(int number_of_columns, int number_of_rows)
    : m_char_alive{'O'}, m_char_dead{'.'}, m_number_of_columns{number_of_columns}, m_number_of_rows{number_of_rows}
{
}

void TerminalView::update(const std::vector<std::tuple<int, int, bool>>& updated_cells, int number_of_columns, int number_of_rows)
{
    for(int i{0}; i < number_of_columns; ++i)
    {
        for(int j{0}; j < number_of_rows; ++j)
        {
            //TODO: print the correct character for every cell
        }
    }
}

void TerminalView::set_character_for_dead_cell(char c)
{
    m_char_dead = c;
}

void TerminalView::set_character_for_living_cell(char c)
{
    m_char_alive = c;
}

char TerminalView::get_character_for_dead_cell() const
{
    return m_char_dead;
}

char TerminalView::get_character_for_living_cell() const
{
    return m_char_alive;
}

void TerminalView::draw()
{
    //TODO:
}
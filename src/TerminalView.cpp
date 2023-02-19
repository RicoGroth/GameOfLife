#include <iostream>
#include <tuple>
#include <vector>
#include "TerminalView.hpp"

TerminalView::TerminalView(int number_of_columns, int number_of_rows)
    : m_char_alive{'O'},
    m_char_dead{'.'},
    m_number_of_columns{number_of_columns},
    m_number_of_rows{number_of_rows},
    m_buffer(number_of_rows)
{
    for(auto& row : m_buffer)
    {
        row.resize(number_of_columns);
    }
}

void TerminalView::update(const std::vector<std::tuple<int, int, bool>>& updated_cells)
{
    for(const auto& cell : updated_cells)
    {
        auto [x, y, is_alive] = cell;
        m_buffer[y][x] = is_alive;
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
    
}
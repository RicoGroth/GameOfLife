#include <tuple>
#include <vector>
#include "TerminalView.hpp"

void TerminalView::update(const std::vector<std::tuple<int, int, bool>> update_cells, int number_of_columns, int number_of_rows)
{
    //TODO:
}

TerminalView::TerminalView()
    : m_char_alive{'O'}, m_char_dead{'.'}
{
}
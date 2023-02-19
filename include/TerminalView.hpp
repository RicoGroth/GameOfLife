#pragma once

#include <tuple>
#include <vector>
#include "View.hpp"

class TerminalView : public View
{
public:
    TerminalView(int number_of_columns, int number_of_rows);
    void set_character_for_living_cell(char c);
    void set_character_for_dead_cell(char c);
    char get_character_for_living_cell() const;
    char get_character_for_dead_cell() const;
    void update(const std::vector<std::tuple<int, int, bool>>& updated_fields, int number_of_columns, int number_of_rows) override;
    void draw() override;
private:
    char m_char_alive;
    char m_char_dead;
    int m_number_of_columns;
    int m_number_of_rows;
};
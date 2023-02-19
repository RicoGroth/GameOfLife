#pragma once

#include <tuple>
#include <vector>

class View
{
public:
    virtual void update(
        const std::vector<std::tuple<int, int, bool>>& updated_fields,
        int number_of_columns,
        int number_of_rows
    ) = 0;
    virtual void draw() = 0;
};
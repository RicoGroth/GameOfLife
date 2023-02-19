#pragma once

#include <tuple>
#include <vector>

class View
{
public:
    virtual void update(const std::vector<std::tuple<int, int, bool>>& updated_fields) = 0;
    virtual void draw() = 0;
};
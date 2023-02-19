#pragma once

#include <tuple>
#include <vector>

class View
{
public:
    virtual void update(const std::vector<std::tuple<int, int, bool>> update_fields) = 0;
};
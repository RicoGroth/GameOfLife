#pragma once

#include <tuple>
#include <vector>
#include "View.hpp"

class TerminalView : View
{
public:
    void update(const std::vector<std::tuple<int, int, bool>> updated_fields) override;
};
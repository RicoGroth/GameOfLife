#pragma once

#include <tuple>
#include <vector>
#include "View.hpp"

class OpenGLView : public View
{
public:
    void update(const std::vector<std::tuple<int, int, bool>>& updated_cells) override;
    void draw() override;
private:
};
#include <stdexcept>
#include <iostream>
#include "canvas/graphcanvas.h"

namespace otus_editor {
    CGraphCanvas::CGraphCanvas()=default;
    CGraphCanvas::~CGraphCanvas()=default;

    void CGraphCanvas::Draw(int x, int y, EColor color) {
        std::cout << x << ' ' << y << ' ' << static_cast<int>(color);
        throw std::logic_error("Graphical drawing is not implemented yet.");
    }
} // otus_editor
#include <iostream>
#include "canvas/pseudocanvas.h"

namespace otus_editor {

    CPseudoCanvas::CPseudoCanvas()=default;
    CPseudoCanvas::~CPseudoCanvas()=default;

    void CPseudoCanvas::Draw(int x, int y, EColor color) {
        std::cout << x << ' ' << y << ' ' << static_cast<int>(color) << std::endl;
    }
} // otus_editor
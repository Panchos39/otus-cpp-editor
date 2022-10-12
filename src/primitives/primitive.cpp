#include "primitives/primitive.h"

namespace otus_editor {

    APrimitive::~APrimitive()=default;

    void APrimitive::SetColor(EColor a_Color) {
        m_Color = a_Color;
    }
} // otus_editor
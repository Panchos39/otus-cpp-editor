
#include <cmath>
#include "primitives/circle.h"

namespace otus_editor {
    CCircle::CCircle()=default;
    CCircle::CCircle(const CPoint& center_point, int radius) {
        m_CenterPoint = center_point;
        m_Radius = radius;
    }
    CCircle::~CCircle()=default;

    void CCircle::Draw(std::shared_ptr <ICanvas> canvas) {
        float y_plus, y_minus;
        for (int i = 0; i < 1000; ++i) {
            y_plus = m_CenterPoint.GetY() + std::sqrt(m_Radius - std::pow(i - m_CenterPoint.GetX(), 2));
            y_minus = m_CenterPoint.GetY() - std::sqrt(m_Radius - std::pow(i - m_CenterPoint.GetX(), 2));
            canvas->Draw(i, y_plus, m_Color);
            canvas->Draw(i, y_minus, m_Color);
        }
    }


}

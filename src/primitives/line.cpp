#include "primitives/line.h"

namespace otus_editor {
    CLine::CLine()=default;

    CLine::CLine(const CPoint& start_point, const CPoint& end_point) {
        m_StartPoint = start_point;
        m_EndPoint = end_point;
    }
    CLine::~CLine()=default;

    void CLine::Draw(std::shared_ptr<ICanvas> canvas) {
        float slope = (m_EndPoint.GetY() - m_StartPoint.GetX()) / (m_EndPoint.GetX() - m_StartPoint.GetX());
        float b = m_StartPoint.GetY() - slope * m_StartPoint.GetX();
        for (int i = 0; i < 1000; ++i) {
            canvas->Draw(i, slope * i + b, m_Color);
        }
    }
} // otus_editor
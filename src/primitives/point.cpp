#include "primitives/point.h"

namespace otus_editor {
    CPoint::CPoint()=default;

    CPoint::CPoint(int x, int y, EColor color){
        m_Color = color;
        m_X = x;
        m_Y = y;
    }
    CPoint::CPoint(const CPoint &point) {
        m_Color = point.m_Color;
        m_X = point.m_X;
        m_Y = point.m_Y;
    }

    CPoint::~CPoint()=default;

    int CPoint::GetX() {
        return m_X;
    }

    int CPoint::GetY() {
        return m_Y;
    }
    void CPoint::Draw(std::shared_ptr<ICanvas> canvas) {
        canvas->Draw(m_X, m_Y, m_Color);
    }


} // otus_editor
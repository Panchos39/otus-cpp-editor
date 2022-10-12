#include "primitives/rectangle.h"
#include "primitives/line.h"

namespace otus_editor {
    CRectangle::CRectangle() {
        m_Pos = CPoint(100, 100, EColor::COLOR_WHITE);
        m_Width = 10;
        m_Height = 10;
    }
    CRectangle::CRectangle(const otus_editor::CPoint& pos, int width, int height) {
        m_Pos = pos;
        m_Width = width;
        m_Height = height;
    }
    CRectangle::~CRectangle()=default;

    void CRectangle::Draw(std::shared_ptr<ICanvas> canvas) {
        CLine upper_line(m_Pos, CPoint(m_Pos.GetX() + m_Width, m_Pos.GetY(), m_Color));
        upper_line.Draw(canvas);
        CLine left_line(m_Pos, CPoint(m_Pos.GetX(), m_Pos.GetY() + m_Height, m_Color));
        left_line.Draw(canvas);
        CLine bottom_line(CPoint(m_Pos.GetX(), m_Pos.GetY() + m_Height, m_Color),
                          CPoint(m_Pos.GetX() + m_Width, m_Pos.GetY() + m_Height, m_Color));
        bottom_line.Draw(canvas);
        CLine right_line(CPoint(m_Pos.GetX() + m_Width, m_Pos.GetY(), m_Color),
                         CPoint(m_Pos.GetX() + m_Width, m_Pos.GetY() + m_Height, m_Color));
        right_line.Draw(canvas);
    }


} // otus_editor
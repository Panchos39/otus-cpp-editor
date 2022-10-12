#include "primitives/button.h"
#include "primitives/line.h"

namespace otus_editor {
    CButton::CButton(CPoint pos, int width, int height, std::string caption) :
    CRectangle(pos, width, height) {
        m_Caption = caption;
    }
    CButton::~CButton()=default;

    void CButton::SetOnClick(FuncOnClick func){
        m_OnClick = func;
    }

    void CButton::OnClick(){
        m_OnClick();
    }

    void CButton::Draw(std::shared_ptr<ICanvas> canvas) {
        CRectangle::Draw(canvas);
    }
} // otus_editor
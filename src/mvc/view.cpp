#include "mvc/view.h"
#include "canvas/pseudocanvas.h"
#include "primitives/line.h"
#include "primitives/circle.h"

namespace otus_editor {
    CEditorView::CEditorView(std::shared_ptr<CEditorController> controller)
            : m_pController(std::move(controller)) {
        m_pCanvas = std::make_shared<CPseudoCanvas>();

        m_pBtnOpen->SetOnClick( [&]{this->OnClickBtnOpen();} );
        m_pBtnSave->SetOnClick( [&]{this->OnClickBtnSave();} );
        m_pBtnClear->SetOnClick( [&]{ this->OnClickBtnClear();});
        m_pBtnColor->SetOnClick( [&] { this->OnClickBtnColor(); } );

        m_pBtnCreatePoint->SetOnClick( [&] { this->OnClickBtnCreatePoint(); } );
        m_pBtnCreateLine->SetOnClick( [&] { this->OnClickBtnCreateLine(); } );
        m_pBtnCreateCircle->SetOnClick([&] { this->OnClickBtnCreateCircle(); } );
        m_pBtnCreateRectangle->SetOnClick([&] { this->OnClickBtnCreateRectangle(); } );

        m_pBtnToolDelete->SetOnClick( [&] { this->OnClickBtnDelete(); } );

    }

    void CEditorView::OnClickBtnOpen() {
        m_pController->Open("test");
    }

    void CEditorView::OnClickBtnSave() {
        m_pController->Save();
    }

    void CEditorView::OnClickBtnClear() {
        m_pController->Clear();
    }

    void CEditorView::OnClickBtnColor() {
        m_pController->SetColor(EColor::COLOR_RED);
    }

    void CEditorView::OnClickBtnCreatePoint() {
        m_pController->CreatePrimitive(std::make_unique<CPoint>());
    }

    void CEditorView::OnClickBtnCreateLine() {
        m_pController->CreatePrimitive(std::make_unique<CLine>());
    }

    void CEditorView::OnClickBtnCreateCircle() {
        m_pController->CreatePrimitive(std::make_unique<CCircle>());
    }

    void CEditorView::OnClickBtnCreateRectangle() {
        m_pController->CreatePrimitive(std::make_unique<CRectangle>());
    }

    void CEditorView::Update() {
        m_pController->Draw(m_pCanvas);
    }



    void CEditorView::OnClickBtnDelete(){
        m_pController->DeletePrimitive();
    }




} // otus_editor
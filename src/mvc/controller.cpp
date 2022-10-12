//
// Created by alex on 10.10.22.
//

#include "mvc/controller.h"

namespace otus_editor {

    CEditorController::CEditorController(std::shared_ptr<CEditorModel> model)
            : m_pModel(std::move(model)){}


    void CEditorController::Open(const std::string& path){
        m_pModel->Open(path);
    }

    void CEditorController::Clear(){
        m_pModel->Clear();
    }

    void CEditorController::Save() const {
        m_pModel->Save();
    }

    void CEditorController::Run() {

    }

    void CEditorController::SetColor(EColor color) {
        m_CurColor = color;
    }

    void CEditorController::CreatePrimitive(std::shared_ptr<IPrimitive> primitive){
        if (primitive) {
            m_curPrimitive = primitive;
            m_curPrimitive->SetColor(m_CurColor);
            m_pModel->AddPrimitive(m_curPrimitive);
        }
    }

    void CEditorController::DeletePrimitive(){

    }

    void CEditorController::Draw(std::shared_ptr<ICanvas> canvas) {
        m_pModel->Draw(canvas);
    }
} // otus_editor
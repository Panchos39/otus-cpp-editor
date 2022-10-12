#include "mvc/model.h"

namespace otus_editor {

    CEditorModel::CEditorModel()=default;
    CEditorModel::~CEditorModel()=default;

    void CEditorModel::New() {
        Clear();
    }

    void CEditorModel::Open(const std::string& a_strPath)
    {
        if (a_strPath.empty()) {
            //do something
        }
        m_strPath = a_strPath;
        NotifyUpdate();
    }

    void CEditorModel::Save() const
    {
        if (m_strPath.empty()) {
            //do something
        }
        //TODO
    }

    void CEditorModel::Clear()
    {
        m_Primitives.clear();
        m_strPath.clear();
    }

    void CEditorModel::AddPrimitive(std::shared_ptr<IPrimitive> a_pPrimitive)
    {
        if (a_pPrimitive) {
            //do something
        }
        NotifyUpdate();
    }

    void CEditorModel::DeletePrimitive(std::shared_ptr<IPrimitive> a_pPrimitive)
    {
        if (a_pPrimitive) {
            //do something
        }
        NotifyUpdate();
    }

    void CEditorModel::Draw(std::shared_ptr<ICanvas> canvas) {
        for (auto& pPrimitive : m_Primitives) {
            pPrimitive->Draw(canvas);
        }

    }
} // otus_editor
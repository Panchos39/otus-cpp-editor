#include "mvc/model.h"
#include "mvc/controller.h"
#include "mvc/view.h"

#include "primitives/button.h"
#include <memory>

int main(int, const char**) {

    auto pModel = std::make_shared<otus_editor::CEditorModel>();
    auto pController = std::make_shared<otus_editor::CEditorController>(pModel);
    auto pView = std::make_shared<otus_editor::CEditorView>(pController);
    pModel->AddObserver(pView);
    pController->Run();
    return 0;
}

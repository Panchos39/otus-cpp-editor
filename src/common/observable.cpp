#include "common/observable.h"

namespace otus_editor {
    AObservable::~AObservable()=default;

    void AObservable::AddObserver(std::shared_ptr<IObserver> a_pObserver) {
            m_vObservers.push_back(a_pObserver);
        }
    void AObservable::NotifyUpdate() {
        for (const auto& wptr: m_vObservers) {
            if (!wptr.expired()) {
                auto observer = wptr.lock();
                observer->Update();
            }
        }
    }
}
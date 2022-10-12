#ifndef OTUS_CPP_EDITOR_OBSERVABLE_H
#define OTUS_CPP_EDITOR_OBSERVABLE_H

#include <vector>
#include <algorithm>
#include "common/iobserver.h"

/*!
\file
\brief Заголовочный файл, содержащий интерфейс IObservable и абстрактный класс AObservable
 служащие для обеспечения связи между объектами в паттерне MVC.
 IObservable - интерфейс для наблюдаемых объектов, оповещающих все наблюдателей об обновлении.
 AObservable - абстрактный класс для наблюдаемых обьектов, содержающий список наблюдателей
*/

namespace otus_editor {

    /**
     * \interface IObservable
     * @brief интерфейс для наблюдаемых объектов, оповещающих все наблюдателей об обновлении
    */
    class IObservable {
    public:
        /**
            * \pure AddObserver
            * @brief Чистый виртуальный метод, добавляющий нового наблюдателя
            * @param m_pObserver умный указатель на объект Наблюдатель
        */
        virtual void AddObserver(std::shared_ptr<IObserver> a_pObserver) = 0;

        /**
            * \pure NotifyUpdate
            * @brief Метод для уведомления наблюдателей об обновлениb
         */
        virtual void NotifyUpdate() = 0;

        /**
            * @brief Виртаульный деструктор по умолчанию
        */
        virtual ~IObservable()=default;
    };

    /**
        * \class AObservable
        * \extends IObservable
        * @brief абстрактный класс для наблюдаемых объектов,
          оповещающих все наблюдателей об обновлении
    */
    class AObservable : public IObservable {
    public:


        /**
            * @brief Чистый виртуальный метод, добавляющий нового наблюдателя
            * @param m_pObserver умный указатель на объект Наблюдатель
        */
        void AddObserver(std::shared_ptr<IObserver> a_pObserver);

        /**
            * @brief Метод для уведомления наблюдателей об обновлении
        */
        void NotifyUpdate() override;

        /**
            * @brief Виртаульный деструктор по умолчанию
        */
        virtual ~AObservable()=0;
    private:

        std::vector<std::weak_ptr<IObserver>> m_vObservers; /**<
        Вектор умных указателей на всех наблюдателей */
    };
}
#endif //OTUS_CPP_EDITOR_OBSERVABLE_H

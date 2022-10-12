#ifndef OTUS_CPP_EDITOR_OBSERVER_H
#define OTUS_CPP_EDITOR_OBSERVER_H

#include <memory>

/*!
\file
\brief Заголовочный файл, содержащий интерфейс IObserver для
 осуществления связи между классами MVC, и передачи команды на
 обновление
*/
namespace otus_editor {
    /**
        * \interface IObserver
        * @brief Класс для уведомлений об изменениях в классе
    */
    class IObserver : std::enable_shared_from_this<IObserver> {
    public:

        /**
            * @brief Метод для получения указателя на объект
            * \return умный указатель на объект
        */
        std::shared_ptr <IObserver> GetPtr() {
            return shared_from_this();
        }

        /**
            * \pure Update
            * @brief Метод для обновления отрисовки, в случае изменений
        */
        virtual void Update() = 0;

        /**
            * @brief Виртуальный дектруктор по умолчанию
        */
        virtual ~IObserver() = default;
    };
}


#endif //OTUS_CPP_EDITOR_OBSERVER_H

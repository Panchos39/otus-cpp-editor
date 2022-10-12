#ifndef OTUS_CPP_EDITOR_MODEL_H
#define OTUS_CPP_EDITOR_MODEL_H

#include <memory>

#include "common/observable.h"
#include "primitives/iprimitive.h"
#include "canvas/icanvas.h"


/*!
\file
\brief Заголовочный файл, содержащий декларацию класса CEditorModel,
как одна из составляющих паттерна MVC
*/

namespace otus_editor {

    /**
        * \class CEditorModel
        * \extends AObservable
        * @brief Класс для обеспечения бизнес логики редактора.
          Унаследован от AObservable, значит является наблюдаемым объектом
    */
    class CEditorModel : public AObservable {
    private:
        std::vector<std::shared_ptr<IPrimitive>> m_Primitives; /**<
        Умный указатель на вектор всех примитивов, созданных в редакторе */
        std::string m_strPath; /**<
        Путь к файлу, который открыт в редакторе */
    public:

        /**
            * @brief Конструктор модели по умолчанию.
        */
        CEditorModel();

        /**
            * @brief Деструктор модели по умолчанию.
            Реализация виртуального метода абстрактного родителя
        */
        ~CEditorModel() override;

        /**
            * @brief Создание нового документа в редакторе
        */
        void New();

        /**
             * @brief Открытие существующего документа в редакторе
             * @param strPath строковый тип - путь к документы
         */
        void Open(const std::string &strPath);

        /**
        * @brief Метод, сохраняющий текущий документ в редакторе
        */
        void Save() const;

        /**
         * @brief Метод, очищающий редактор от всех изменений
         */
        void Clear();

        /**
         * @brief Добавляет новый примитив к документу
         * @param a_pPrimitive shared pointer to IPrimitive
         */
        void AddPrimitive(std::shared_ptr<IPrimitive> primitive);

        /**
         * @brief Метод, удаляющий выбранный примитив из документа
         * @param a_pPrimitive shared pointer to IPrimitive
         */
        void DeletePrimitive(std::shared_ptr<IPrimitive> a_pPrimitive);

        /**
        * @brief Метод, осуществляющий отрисовку всех примитивов в документе
        * @param canvas умный указатель на объект Canvas
        */
        void Draw(std::shared_ptr<ICanvas> canvas);
    }; // otus_editor
}
#endif //OTUS_CPP_EDITOR_MODEL_H

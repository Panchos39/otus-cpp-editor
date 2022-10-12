#ifndef OTUS_CPP_EDITOR_CONTROLLER_H
#define OTUS_CPP_EDITOR_CONTROLLER_H

#include <memory>
#include "primitives/iprimitive.h"
#include "mvc/model.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию класса CEditorController,
как одна из составляющих паттерна MVC
*/
namespace otus_editor {

    /**
        * \class CEditorController
        * @brief Класс для обеспечения связи между бизнес логикой и отображением.
    */
    class CEditorController {
    private:
        std::shared_ptr<CEditorModel> m_pModel; /**<
        Умный указатель на модель с логикой приложения */
        std::shared_ptr<IPrimitive> m_curPrimitive; /**<
        Умный указатель на текущий выбранный примитив для создания или удаления */
        EColor m_CurColor; /**<
        Текущий выбранный цвет для модификации примитивов */
    public:

        /**
            * @brief Конструктор контрллера.
            * @param a_pModel умный указатель на модель с логикой приложения
        */
        explicit CEditorController(std::shared_ptr<CEditorModel> a_pModel);

        /**
            * @brief Метод, для открытия существующего файла.
            * @param path строковый тип - путь к файлу
        */
        void Open(const std::string& path);

        /**
            * @brief Метод, для очистки документа.
        */
        void Clear();

        /**
            * @brief Метод, для сохранения текущих изменений в документе.
        */
        void Save() const;

        /**
            * @brief Метод, для запуска жизненного цикла редактора.
        */
        void Run();

        /**
            * @brief Метод, для передачи команды модели на отрисовку примитивов
            на заданном объекте canvas.
            * @param canvas умный указатель на объект ICanvas
        */
        void Draw(std::shared_ptr<ICanvas> canvas);

        /**
            * @brief Метод, для установления текущего цвета в документе.
            * @param color перечисление - один из заданных цветов
        */
        void SetColor(EColor color);

        /**
            * @brief Метод, для создания примитива в документе.
            * @param  primitive умный указатель на IPrimitive объект
        */
        void CreatePrimitive(std::shared_ptr<IPrimitive> primitive);

        /**
            * @brief Метод, для удаления выбранного примитива в документе.
        */
        void DeletePrimitive();
    };


} // otus_editor

#endif //OTUS_CPP_EDITOR_CONTROLLER_H

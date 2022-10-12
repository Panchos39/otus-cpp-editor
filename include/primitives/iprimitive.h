#ifndef OTUS_CPP_EDITOR_IPRIMITIVE_H
#define OTUS_CPP_EDITOR_IPRIMITIVE_H

#include <memory>

#include "canvas/icanvas.h"
#include "common/color.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию интерфейса IPrimitve,
содержащего методы, характерные для всех геометрических примитивов.
*/


namespace otus_editor {

    /**
        * \interface IPrimitive
        * @brief Интерфейс для геометрических объектов в документе
    */
    class IPrimitive {
    public:

        /**
            * \pure Draw
            * @brief Чистый виртуальный метод, осуществляющий отрисовку примитива
            * @param canvas умный указатель на объект Canvas
       */
        virtual void Draw(std::shared_ptr<ICanvas> a_pCanvas) = 0;

        /**
            * \pure Draw
            * @brief Чистый виртуальный метод, осуществляющий установку текущего цвета примитива
            * @param color тип перечисление - цвет примитива
       */
        virtual void SetColor(EColor color) = 0;

        /**
            * @brief Виртуальный деструктор по умолчанию.
        */
        virtual ~IPrimitive()=default;
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_IPRIMITIVE_H

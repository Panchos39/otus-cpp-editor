#ifndef OTUS_CPP_EDITOR_ICANVAS_H
#define OTUS_CPP_EDITOR_ICANVAS_H

#include "common/color.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию интерфейса ICanvas для
 отображения примитивов в разных видах отображения.
*/
namespace otus_editor {

    /**
    * \interface ICanvas
    * @brief Интерфейс для объектов canvas
    */
    class ICanvas {
    public:
        /**
            * \pure
            * @brief Чистый виртуальный метод отрисовки точки в CLI или GUI
        */
        virtual void Draw(int x, int y, EColor color) = 0;

        /**
            * \pure
            * @brief Виртаульный деструктор по умолчанию
        */
        virtual ~ICanvas() = default;
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_ICANVAS_H

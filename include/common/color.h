#ifndef OTUS_CPP_EDITOR_COLOR_H
#define OTUS_CPP_EDITOR_COLOR_H

#include <ostream>

/*!
\file
\brief Заголовочный файл, содержащий перечисление EColor для
 установления цветов примитивов.
*/
namespace otus_editor {

    /**
        * \enum EColor
        * @brief Перечисление для цветов элементов GUI или CLI
    */
    enum EColor {
        COLOR_BLACK=0, /**< Черный цвет */
        COLOR_WHITE=1, /**< Белый цвет */
        COLOR_RED=2, /**< Красный цвет */
        COLOR_GREEN=3, /**< Зеленый цвет */
        COLOR_BLUE=4, /**< Синий цвет */
        COLOR_YELLOW=5 /**< Желтый цвет */
    };
} // end otus_editor

#endif //OTUS_CPP_EDITOR_COLOR_H

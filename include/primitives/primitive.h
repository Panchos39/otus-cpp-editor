#ifndef OTUS_CPP_EDITOR_PRIMITIVE_H
#define OTUS_CPP_EDITOR_PRIMITIVE_H

#include "iprimitive.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию клаccа APrimitive,
Абстрактного класса для геометрических примитивов в редакторе
*/

namespace otus_editor {

    /**
        * \class APrimitive
        * \extends IPrimitive
        * @brief Абстрактный класс для отображения геометрических примитивов в документе
          Унаследован от интерфейса IPrimitive, добавляя общие для примитивов поля
    */
    class APrimitive : public IPrimitive {
    protected:
        EColor m_Color; /**< цвет примитива */
    public:

        /**
            * @brief Реализация виртаульного метода,
              осуществляющего установку текущего цвета примитива
            * @param color тип перечисление - цвет примитива
       */
        void SetColor(EColor a_Color) override;

        /**
            * @brief Виртуальный деструктор по умолчанию.
        */
        virtual ~APrimitive();
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_PRIMITIVE_H

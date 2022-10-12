#ifndef OTUS_CPP_EDITOR_CIRCLE_H
#define OTUS_CPP_EDITOR_CIRCLE_H

#include "point.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию клаccа CCircle,
как одного из потенциальных, создаваемых в документе, примитивов.
*/

namespace otus_editor {

    /**
        * \class CCircle
        * \extends APrimitive
        * @brief Класс для отображения круга в документе
          Унаследован от APrimitive, используя методы родителя
    */
    class CCircle : public APrimitive {
    private:
        CPoint m_CenterPoint; /**< точка - центр окружности */
        int m_Radius; /**< радиус окружности */
    public:

        /**
            * @brief Конструктор по умолчанию.
        */
        CCircle();

        /**
            * @brief Параметризированный конструктор.
            * @param center_point точка - центр окружности
            * @param radius целочисленный тип - радиус окружности
        */
        CCircle(const CPoint& center_point, int radius);

        /**
            * @brief Деструктор по умолчанию.
            Реализация виртуального метода абстрактного родителя
        */
        ~CCircle() override;

        /**
        * @brief Метод, осуществляющий отрисовку окружности
        * @param canvas умный указатель на объект Canvas
        */
        void Draw(std::shared_ptr<ICanvas> canvas) override;

    };
}

#endif //OTUS_CPP_EDITOR_CIRCLE_H

#ifndef OTUS_CPP_EDITOR_POINT_H
#define OTUS_CPP_EDITOR_POINT_H

#include "primitive.h"
#include "canvas/icanvas.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию клаccа CLine,
как одного из потенциальных, создаваемых в документе, примитивов.
*/

namespace otus_editor {

    /**
        * \class CPoint
        * \extends APrimitive
        * @brief Класс для отображения точки в документе
          Унаследован от APrimitive, используя методы родителя
    */
    class CPoint : public APrimitive {
    private:
        int m_X; /**< координата x */
        int m_Y; /**< координата y */
    public:

        /**
            * @brief Конструктор по умолчанию.
        */
        CPoint();

        /**
            * @brief Конструктор копирования.
        */
        CPoint(CPoint const &point);

        /**
            * @brief Параметризированный конструктор.
            * @param x целочисленный тип - координата x точки
            * @param y целочисленный тип - координата y точки
            * @param color перечисление - один из заданных цветов
        */
        CPoint(int x, int y, EColor color);

        /**
            * @brief Деструктор по умолчанию.
            Реализация виртуального метода абстрактного родителя
        */
        ~CPoint() override;

        /**
            * @brief метод для получения координаты x.
            * \return целочисленный тип - координату x
        */
        int GetX();

        /**
            * @brief метод для получения координаты y.
            * \return целочисленный тип - координату y
        */
        int GetY();

        /**
        * @brief Метод, осуществляющий отрисовку точки
        * @param canvas умный указатель на объект Canvas
        */
        void Draw(::std::shared_ptr<ICanvas> canvas) override;
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_POINT_H

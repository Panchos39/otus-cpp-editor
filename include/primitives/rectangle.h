#ifndef OTUS_CPP_EDITOR_RECTANGLE_H
#define OTUS_CPP_EDITOR_RECTANGLE_H

#include "primitives/point.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию клаccа CRectangle,
как одного из потенциальных, создаваемых в документе, примитивов.
*/
namespace otus_editor {

    /**
        * \class CRectangle
        * \extends APrimitive
        * @brief Класс для отображения прямоугольника в документе
          Унаследован от APrimitive, используя методы родителя
    */
    class CRectangle : public APrimitive{
    private:
        CPoint m_Pos; /**< точка - левый верхний угол прямоугольника */
        int m_Width; /**< ширина прямоугольника */
        int m_Height; /**< высота прямоугольника */
    public:

        /**
            * @brief Конструктор по умолчанию.
        */
        CRectangle();

        /**
            * @brief Параметризированный конструктор.
            * @param pos точка - левый верхний угол прямоугольника
            * @param width целочисленный тип - ширина прямоугольника
            * @param height целочисленный тип - высота прямоугольника
        */
        CRectangle(const CPoint& pos, int width, int height);

        /**
            * @brief Деструктор по умолчанию.
            Реализация виртуального метода абстрактного родителя
        */
        ~CRectangle() override;

        /**
        * @brief Метод, осуществляющий отрисовку прямоугольника
        * @param canvas умный указатель на объект Canvas
        */
        void Draw(std::shared_ptr<ICanvas>) override;
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_RECTANGLE_H

#ifndef OTUS_CPP_EDITOR_LINE_H
#define OTUS_CPP_EDITOR_LINE_H

#include "primitives/point.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию клаccа CLine,
как одного из потенциальных, создаваемых в документе, примитивов.
*/
namespace otus_editor {

    /**
        * \class CLine
        * \extends APrimitive
        * @brief Класс для отображения линии в документе
          Унаследован от APrimitive, используя методы родителя
    */
    class CLine : public APrimitive{
    private:
        CPoint m_StartPoint; /**<
         точка - стартовая позиция */
        CPoint m_EndPoint; /**<
         точка - конечная позиция */
    public:

        /**
            * @brief Конструктор по умолчанию.
        */
        CLine();

        /**
            * @brief Параметризированный конструктор.
            * @param start_point точка - первая точка линии
            * @param end_point точка - вторая точка линии
        */
        CLine(const CPoint& start_point, const CPoint& end_point);

        /**
            * @brief Деструктор по умолчанию.
            Реализация виртуального метода абстрактного родителя
        */
        ~CLine() override;

        /**
        * @brief Метод, осуществляющий отрисовку линии
        * @param canvas умный указатель на объект Canvas
        */
        void Draw(std::shared_ptr<ICanvas> canvas) override;
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_LINE_H

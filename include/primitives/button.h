#ifndef OTUS_CPP_EDITOR_BUTTON_H
#define OTUS_CPP_EDITOR_BUTTON_H

#include <functional>
#include "rectangle.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию клаccf СButton,
как базовой структурной единицы отображения в редакторе
*/

namespace otus_editor {

    using FuncOnClick = std::function<void()>;

    /**
        * \class CButton
        * \extends CRectangle
        * @brief Класс для отображения кнопки в документе
          Унаследован от СRectangle, как объект прямоугольной формы
    */
    class CButton : protected CRectangle {
    private:
        std::string m_Caption; /**< строковый тип - Надпись на кнопке */
        FuncOnClick m_OnClick; /**< функтор - функция привязанная к кнопке*/

    public:

        /**
            * @brief Конструктор кнопки.
            * @param pos CPoint - левый верхний угол кнопки
            * @param width целочисленный тип - ширина кнопки
            * @param height целочисленный тип - высота кнопки
            * @param caption строковый тип - надпись на кнопке
        */
        CButton(CPoint pos, int width, int height, std::string caption);

        /**
            * @brief Деструктор отображения по умолчанию.
              Реализация виртуального метода родителей
        */
        ~CButton() override;

        /**
        * @brief Метод, осуществляющий отрисовку кнопки
        * @param canvas умный указатель на объект Canvas
        */
        void Draw(::std::shared_ptr<ICanvas>) override;

        /**
        * @brief Метод, осуществляющий привязку к событию, нажатие на кнопку функцию обработчик
        * @param func функтор - функция обработчик события
        */
        void SetOnClick(FuncOnClick func);

        /**
        * @brief Метод, осуществляющий вызов функции обработчика события
        */
        void OnClick();
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_BUTTON_H

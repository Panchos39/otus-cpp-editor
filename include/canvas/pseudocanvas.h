#ifndef OTUS_CPP_EDITOR_CPSEUDOCANVAS_H
#define OTUS_CPP_EDITOR_CPSEUDOCANVAS_H

#include "canvas/icanvas.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию класса CPseudoCanvas для
 отображения примитивов в консольном интерфейсе.
*/
namespace otus_editor {

    /**
        * \class CPseudoCanvas
        * \extends ICanvas
        * @brief Класс для консольного отображения примитивов (заглушка).
        Унаследован от интерфейса ICanvas
    */
    class CPseudoCanvas : public ICanvas {
    public:
        /**
            * @brief Конструктор по умолчанию.
        */
        CPseudoCanvas();

        /**
            * @brief Деструктор по умолчанию.
        */
        ~CPseudoCanvas();

        /**
    	    * @brief Метод, осущесвляющий отрисовку точки в заданной координате
                в псевдографическом режиме
    	    * @param x целочисленный тип - координата x
            * @param y целочисленный тип - координата y
    	    * @return None
	    */
        void Draw(int x, int y, EColor color);
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_CPSEUDOCANVAS_H

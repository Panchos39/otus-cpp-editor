#ifndef OTUS_CPP_EDITOR_CGRAPHCANVAS_H
#define OTUS_CPP_EDITOR_CGRAPHCANVAS_H

#include "icanvas.h"

/*!
\file
\brief Заголовочный файл, содержащий декларацию класса CGraphCanvas для
 отображения примитивов в графическом интерфейсе.
*/
namespace otus_editor {
    /**
        * \class CGraphCanvas
        * \extends ICanvas
        * @brief Класс для графического отображения примитивов (заглушка).
        Унаследован от интерфейса ICanvas
    */
    class CGraphCanvas : public ICanvas{
    public:
        /**
            * @brief Конструктор по умолчанию.
        */
        CGraphCanvas();

        /**
            * @brief Деструктор по умолчанию.
        */
        ~CGraphCanvas();

        /**
    	    * @brief Метод, осущесвляющий отрисовку точки в заданной координате
                в графическом режиме
    	    * @param x целочисленный тип - координата x
            * @param y целочисленный тип - координата y
    	    * @return None
	    */
	    void Draw(int x, int y, EColor color);
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_CGRAPHCANVAS_H

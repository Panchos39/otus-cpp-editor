#ifndef OTUS_CPP_EDITOR_VIEW_H
#define OTUS_CPP_EDITOR_VIEW_H

#include <memory>
#include "canvas/icanvas.h"
#include "primitives/button.h"
#include "controller.h"
#include "primitives/point.h"


/*!
\file
\brief Заголовочный файл, содержащий декларацию класса CEditorView,
как одна из составляющих паттерна MVC
*/
namespace otus_editor {

    /**
        * \class CEditorView
        * \extends IObserver
        * @brief Класс для обеспечения отображения редактора (MVC).
          Унаследован от IObserver, значит является объектом-наблюдателем
    */
    class CEditorView : public IObserver {
    private:
        std::shared_ptr<CEditorController> m_pController;/**<
        Умный указатель на контроллер, обеспечивающий связь между логикой и отображением */

        std::shared_ptr<ICanvas> m_pCanvas; /**<
        Умный указатель на объект Canvas */

        std::unique_ptr<CButton> m_pBtnOpen = \
                            std::make_unique<CButton>(CPoint(100, 200, EColor::COLOR_WHITE),
                                                        10, 10, std::string("Open")); /**<
        Умный указатель на обьект CButton, осуществляющий открытие существующего документа */
        std::unique_ptr<CButton> m_pBtnSave = \
                            std::make_unique<CButton>(CPoint(150, 200, EColor::COLOR_BLUE),
                                                        10, 10, std::string("Save")); /**<
        Умный указатель на обьект CButton, осуществляющий сохранение текущего документа */
        std::unique_ptr<CButton> m_pBtnClear = \
                            std::make_unique<CButton>(CPoint(100, 150, EColor::COLOR_GREEN),
                                                        10, 10, std::string("Clear")); /**<
        Умный указатель на обьект CButton, осуществляющий очистку текущего документа */

        std::unique_ptr<CButton> m_pBtnColor = \
                            std::make_unique<CButton>(CPoint(50, 200, EColor::COLOR_RED),
                                                        10, 10, std::string("Color")); /**<
        Умный указатель на обьект CButton, осуществляющий выбор текущего цвета в палитре */

        std::unique_ptr<CButton> m_pBtnCreatePoint = \
                            std::make_unique<CButton>(CPoint(10, 100, EColor::COLOR_YELLOW),
                                                        10, 10, std::string("Point")); /**<
        Умный указатель на обьект CButton, создающий новый объект CPoint */
        std::unique_ptr<CButton> m_pBtnCreateLine = \
                            std::make_unique<CButton>(CPoint(10, 150, EColor::COLOR_BLACK),
                                                        10, 10, std::string("Line")); /**<
        Умный указатель на обьект CButton, создающий новый объект CLine */

        std::unique_ptr<CButton> m_pBtnCreateCircle = \
                            std::make_unique<CButton>(CPoint(10, 200, EColor::COLOR_BLUE),
                                                        10, 10, std::string("Circle")); /**<
        Умный указатель на обьект CButton, создающий новый объект CCircle */
        std::unique_ptr<CButton> m_pBtnCreateRectangle = \
                            std::make_unique<CButton>(CPoint(10, 250, EColor::COLOR_WHITE),
                                                        10, 10, std::string("Rectangle")); /**<
        Умный указатель на обьект CButton, создающий новый объект CRectangle */

        std::unique_ptr<CButton> m_pBtnToolDelete = \
                            std::make_unique<CButton>(CPoint(10, 300, EColor::COLOR_BLACK),
                                                        10, 10, ::std::string("Delete")); /**<
        Умный указатель на обьект CButton, осуществляющий удаление выбранного примитива */
    public:

        /**
            * @brief Конструктор отображения.
            * @param controller умный указатель на контроллер (MVC)
        */
        explicit CEditorView(
                std::shared_ptr<CEditorController> controller
        );

        /**
            * @brief Деструктор отображения по умолчанию.
        */
        ~CEditorView() = default;

        /**
            * @brief Метод, передающий уведомление об обновлении документа.
              Реализация чистого виртуального метода родителя
        */
        void Update() override;

        /**
            * @brief Метод, обработчик события - нажатие кнопки Open.
        */
        void OnClickBtnOpen();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Save.
        */
        void OnClickBtnSave();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Clear.
        */
        void OnClickBtnClear();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Color.
        */
        void OnClickBtnColor();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Create Point.
        */
        void OnClickBtnCreatePoint();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Create Line.
        */
        void OnClickBtnCreateLine();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Create Circle.
        */
        void OnClickBtnCreateCircle();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Create Rectangle.
        */
        void OnClickBtnCreateRectangle();

        /**
            * @brief Метод, обработчик события - нажатие кнопки Delete.
        */
        void OnClickBtnDelete();
    };

} // otus_editor

#endif //OTUS_CPP_EDITOR_VIEW_H

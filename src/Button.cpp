#include "include/Button.hpp"

Button::Button(std::string txt, QWidget *window)
{
  _Px = 0;
  _Py = 0;
  _Sx = 0;
  _Sy = 0;
  _Txt = txt;
  _Btn = new QPushButton(_Txt.c_str(), window);
  _Btn->setCursor(Qt::PointingHandCursor);
}

Button::Button(std::string txt, QWidget *window, const size_t &Px, const size_t &Py, const size_t &Sx, const size_t &Sy)
{
  _Px = Px;
  _Py = Py;
  _Sx = Sx;
  _Sy = Sy;
  _Txt = txt;
  _Btn = new QPushButton(_Txt.c_str(), window);
  _Btn->setCursor(Qt::PointingHandCursor);
}

Button::~Button()
{

}

void	Button::actualise() const
{
  _Btn->setGeometry(_Px, _Py, _Sy, _Sy);
  _Btn->setToolTip(_Txt.c_str());
}

#include "include/Saisie.hpp"

Saisie::Saisie(std::string txt, QWidget *window)
{
  _Px = 0;
  _Py = 0;
  _Sx = 0;
  _Sy = 0;
  _Txt = txt;
  _Ldt = new QLineEdit(window);
}

Saisie::Saisie(std::string txt, QWidget *window, const size_t &Px, const size_t &Py, const size_t &Sx, const size_t &Sy)
{
  _Px = Px;
  _Py = Py;
  _Sx = Sx;
  _Sy = Sy;
  _Txt = txt;
  _Ldt = new QLineEdit(window);
}

Saisie::~Saisie()
{
  delete _Ldt;
}

void    Saisie::actualise() const
{
  _Ldt->setGeometry(_Px, _Py, _Sy, _Sy);
}

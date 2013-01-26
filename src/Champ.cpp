#include "include/Champ.hpp"

std::string	Champ::getTxt() const
{
  return (_Txt);
}

size_t  Champ::getPx() const
{
  return (_Px);
}

size_t  Champ::getPy() const
{
  return (_Py);
}

size_t  Champ::getSx() const
{
  return (_Sx);
}

size_t  Champ::getSy() const
{
  return (_Sy);
}

void    Champ::setSize(const size_t &Sx, const size_t &Sy)
{
  _Sx = Sx;
  _Sy = Sy;
}

void    Champ::setPose(const size_t &Px, const size_t &Py)
{
  _Px = Px;
  _Py = Py;
}

#ifndef	__BUTTON_HPP__
#define	__BUTTON_HPP__

#include <QWidget>
#include <QPushButton>
#include <string>
#include "include/Champ.hpp"

class	Button : public Champ
{
public:
  Button(std::string txt, QWidget *window);
  Button(std::string txt, QWidget *window, const size_t &Px, const size_t &Py, const size_t &Sx, const size_t &Sy);
  ~Button();
  void		actualise() const;
private:
  QPushButton	*_Btn;
};

#endif

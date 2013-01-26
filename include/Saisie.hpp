#ifndef	__SAISIE_HPP__
#define	__SAISIE_HPP__

#include <QWidget>
#include <QLineEdit>
#include <string>
#include "include/Champ.hpp"

class	Saisie : public Champ
{
public:
  Saisie(std::string txt, QWidget *window);
  Saisie(std::string txt, QWidget *window, const size_t &Px, const size_t &Py, const size_t &Sx, const size_t &Sy);
  ~Saisie();
  void		actualise() const;
private:
  QLineEdit	*_Ldt;
};

#endif

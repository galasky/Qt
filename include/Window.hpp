#ifndef	__WINDOW_HH__
#define	__WINDOW_HH__

//	#include <QtGui>
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <string>
#include <map>
//#include <QIcon>

#include "include/Champ.hpp"

class	Window
{
public:
  Window(const size_t &SizeX, const size_t &SizeY);
  ~Window();
  void		setSize(const size_t &SizeX, const size_t &SizeY);
  Window	&operator<<(Champ &);
  void		show();

  QWidget	*getWindow();
private:
  QWidget	*_window;
  int		_SizeX;
  int		_SizeY;

  std::map<std::string, Champ*> _Champ;
};

#endif

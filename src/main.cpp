#include <QWidget>
#include <QPushButton>

#include <iostream>
#include <QApplication>
#include <unistd.h>
#include "include/Window.hpp"
#include "include/Button.hpp"
#include "include/Saisie.hpp"

int main(int ac, char *av[])
{
  QApplication	app(ac, av);
  Window	w(800, 800);
  Button	test("test", w.getWindow(), 50, 50, 50, 50);
  Button	quiter("Quiter", w.getWindow(), 500, 50, 100, 100);
  Saisie	Ip("Ip", w.getWindow(), 400, 400, 0, 50);

  w << test << quiter << Ip;
  w.show();
  return app.exec();
}

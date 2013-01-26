#include "include/Window.hpp"

Window::Window(const size_t &SizeX, const size_t &SizeY)
{
  _SizeX = SizeX;
  _SizeY = SizeY;
  _window = new QWidget;
  _window->setFixedSize(_SizeX, _SizeY);
}

Window::~Window()
{
}

void	Window::setSize(const size_t &SizeX, const size_t &SizeY)
{
  _SizeX = SizeX;
  _SizeY = SizeY;
  _window->setFixedSize(_SizeX, _SizeY);
}

Window	&Window::operator<<(Champ &C)
{
  _Champ[C.getTxt()] = &C;
  return (*this);
}

void	Window::show()
{
  //  _Btn["test"]->actualise();
  
   
  for (std::map<std::string, Champ*>::iterator it = _Champ.begin(); it != _Champ.end(); ++it)
    {
      it->second->actualise();
    }

  _window->show();
}

QWidget	*Window::getWindow()
{
  return (_window);
}

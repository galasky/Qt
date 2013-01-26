#ifndef	__CHAMP_HPP__
#define	__CHAMP_HPP__

#include <string>

class	Champ
{
public:
  virtual void	actualise() const = 0;
  std::string	getTxt() const;
  size_t	getPx() const;
  size_t	getPy() const;
  size_t	getSx() const;
  size_t	getSy() const;
  void		setSize(const size_t &Sx, const size_t &Sy);
  void		setPose(const size_t &Px, const size_t &Py);
protected:
  std::string	_Txt;
  size_t        _Px;
  size_t        _Py;
  size_t        _Sx;
  size_t        _Sy;
};

#endif

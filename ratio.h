//ratio.h
#include <iostream>

class Ratio
{ 
  friend Ratio sum(Ratio, Ratio);
  public:
     Ratio(int, int); //constructor
     void print() const;
  private:
     int _num;  //numerator
     int _den;  //denominator
};

Ratio sum(Ratio x, Ratio y)
{
  int num = x._num*y._den + x._den*y._num;
  int den = x._den*y._den;
  Ratio temp(num, den);
  return temp;
}

Ratio::Ratio(int num, int den)
{
  _num = num;
  _den = den;
}

void Ratio::print() const
{
 std::cout << _num << '/' << _den << std::endl;
}


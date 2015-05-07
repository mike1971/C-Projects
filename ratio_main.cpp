//ratio_main.cpp
#include "ratio.h"

int main()
{
Ratio r(3, 4), s(2,3), t(0,1); //calls constructor
t = sum(r,s); //NOT r.sum(s);
t.print();
return 0;
}

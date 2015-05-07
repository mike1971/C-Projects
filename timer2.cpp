/* File: timer.cpp */
#include <iostream>
#include "time2.h"
using namespace std;


int main()
{
Time t(2, 50);
t.setHour(5);
t.setMinute(20);
cout << "The time is " << t << endl;
}

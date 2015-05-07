/* File: time.cpp */
#include <iostream>
#include "time2.h"


std::ostream& operator <<(std::ostream& outs, const Time& source)
{
  outs << source.hour << ":" << source.minute;
  return outs;
}

Time::Time(int hr, int min)
{
   hour = hr;
   minute = min;
}

void Time::setHour(int newValue)
{
   hour = newValue;
}

void Time::setMinute(int newValue)
{
    minute = newValue % 60;
}

void Time:: shiftBy(int dh, int dm) 
{
  hour += dh;
  minute += dm;
}




/* File: time.cpp */
#include "time.h"


Time::Time(int hr, int min)
{
   hour = hr;
   minute = min;
}

void Time::setHour(int newValue)
{
   hour = newValue;
}

void Time:: shiftBy(int dh, int dm) 
{
  hour += dh;
  minute += dm;
}


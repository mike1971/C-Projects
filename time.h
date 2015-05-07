/* File: time.h */

class Time {
   public:
      Time(int hr, int min);
      void setHour(int newValue);
      int getHour();
      void shiftBy(int dh, int dm);
      
   private:
      int hour, minute;
};

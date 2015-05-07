/* File: time.h */

class Time {
   public:
      Time(int hr, int min);
      void setHour(int newValue);
      void setMinute(int newValue);
      void shiftBy(int dh, int dm);
      friend std::ostream& operator <<(std::ostream& outs, const Time& source);
   private:
      int hour, minute;
};



#ifndef l29xdriver_h
#define l29xdriver_h

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif 

class Channel1
{
	public:
		Channel1(int fwd, int rev);
		void setSpeed(int speed);
	private:
		int fwd_pin;
		int rev_pin;
};
class Channel2
{
	public:
		Channel2(int fwd, int rev);
		void setSpeed(int speed);
	private:
		int fwd_pin;
		int rev_pin;
};
#endif

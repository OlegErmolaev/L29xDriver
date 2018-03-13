#include "L29xDriver.h"

Channel1::Channel1(int fwd, int rev)
{
	fwd_pin = fwd;
	rev_pin = rev;
}
void Channel1::setSpeed(int speed)
{
	if(speed > 0)
		{
		analogWrite(fwd_pin, 0);
		analogWrite(rev_pin, 0);
		analogWrite(fwd_pin, speed);
	}else if(speed < 0)
		{
		analogWrite(fwd_pin, 0);
		analogWrite(rev_pin, 0);
		analogWrite(rev_pin, -speed);		
	}else{
		analogWrite(fwd_pin, 0);
		analogWrite(rev_pin, 0);
	}
}

Channel2::Channel2(int fwd, int rev)
{
	fwd_pin = fwd;
	rev_pin = rev;
}
void Channel2::setSpeed(int speed)
{
	if(speed > 0)
		{
		analogWrite(fwd_pin, 0);
		analogWrite(rev_pin, 0);
		analogWrite(fwd_pin, speed);
	}else if(speed < 0)
		{
		analogWrite(fwd_pin, 0);
		analogWrite(rev_pin, 0);
		analogWrite(rev_pin, -speed);		
	}else{
		analogWrite(fwd_pin, 0);
		analogWrite(rev_pin, 0);
	}
}

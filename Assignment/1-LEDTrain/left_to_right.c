#include "main.h"
extern unsigned char mask;
extern int num;

void left_to_right(void)
{

	if(cond)
	{
		num = num | mask;
		mask = mask << 1;
		LED_ARRAY = num;
		if(num == 255)
		{
			cond = 0;
			mask = 1;
		}
	}
	else
	{
		num = num << 1;
		LED_ARRAY = num;
		mask =  mask << 1;
		if(num == 0)
		{
			flag = 0;
			cond = 1;
			num = 0;
			mask = 128;
		}
	}
}

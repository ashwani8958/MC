#include "main.h"

static void init_config(void)
{
	ADCON1 = 0x0F;

	LED_ARRAY = OFF;
	
	TRISB = 0x00;
}

int num = 1;
unsigned char mask = 1;

void main(void)
{
	unsigned long i;


	init_config();
	while(1)
	{
		if(flag)
		{
			left_to_right();
		}
		else
		{
			right_to_left();
		}

		for(i = 100000; i--; );
	}

}

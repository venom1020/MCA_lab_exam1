#include"timer.h"
int main()
{ pll_init(); //initialise pll to make pclk equal to 60Mhz
	IODIR0|=0XF; //make first four pins of port0 as output port
	while(1)
	{ for(int i=0;i<=3;i++)
			{
				IOPIN0=(1<<i); //write to pin i "i" is in range 0-3 
			  delay_ms(50); //call delay of 50ms
			}
	}
	
return 0;
}
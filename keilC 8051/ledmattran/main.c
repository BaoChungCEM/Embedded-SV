#include "main.h"
#include "..\library\delay.h"
unsigned char code Font5x7[10][7]={{0x0E,0x11,0x13,0x15,0x19,0x11,0x0E},
																	{0x1F,0x04,0x04,0x04,0x14,0x0C,0x04},
																	{0x1F,0x08,0x04,0x02,0x01,0x11,0x0E},
																	{0x0E,0x11,0x01,0x06,0x01,0x11,0x0E},
																	{0x02,0x1F,0x12,0x08,0x04,0x02,0x01},
																	{0x1E,0x01,0x01,0x01,0x1E,0x10,0x1F},
																	{0x0E,0x11,0x11,0x1E,0x10,0x11,0x0E},
																	{0x04,0x04,0x04,0x02,0x01,0x01,0x1F},
																	{0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E},
																	{0x0E,0x01,0x01,0x0F,0x11,0x11,0x0E}};
																	
void main(){
	unsigned char i;
	unsigned char cnt,j;
while(1)
	{ for(cnt=0;cnt<10;cnt++)
		{
			for(j=0;j<142;j++)
			{
		for(i=0;i<7;i++)
		{
		P0=Font5x7[cnt][i];
		P3 =0x01<<i;
		delay_ms(1);
		P3 = 0x00;
		}
	}
	}
	}
}
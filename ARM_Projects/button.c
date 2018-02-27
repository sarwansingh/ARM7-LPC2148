#include<lpc21xx.h>
// button  is connect on P1.16 LED on P0.10
// when button is pressed led should glow else off  // led is power from Vcc
long int i ; 
int main()
{	IO0DIR =  (1<<10);
	IO1DIR = ~(1<<16);
	IO0SET =  (1<<10);	// make ledoff

	while(1)
	{  if (!(IO1PIN  & (1<<16))) {
		IO0CLR =  (1<<10);for (i=0;i<3000000;i++);	
		IO0SET =  (1<<10); for (i=0;i<3000000;i++);
	    } 
		 
	}
}
/*
IO0SET =  0x00000c00;	IO0CLR =  0x00003000;
		IO0CLR =  0x02000000;
		for (i=0;i<3000000;i++);
		IO0CLR =  0x00000c00; 	IO0SET =  0x00003000; 
		IO0SET =  0x02000000;	
		for (i=0;i<3000000;i++);*/

